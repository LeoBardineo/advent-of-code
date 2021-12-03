#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int x, pos = 0, depth = 0, aim = 0;
  string comando;
  for (int i = 0; i < 1000; i++) {
    cin >> comando >> x;
    if(comando == "forward"){
      pos += x;
      depth += aim * x;
    } else if(comando == "down") {
      aim += x;
    } else if(comando == "up") {
      aim -= x;
    }
  }
  cout << depth * pos << "\n";
  return 0;
}