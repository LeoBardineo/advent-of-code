#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string x;
  string gammaRate = "", epsilonRate = "";
  int countZero[12] = {0, 0, 0, 0, 0, 0, 0, 0}, countUm[12] = {0, 0, 0, 0, 0, 0, 0, 0};
  for (int i = 0; i < 1000; i++) {
    cin >> x;
    for (int j = 0; j < x.size(); j++) {
      if(x[j] == '0') countZero[j]++;
      if(x[j] == '1') countUm[j]++;
    }
  }
  for (int i = 0; i < 12; i++) {
    if(countZero[i] > countUm[i]){
      gammaRate += '0';
      epsilonRate += '1';
    }else{
      gammaRate += '1';
      epsilonRate += '0';
    }
  }
  cout << gammaRate << "\n\n";
  cout << epsilonRate << "\n";
  return 0;
}