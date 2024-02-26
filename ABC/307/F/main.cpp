#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define DPRINT(str) std::cout<<(#str)<< " = "<<str<<std::endl
#define PRINT(os, c)                              \
  do {                                            \
    os << "[ ";                                   \
    for (auto i = c.begin(); i != c.end(); i++) { \
      if (i != c.begin()) {                       \
        os << ", ";                               \
      }                                           \
      os << *i;                                   \
    }                                             \
    os << " ]";                                   \
    return os;                                    \
  } while (0)
#define PRINT_MAP(os, c)                          \
  do {                                            \
    os << "{ ";                                   \
    for (auto i = c.begin(); i != c.end(); i++) { \
      if (i != c.begin()) {                       \
        os << ", ";                               \
      }                                           \
      os << (*i).first << " => " << (*i).second;  \
    }                                             \
    os << " }";                                   \
    return os;                                    \
  } while (0)
#define PRINT_SET(os, c)                          \
  do {                                            \
    os << "( ";                                   \
    for (auto i = c.begin(); i != c.end(); i++) { \
      if (i != c.begin()) {                       \
        os << ", ";                               \
      }                                           \
      os << *i;                                   \
    }                                             \
    os << " )";                                   \
    return os;                                    \
  } while (0)

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& c) {
  PRINT(os, c);
}
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::deque<T>& c) {
  PRINT(os, c);
}
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::list<T>& c) {
  PRINT(os, c);
}
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::forward_list<T>& c) {
  PRINT(os, c);
}
template <typename T, typename U, typename V>
std::ostream& operator<<(std::ostream& os, std::priority_queue<T,U,V> c) {
  std::vector<T> tmp;
  while(!c.empty()){
    tmp.push_back(c.top());
    c.pop();
  }
  PRINT(os, tmp);
}
template <typename T, typename U>
std::ostream& operator<<(std::ostream& os, const std::map<T,U>& c) {
  PRINT_MAP(os, c);
}
template <typename T, typename U>
std::ostream& operator<<(std::ostream& os, const std::multimap<T,U>& c) {
  PRINT_MAP(os, c);
}
template <typename T, typename U>
std::ostream& operator<<(std::ostream& os, const std::unordered_map<T,U>& c) {
  PRINT_MAP(os, c);
}
template <typename T, typename U>
std::ostream& operator<<(std::ostream& os, const std::unordered_multimap<T,U>& c) {
  PRINT_MAP(os, c);
}
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::set<T>& c) {
  PRINT_SET(os, c);
}
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::multiset<T>& c) {
  PRINT_SET(os, c);
}
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::unordered_set<T>& c) {
  PRINT_SET(os, c);
}
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::unordered_multiset<T>& c) {
  PRINT_SET(os, c);
}
template <typename T, typename U>
std::ostream& operator<<(std::ostream& os, const std::pair<T, U>& p) {
  os << "< " << p.first << ", " << p.second << " >";
  return os;
}
template <typename T>
std::istream& operator>>(std::istream& is, std::vector<T>& c){
  for(auto& e:c) is>>e;
  return is;
}
template<typename T, typename U>
std::pair<T,U> operator+(const std::pair<T,U>& l, const std::pair<T,U>& r){
  return {l.first+r.first, l.second+r.second};
}
template<typename T, typename U>
std::pair<T,U> operator-(const std::pair<T,U>& l, const std::pair<T,U>& r){
  return {l.first-r.first, l.second-r.second};
}
template<typename T, typename U>
std::pair<T,U> operator*(const std::pair<T,U>& l, const int n){
  return {l.first*n, l.second*n};
}
template<typename T, typename U>
std::pair<T,U> operator/(const std::pair<T,U>& l, const int n){
  return {l.first/n, l.second/n};
}
template<typename T>
inline T lsb(const T& n){
  return n & (~n + 1);
}
unsigned long long int factorial(unsigned long long int n){
  if(n<=1)return 1;
  return n*factorial(n-1);
}

int main(void){
  ll N,M;cin>>N>>M;
  vector<vector<pair<int,int>>> edge(N);
  vector<int> infected(N,-1);
  priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq, pq2;
  for(ll i = 0;i<M;i++){
    ll U,V,W;cin>>U>>V>>W;U--;V--;
    edge[U].push_back({W,V});
    edge[V].push_back({W,U});
  }
  ll K;cin>>K;
  for(int i=0;i<K;i++){
    ll A;cin>>A;A--;
    infected[A]=0;
    for(int j =0;j<edge[A].size();j++){
      pq.push({edge[A][j].first,edge[A][j].second});
    }
  }

  ll D;cin>>D;
  vector<ll> X(D);
  cin>>X;
  //  DPRINT(edge);
  //  DPRINT(infected);
  //  DPRINT(X);

  for(int i = 0;i< D;i++){
    //DPRINT(pq);
    while(!pq.empty() && pq.top().first <=X[i]){
      auto p = pq.top();pq.pop();
      if(infected[p.second]>=0)continue;
      pq2.push(p);
    }
    //    DPRINT(pq2);
    while(!pq2.empty()){
      auto p = pq2.top();pq2.pop();
      if(infected[p.second]>=0)continue;
      infected[p.second]=i+1;
      for(const auto e :edge[p.second]){
	if(infected[e.second] >= 0)continue;
	if(p.first+e.first<=X[i])pq2.push({p.first+e.first, e.second});
	else pq.push(e);
      }
    }
  }
  //  DPRINT(infected);
  for(auto e:infected){
    cout<<e<<endl;
  }
  return 0;
}
