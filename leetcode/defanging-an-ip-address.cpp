#include <bits/stdc++.h>
using namespace std;

string defangIPaddr(string address) {
  string defangedAddress = "";
  for (int i = 0; i < address.size(); i++) {
    if (address[i] == '.') {
      defangedAddress += "[.]";
    } else {
      defangedAddress += address[i];
    }
  }
  return defangedAddress;
}

int main(int argc, char const *argv[]) {
  cout << defangIPaddr("1.1.1.1");

  return 0;
}