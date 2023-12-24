#include <bits/stdc++.h>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
  vector<int> ans(nums.size());
  for (int i = 0; i < nums.size(); i++) {
    ans[i] = nums[nums[i]];
  }
  return ans;
}

int main(int argc, char const* argv[]) {
  vector<int> nums = {1, 2, 3, 4, 0};
  vector<int> ans = buildArray(nums);
  for (const int& ai : ans) cout << ai << '\t';

  return 0;
}