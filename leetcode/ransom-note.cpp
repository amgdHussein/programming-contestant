#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
  if (ransomNote.size() > magazine.size()) return false;

  unordered_map<char, int> ranCnt;
  for (const char &c : ransomNote) ranCnt[c]++;

  unordered_map<char, int> magaCnt;
  for (const char &c : magazine) magaCnt[c]++;

  for (auto it = ranCnt.begin(); it != ranCnt.end(); it++) {
    char letter = it->first;
    int count = it->second;

    if (magaCnt[letter] < count) return false;
  }

  return true;
}

bool canConstruct2(string ransomNote, string magazine) {
  if (ransomNote.size() > magazine.size()) return false;

  int i = 0, n = 26;
  vector<int> cnt(n);

  while (i < ransomNote.size()) {
    cnt[ransomNote[i] - 'a']--;
    cnt[magazine[i] - 'a']++;
    i++;
  }

  while (i < magazine.size()) {
    cnt[magazine[i] - 'a']++;
    i++;
  }

  while (n--) {
    if (cnt[n] < 0) return false;
  }

  return true;
}

bool canConstruct3(string ransomNote, string magazine) {
  if (ransomNote.size() > magazine.size()) return false;

  sort(ransomNote.begin(), ransomNote.end());
  sort(magazine.begin(), magazine.end());

  int i = 0, j = 0;

  while (i < ransomNote.size() && j < magazine.size()) {
    if (magazine[j] == ransomNote[i]) {
      i++;
      j++;
    } else if (magazine[j] < ransomNote[i]) {
      j++;
    } else {
      return false;
    }
  }

  return i == ransomNote.size();
}

int main(int argc, char const *argv[]) {
  string ransomNote = "aba", magazine = "aaaaaaaab";

  bool isConstructable = canConstruct(ransomNote, magazine);
  cout << isConstructable << '\n';

  return 0;
}