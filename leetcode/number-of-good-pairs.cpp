#include <bits/stdc++.h>
using namespace std;

// 1
int numIdenticalPairs(vector<int> &nums) {
  int ans = 0;

  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] == nums[j]) {
        ans++;
      }
    }
  }

  return ans;
};

int sumPairs(const int &n) { return n * (n + 1) / 2; }  // sum from 1 to N

// 2
int numIdenticalPairs1(vector<int> &nums) {
  vector<int> occur(101);
  for (const int &num : nums) occur[num]++;

  int ans = 0;

  for (const int &o : occur) {
    if (o <= 1) continue;
    ans += sumPairs(o - 1);
  }

  return ans;
}

// 3
int numIdenticalPairs2(vector<int> &nums) {
  vector<int> occur(101);
  int ans = 0;

  for (const int &num : nums) {
    if (occur[num]) {
      ans += occur[num];
    }
    occur[num]++;
  }

  return ans;
}

int main(int argc, char const *argv[]) {
  vector<int> nums = {1, 2, 3, 1, 1, 3};
  cout << numIdenticalPairs(nums);

  return 0;
}