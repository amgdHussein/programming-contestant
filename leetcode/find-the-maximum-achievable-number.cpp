#include <bits/stdc++.h>
using namespace std;

int theMaximumAchievableX(int num, int t) { return num + t * 2; }

int main(int argc, char const *argv[]) {
  int num = 9, t = 2;
  cout << theMaximumAchievableX(num, t);

  return 0;
}
