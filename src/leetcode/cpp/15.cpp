#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;

int bs(VI &nums, int left, int right, int target) {
    if (left > right) {
        return -1;
    }
    int mid = (left + right) / 2;
    if(nums[mid] == target) {
        return nums[mid];
    }
    else if(nums[mid] < target) {
        return bs(nums, mid+1, right, target);
    }
    else {
        return bs(nums, left, mid-1, target);
    }
}

VVI Main(int N, VI &nums) {
    VVI ans;
    // int N = nums.size();
    sort(nums.begin(), nums.end());
    set<VI> ans2;
    for(int i = 0; i < N-2; i++) {
        for(int j = i+1; j < N-1; j++) {
            int ind = bs(nums, j+1, N-1, -(nums[i]+nums[j]));
            if(ind >= 0) {
                VI e;
                e.push_back(nums[i]);
                e.push_back(nums[j]);
                e.push_back(nums[ind]);
                ans2.insert(e);
            }
        }
    }
    for (auto &e : ans2) ans.push_back(e);
    return ans;
}

int main(void) {
    VI in = {-1,0,1,2,-1,4};
    int N = in.size();
    VVI ans = Main(N, in);
    return 0;
}