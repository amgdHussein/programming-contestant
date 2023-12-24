#include <bits/stdc++.h>
using namespace std;

// 1
vector<vector<int>> groupThePeople1(vector<int>& groupSizes) {
  vector<vector<int>> ans;

  unordered_map<int, vector<vector<int>>> um;
  for (int i = 0; i < groupSizes.size(); i++) {
    int s = groupSizes[i];

    if (um.find(s) != um.end()) {
      int groups = um[s].size();
      if (um[s][groups - 1].size() < s) {
        um[s][groups - 1].push_back(i);
      } else {
        um[s].push_back({i});
      }
    } else {
      um[s] = {{i}};
    }
  }

  for (auto iter = um.begin(); iter != um.end(); iter++) {
    for (vector<int>& group : iter->second) ans.push_back(group);
  }

  return ans;
}

// 2
vector<vector<int>> groupThePeople2(vector<int>& groupSizes) {
  vector<vector<int>> ans;

  unordered_map<int, vector<int>> um;
  for (int i = 0; i < groupSizes.size(); i++) {
    int s = groupSizes[i];
    um[s].push_back(i);

    if (um[s].size() == s) {
      ans.push_back(um[s]);
      um.erase(s);
    }
  }

  return ans;
}

int main(int argc, char const* argv[]) {
  vector<int> groupSizes = {3, 3, 3, 3, 3, 1, 3};
  vector<vector<int>> ans = groupThePeople2(groupSizes);
  for (const vector<int>& a : ans) {
    for (const int& ai : a) {
      cout << ai << '\t';
    }
    cout << '\n';
  }

  return 0;
}