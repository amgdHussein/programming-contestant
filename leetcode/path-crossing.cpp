#include <bits/stdc++.h>
using namespace std;

bool isPathCrossing(string path) {
  pair<int, int> p = {0, 0};
  set<pair<int, int>> us;

  for (const char &dir : path) {
    us.insert(p);

    if (dir == 'N') {
      p.first += 1;
    } else if (dir == 'S') {
      p.first -= 1;
    } else if (dir == 'E') {
      p.second += 1;
    } else {
      p.second -= 1;
    }

    if (us.find(p) != us.end()) {
      return true;
    }
  }

  return false;
}

bool isPathCrossing2(string path) {
  unordered_set<int> us = {0};
  map<char, int> dirs = {{'N', 1e4}, {'S', -1e4}, {'W', -1}, {'E', 1}};

  int position = 0;
  for (const char &dir : path) {
    position += dirs[dir];

    if (us.find(position) != us.end()) return true;
    us.insert(position);
  }

  return false;
};

int main(int argc, char const *argv[]) {
  int ans = isPathCrossing("NESSSSW");
  cout << ans << '\n';

  return 0;
}