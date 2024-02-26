#include <bits/stdc++.h>
using namespace std;
int f(int n){
  int factor = 1;
  while(n>=1000){
    n/=10;
    factor*=10;
  }
  return n*factor;
  
}
    

int main(void){
  int n;
  cin>>n;
  cout<<f(n)<<endl;

  return 0;
}

