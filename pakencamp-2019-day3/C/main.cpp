#include <bits/stdc++.h>
using namespace std;
long long int f(int i1, int i2, vector<vector<long long int>>& a){
  long long int res = 0;
  for(int i = 0;i< a.size();i++){
    res += max(a[i][i1],a[i][i2] );
  }
  return res;
}

long long int solve( int n, int m, vector<vector<long long int>>& a){
  long long int res = 0;
  for(int i =0;i< m-1;i++){
    for(int j = i+1;j<m;j++){
      res = max(res, f(i,j,a));
    }
  }
  return res;
}
int main(void){
  int n,m;
  cin>>n>>m;
  vector<vector<long long int>> a(n,vector<long long int>(m,0));
  for(int i = 0;i< n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
    }
  }
  cout<<solve(n,m,a)<<endl;
  return 0;
}

