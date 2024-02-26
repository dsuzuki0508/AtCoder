#include <bits/stdc++.h>
using namespace std;
void solve(void){
}
    

int main(void){
  int n;
  cin>>n;
  int x = 0;
  vector<string> s;
  int mina=0x7fffffff;
  for(int i = 0;i< n;i++){
    string tmps;
    int a;
    cin>>tmps>>a;
    s.push_back(tmps);
    if(a<mina){
      mina=a;
      x=i;
    }
  }

  for(int i = 0;i< n;i++){
    int j = (i+x)%n;
    cout<<s[j]<<endl;
  }

  return 0;
}

