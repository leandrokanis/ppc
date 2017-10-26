/*
URI Online Judge | 1960
Numeração Romana para Números de Página
*/
#include <bits/stdc++.h>
using namespace std;

int milhar(int num){
  return num - num%1000;
}

int centena(int num){
  return num%1000 - num%100;
}

int dezena(int num){
  return num%100 - num%10;
}

int unidade(int num){
  return num%10;
}

typedef map <int,string> tabela;

int main() {
  int num = 0;
  cin >> num;

  tabela a = {
        {1000, "M"},  {900, "CM"},  {800, "DCCC"},  {700, "DCC"}, {600, "DC"},
        {500, "D"},   {400, "CD"},  {300, "CCC"},   {200, "CC"},
        {100, "C"},   { 90, "XC"},  { 80, "LXXX"},  { 70, "LXX"}, { 60, "LX"},
        { 50, "L"},   { 40, "XL"},  { 30, "XXX"},   { 20, "XX"},
        { 10, "X"},   { 9, "IX"},   { 8, "VIII"},   { 7, "VII"},  { 6, "VI"},
        { 1, "I"},    { 2, "II"},   { 3, "III"},    { 4, "IV"},   { 5, "V"}
  };

  cout << a[milhar(num)] + a[centena(num)] + a[dezena(num)] + a[unidade(num)] << endl;

  return 0;
}
