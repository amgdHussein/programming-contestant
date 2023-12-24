#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
  vector<int> ans;
  unordered_map<int, int> um;

  for (int i = 0; i < nums.size(); i++) {
    int comp = target - nums[i];

    if (um.find(comp) != um.end()) {
      ans = {um[comp], i};
      break;
    }

    um[nums[i]] = i;
  }

  return ans;
}

int main(int argc, char const* argv[]) {
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  vector<int> ans = twoSum(nums, target);
  for (const int& a : ans) cout << a << '\t';

  return 0;
}
