#include <bits/stdc++.h>
using namespace std;

int solve(string s){
  vector<int> memo(s.size(),0);
  int res = 0;
  for(int i = 0;i<s.size();i++){
    if(s[i] != 'A' && s[i] != 'T' && s[i] != 'C' && s[i] != 'G')continue;
    if(i!=0){
      memo[i] = memo[i-1]+1;
      res = max(res, memo[i]);
    }else{
      memo[i] = 1;
      res = 1;
    }
  }
  return res;
}
int main(void){
  string s;
  cin>>s;
  cout<<solve(s)<<endl;
  return 0;
}

