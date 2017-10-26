/*
URI Online Judge | 1957
Converter para Hexadecimal
*/
#include <bits/stdc++.h>
using namespace std;

int num_digits(int num){
  int count = 0;
  for (size_t i = 0; i<10; i++) {
    if (num < pow(16, i)) {
      count = i;
      break;
    }
  }
  return count;
}

int main() {

  string tabela[16] = {"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};

  int num, digito, resto;
  cin >> num;

  string hexa[num_digits(num)];
  cout << "digitos: " << num_digits(num) << endl;

  for (int i = 0; i < num_digits(num); i++) {

    digito = num / int(pow(16, num_digits(num)-1-i));
    resto = num % int(pow(16, num_digits(num)-1-i));

    cout << "digito: " << digito << endl;
    cout << "resto: " << resto << endl;

    hexa[i] = tabela[digito];
    //cout << hexa[i] << endl;
  }

  return 0;
}
