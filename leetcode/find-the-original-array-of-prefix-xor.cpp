#include <bits/stdc++.h>
using namespace std;

vector<int> findArray(vector<int> &pref) {
  vector<int> arr(pref.size());

  int temp = 0;
  for (int i = 0; i < pref.size(); i++) {
    arr[i] = temp ^ pref[i];
    temp ^= arr[i];
  }

  return arr;
}

int main(int argc, char const *argv[]) {
  vector<int> pref = {5, 2, 0, 3, 1};
  vector<int> ans = findArray(pref);

  for (const int &a : ans) cout << a << '\t';

  return 0;
}