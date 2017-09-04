// 2_fibonacci_rapido
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

double calculate_fibonacci(int num){
  double result=0;
  result = ( pow(((1+sqrt(5))/2.), num) - pow(((1-sqrt(5))/2.), num) )/(sqrt(5));
  return result;
}

int main() {
  int num=0;
  cin >> num;
  printf("%.1f\n", calculate_fibonacci(num));
  return 0;
}
