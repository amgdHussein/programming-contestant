#include <bits/stdc++.h>
using namespace std;

int numberOfSteps(int num) {
  if (num == 0)
    return 0;
  else if (num % 2 == 0)
    return 1 + numberOfSteps(num / 2);
  else
    return 1 + numberOfSteps(num - 1);
}

int main(int argc, char const *argv[]) {
  int ans = numberOfSteps(14);

  cout << ans << '\n';

  return 0;
}