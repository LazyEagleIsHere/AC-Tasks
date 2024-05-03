#include <bits/stdc++.h>
using namespace std;
int main(){
  string o, c;
  getline(cin, o);
  getline(cin, c);
  int lo = o.length(), lc = c.length(), t = 0;
  bool ok = false;
  for(int i = 0; i < lo; i++){
    ok = false;
    for(int j = 0; j < lc; j++){
      if(i + j == lo) {
        ok = false;
        break;
      }else if(o.at(i + j) == c.at(j)) ok = true;
      else{
        ok = false;
        break;
      }
    }
    if(ok == true) t++;
  }
  cout << t << endl;
  return 0;
}
