#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> g;
string s;
string t;

bool f(int me, int p ){
  //  cout<<"me="<<me<<endl;
  //  cout<<"p="<<p<<endl;
  for(int i = 0;i<g[me].size();i++){
    int child = g[me][i];
    if(child == p)continue;
    if(!f(child,me))return false;
  }
  int B=0,W=0;
  //  cout<<"me="<<me<<endl;
  //  cout<<"p="<<p<<endl;
  for(int i = 0;i<g[me].size();i++){
    int child = g[me][i];
    if(child==p)continue;
    //    cout<<"child="<<child<<endl;
    if(t[child]=='B')B++;
    else if (t[child] == 'W')W++;
    else assert(false);
  }
  if(B==W){
    if(t[p]==' ' || t[p] == s[me]){
      t[p] = s[me];
      //      cout<<t<<endl;
    }else{
      return false;
    }
  }else if((s[me]=='B' && B<W) || (s[me] == 'W' && W<B)){
    return false;
  }

  if(t[me] == ' '){
    if(p!=-1)t[me]=s[p];
    else t[me]='W';
    //    cout<<t<<endl;
  }
  return true;
}

void solve(void){
  int n;
  cin>>n;
  g.clear();
  for(int i=0;i<n;i++){
    g.push_back(vector<int>());
  }
  for(int i=0;i<n-1;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  cin>>s;
  t = string(s.size(), ' ');
  if(f(0,-1)){
    cout<<t<<endl;
  }else{
    cout<<-1<<endl;
  }
}
    

int main(void){
  int t;
  cin>>t;
  for(int i = 0;i< t;i++){
    solve();
  }
  return 0;
}

