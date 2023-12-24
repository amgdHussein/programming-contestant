#include <bits/stdc++.h>
using namespace std;

bool isStrictlyPalindromic(int n) {
  for (int i = 4; i < n; i++) {
    printf("i:%d\t", i);
    for (int j = 2; j < i - 1; j++) {
      cout << (i & j) << '\t';
    }
    cout << '\n';
  }

  return true;
}

int main(int argc, char const* argv[]) {
  int target = 100;
  int ans = isStrictlyPalindromic(target);

  cout << ans << '\n';

  return 0;
}