#include <bits/stdc++.h>
using namespace std;

unsigned long long f(unsigned long long n){
  n = (n&0x5555555555555555) + ((n>>1)&0x5555555555555555);
  n=  (n&0x3333333333333333) + ((n>>2)&0x3333333333333333);
  n=  (n&0x0f0f0f0f0f0f0f0f) + ((n>>4)&0x0f0f0f0f0f0f0f0f);
  n=  (n&0x00ff00ff00ff00ff) + ((n>>8)&0x00ff00ff00ff00ff);
  n=  (n&0x0000ffff0000ffff) + ((n>>16)&0x0000ffff0000ffff);
  n=  (n&0x00000000ffffffff) + ((n>>32)&0x00000000ffffffff);
  return n;
}

void solve(unsigned long long  n){
  if(n<7){
    cout<<-1<<endl;
    return;
  }
  if(f(n) == 3){
    cout<<n<<endl;
    return;
  }
  if(f(n)<3){
    solve(n-1);
    return;
  }
  if(f(n)>3){
    solve(n-(n&(~n+1)));
    return;
  }
  return;
}

  
  


int main(void){
  int t;
  cin>>t;
  for(int i = 0;i< t;i++){
    unsigned long long n;
    cin>>n;
    solve(n);
  }
  return 0;
}

