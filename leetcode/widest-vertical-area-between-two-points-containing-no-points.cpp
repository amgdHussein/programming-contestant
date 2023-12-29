#include <bits/stdc++.h>
using namespace std;

int maxWidthOfVerticalArea(vector<vector<int>>& points) {
  sort(points.begin(), points.end(),
       [](const vector<int>& a, const vector<int>& b) { return a[0] < b[0]; });

  int ans = 0;
  for (int i = 0; i + 1 < points.size(); i++) {
    ans = max(ans, points[i + 1][0] - points[i][0]);
  }

  return ans;
}

int main(int argc, char const* argv[]) {
  vector<vector<int>> points = {{8, 7}, {9, 9}, {7, 4}, {9, 7}};
  int ans = maxWidthOfVerticalArea(points);

  cout << ans << '\n';

  return 0;
}