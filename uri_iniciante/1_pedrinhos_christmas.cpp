// 1_pedrinhos_christmas

#include <bits/stdc++.h>

using namespace std;

int calculate_days_left(int month, int day){

  int calendar [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int days_left = 0;

  for (size_t i = month-1; i < sizeof(calendar)/sizeof(*calendar); i++) {
    days_left += calendar[i];
  }

  return days_left-day+1 -7;
}

int main() {

  int day = 0;
  int month = 0;
  int days_left = 0;

  cin >> day >> month;

  days_left = calculate_days_left(day, month);

  if(days_left == 0) cout << "E natal!";
  else if(days_left == 1) cout << "E vespera de natal!";
  else if(days_left < 0) cout << "Ja passou!";
  else if(days_left > 1) cout << "Faltam " + to_string(days_left) + " dias para o natal!";

  return 0;
}
