#include <bits/stdc++.h>
using namespace std;

int W,H;
int N;
vector<pair<int,int>> ichigo;
int A,B;
vector<int> a,b;

//vector<vector<int>> cnt;
map<pair<int,int>, int> cnt;

int getIndex(const vector<int>& v, int n, int mini=-1,int maxi = -1){
  if(mini < 0)mini=0;
  if(maxi < 0) maxi = v.size();
  if(mini==maxi) return mini;
  int m = (mini+maxi)/2;
  if(n<v[m]){
    return getIndex(v,n,mini,m);
  }else{
    return getIndex(v,n,m+1,maxi);
  }
}

int main(void){
  cin>>W>>H;
  cin>>N;
  for(int i = 0;i<N;i++){
    pair<int,int> tmp;
    cin>>tmp.first>>tmp.second;
    ichigo.push_back(tmp);
  }
  cin>>A;
  for(int i = 0;i< A;i++){
    int tmp;
    cin>>tmp;
    a.push_back(tmp);
  }
  cin>>B;
  for(int i = 0;i< B;i++){
    int tmp;
    cin>>tmp;
    b.push_back(tmp);
  }

  for(int i = 0;i<N;i++){
    //    cout<< "x = "<<getIndex(a, ichigo[i].first);
    //    cout<< " y = "<<getIndex(b, ichigo[i].second)<<endl;
    //    cnt[getIndex(b,ichigo[i].first)][getIndex(a,ichigo[i].second)]++;
    pair<int,int> index = make_pair(getIndex(a,ichigo[i].first), getIndex(b,ichigo[i].second));
    cnt[index] ++;
  }
  int resmin =0x7fffffff;
  int resmax = 0;
  /*
  assert(cnt.size() == B+1);
  for(int i = 0;i< B+1;i++){
    assert(cnt[i].size() == A+1);
    for( int j = 0;j<A+1;j++){
      resmin = min(resmin, cnt[i][j]);
      resmax = max(resmax, cnt[i][j]);
    }
  }
  */
  for(const auto& e:cnt){
    resmin = min(resmin, e.second);
    resmax = max(resmax, e.second);
  }
  if(cnt.size() < (A+1)*(B+1))resmin = 0;
  cout<<resmin<<" "<<resmax<<endl;

  

  
  
  return 0;
}

