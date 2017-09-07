/*
URI Online Judge | 1984
O Enigma do Pronalândia
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  string num;
  cin >> num;
  string copy(num);

  reverse(copy.begin(), copy.end());
  cout << copy << endl;
  return 0;
}
