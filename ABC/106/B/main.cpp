#include <bits/stdc++.h>
using namespace std;
int f(int n){
  int res = 0;
  for(int i = 1;i<=n;i++){
    if(n%i==0)res++;
  }
  return res;
}
int solve(int n){
  int res = 0;
  for(int i = 1;i<= n;i+=2){
    if(f(i)==8)res++;
  }
  return res;
}
int main(void){
  int n;
  cin>>n;
  cout<<solve(n)<<endl;

  return 0;
}

