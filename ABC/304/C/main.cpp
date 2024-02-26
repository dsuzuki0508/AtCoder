#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> p;
vector<bool> positive;
int d;
int n;
double dist(int n,int m){
  int tmp = pow(p[n].first -p[m].first,2) + pow(p[n].second - p[m].second, 2);
  return pow(tmp,0.5);
}

void f(int x){
  positive[x] = true;
  for(int i = 0;i< n;i++){
    if ( x == i ) continue;
    if(dist(x,i) <= d && !positive[i]){
      f(i);
    }
  }
}
    

void solve(void){
  f(0);
}
    

int main(void){
  cin>>n>>d;
  for(int i = 0;i< n;i++){
    int x,y;
    cin>>x>>y;
    p.push_back(make_pair(x,y));
    positive.push_back(false);
  }

  solve();

  for(int i = 0;i< n;i++){
    if(positive[i])cout<<"Yes"<<endl;
    else cout<< "No"<<endl;
  }
  return 0;
}

