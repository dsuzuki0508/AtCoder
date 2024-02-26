#include <bits/stdc++.h>
using namespace std;
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
int N,M,K;
vector<vector<int>> edge;
vector<int> hp;
int main(void){
  cin>>N>>M>>K;
  edge.assign(N,vector<int>());
  for(int i = 0;i<M;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    edge[a].push_back(b);
    edge[b].push_back(a);
  }
  hp.assign(N,0);
  //  priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> que;
  priority_queue<pair<int,int>> que;
  for(int i = 0;i<K;i++){
    int p,h;
    cin>>p>>h;
    p--;
    que.push(make_pair(h+1, p));
  }
  //  cout<<"hp = "<<hp<<endl;

  while(!que.empty()){
    int node = que.top().second;
    int h = que.top().first;
    //    cout<<"node = "<<node <<" hp = "<<h<<endl;
    que.pop();
    if(hp[node] >= h) continue; 
    hp[node] = h;
    //    cout<<"hp = "<<hp<<endl;
    if(h<=1)continue;
    for(int i = 0;i< edge[node].size();i++){
      int tmph = h-1;
      que.push(make_pair(tmph, edge[node][i]));
    }
  }

  cout<<hp.size() - count(hp.begin(), hp.end(), 0)<<endl;
  for(int i = 0;i< N;i++){
    if(hp[i])cout<<i+1<<" ";
  }
  cout<<endl;
    

  return 0;
}
