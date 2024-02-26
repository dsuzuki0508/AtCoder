#include <bits/stdc++.h>
using namespace std;

template <typename T>
class UnionFind {
 public:
  int find(const T& a);
  bool unite(const T& a, const T& b);
  bool same(const T& a, const T& b);

 private:
  map<T, int> mMap;
  int mId;
  deque<int> mParent;
  deque<int> mRank;
  int findById(int id);
};

template <typename T>
int UnionFind<T>::findById(int id) {
  if (id == mParent[id]) return id;
  return mParent[id] = this->findById(mParent[id]);
}

template <typename T>
int UnionFind<T>::find(const T& a) {
  int id = 0;
  if (!mMap.count(a)) {
    id = mId++;
    mMap[a] = id;
    mParent.push_back(id);
    mRank.push_back(0);
  }
  id = mMap[a];
  return this->findById(id);
}

template <typename T>
bool UnionFind<T>::unite(const T& a, const T& b) {
  int id_a = this->find(a);
  int id_b = this->find(b);
  if (a == b) return false;

  if (mRank[id_a] < mRank[id_b]) {
    mParent[id_a] = id_b;
  } else {
    mParent[id_b] = id_a;
    if (mRank[id_a] == mRank[id_b]) mRank[id_a]++;
  }
  return true;
}

template <typename T>
bool UnionFind<T>::same(const T& a, const T& b) {
  return this->find(a) == this->find(b);
}

int N,M;
UnionFind<int> u;
int K;
vector<pair<int,int>> k;
int Q;
bool f(int p, int q, UnionFind<int> uf){
  uf.unite(p,q);
  for(int i=0;i<K;i++){
    if(uf.same(k[i].first, k[i].second)){
      return false;
    }
  }
  return true;
}
int main(void) {
  cin>>N>>M;
  for(int i = 0;i< M;i++){
    int tmp1,tmp2;
    cin>>tmp1>>tmp2;

    u.unite(tmp1,tmp2);
  }
  set<pair<int,int> > sp;
  cin>>K;
  for(int i = 0;i<K;i++){
    int x,y;
    cin>>x>>y;
    if(u.find(x)>=u.find(y))swap(x,y);
    sp.insert(make_pair(u.find(x),u.find(y)));
  }
  cin>>Q;
  for(int i = 0;i< Q;i++){
    int p,q;
    cin>>p>>q;
    if(u.find(p)>=u.find(q))swap(p,q);
    //    if(f(p,q, u)){
    //      cout<<"Yes"<<endl;
    //    }else{
    //      cout<<"No"<<endl;
    //    }
    if(sp.count(make_pair(u.find(p),u.find(q)))){
      cout<<"No"<<endl;
    }else{
      cout<<"Yes"<<endl;
    }
  }
  return 0;
}
