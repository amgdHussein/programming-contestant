#include <bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
  vector<int> ans(nums.size());
  int i = 0, j = n, k = 0;
  while (j < n * 2) {
    ans[k++] = nums[i++];
    ans[k++] = nums[j++];
  }
  return ans;
}

int main(int argc, char const* argv[]) {
  vector<int> nums = {2, 7, 11, 15};
  int n = 2;
  vector<int> ans = shuffle(nums, n);
  for (const int& a : ans) cout << a << '\t';

  return 0;
}
