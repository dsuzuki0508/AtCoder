#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;
  vector<int> a;
  cin>>n;
  for(int i = 0;i<n;i++){
    int tmp;
    cin>>tmp;
    a.push_back(tmp);
  }
  sort(a.begin(),a.end());
  bool result = true;
  for(int i = 0;i< n/2;i++){
    int x = i+n/2+1;
    if(a[i]>=a[x] || a[x] <= a[i+1]){
      result = false;
      break;
    }
  }
  if(result) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}

