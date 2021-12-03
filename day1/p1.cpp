#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int num, sum = 0, anterior = 0, contador = -1;
  for (int i = 0; i < 2000; i++) {
    cin >> num;

    if(num > anterior){
      contador++;
    }

    anterior = num;
  }
  cout << contador << "\n";
  return 0;
}