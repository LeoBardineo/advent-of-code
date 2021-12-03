#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int num, sum = 0, anterior = 0, contador = -1;
  vector<int> somas;
  int numeros[3] = {0, 0, 0};
  for (int i = 0; i < 2000; i++) {
    cin >> num;
    numeros[i % 3] = num;

    if(i >= 2){
      sum = numeros[0] + numeros[1] + numeros[2];
    }

    if(sum > anterior){
      contador++;
    }

    anterior = sum;
  }
  cout << contador << "\n";
  return 0;
}