#include <bits/stdc++.h>
using namespace std;

int minPartitions(string n) {
  int ans = 0;
  for (const char& no : n) ans = max(ans, no - '0');
  return ans;
}

int main(int argc, char const* argv[]) {
  cout << minPartitions("29832983");

  return 0;
}