#include <bits/stdc++.h>
#include <map>
using namespace std;

int make_math(int n, string operacao, int operador){
  int result=0;
  if(operacao=="ADICIONAR"){
    result = n + operador;
  } else if(operacao=="SUBTRAIR"){
    result = n - operador;
  } else if(operacao=="MULTIPLICAR"){
    result = n * operador;
  } else if(operacao=="DIVIDIR"){
    result = n / (operador*1.0);
  }
  return result;
}

int main(){
  string line;
  vector<string> words;
  while (getline(cin, line)){
    if(line == ""){
      break;
    }
      istringstream ss(line);
      istream_iterator<string> begin(ss), end;
      vector<string> words(begin, end);
  }

  int n;
  cin >> n;
  int falha = 0;
  for (size_t i = 1; i <= 100; i++) {
    int result = make_math(i, words[0], stoi(words[1]));
  }
  cout << falha;

  return 0;
}
