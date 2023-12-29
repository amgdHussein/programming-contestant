#include <bits/stdc++.h>
using namespace std;

vector<int> leftRightDifference1(vector<int>& nums) {
  vector<int> ans(nums.size());
  int left = 0, right = 0;

  for (int i = 0, j = nums.size() - 1; i < nums.size(); i++, j--) {
    left += nums[i];
    right += nums[j];
    ans[i] = ans[i] + left;
    ans[j] = ans[j] - right;
  }

  for (int i = 0; i < ans.size(); i++) {
    ans[i] = abs(ans[i]);
  }

  return ans;
}

vector<int> leftRightDifference(vector<int>& nums) {
  vector<int> ans(nums.size());
  int t = accumulate(nums.begin(), nums.end(), 0);
  int l = 0;

  for (int i = 0; i < nums.size(); i++) {
    int r = t - l;
    l += nums[i];
    ans[i] = abs(l - r);
  }

  return ans;
}

int main(int argc, char const* argv[]) {
  vector<int> nums = {10, 4, 8, 3};
  vector<int> ans = leftRightDifference(nums);

  for (const int& a : ans) cout << a << '\t';

  return 0;
}