// zerinho ou um
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c=0;
  while (cin >> a >> b >> c) {
    if (a==b && b==c && c==b) cout << "*" << endl;
    else if (a!=b && a!=c) cout << "A" << endl;
    else if (c!=a && c!=b) cout << "C" << endl;
    else if (b!=c && b!=c) cout << "B" << endl;
  }
  return 0;
}
