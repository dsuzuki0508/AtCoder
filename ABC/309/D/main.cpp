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
template<typename Head>
void PRINT_PARAMS(std::ostream& os, const Head& head){
  os<<head;
}
template<typename Head, typename... Tail>
void PRINT_PARAMS(std::ostream& os, const Head& head, const Tail&... tail){
  os<<head<<", ";
  PRINT_PARAMS(os, tail...);
}
template<typename T, size_t... I>
void PRINT_TUPLE_WITH_SEQUENCE( std::ostream& os, const T t, std::index_sequence<I...>){
  PRINT_PARAMS(os, std::get<I>(t)...);
}
template<typename... Args>
std::ostream& operator<<(std::ostream& os, const std::tuple<Args...>& t){
  os<<"< ";
  PRINT_TUPLE_WITH_SEQUENCE(os, t, std::make_index_sequence<std::tuple_size<std::tuple<Args...>>::value>{});
  os<<" >";
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
int N1, N2, M;
vector<vector<int>> edge;
vector<int> cost;

int solve( int n ){
  int ret =0;
  priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
  pq.push({0,n});
  while(!pq.empty()){
    auto [c, node] = pq.top();
    pq.pop();
    if(cost[node]!=-1)continue;
    cost[node]=c;
    ret = max(ret, c);
    for(auto e:edge[node]){
      pq.push({c+1, e});
    }
  }
  return ret;
}

int main(void){
  cin>>N1>>N2>>M;
  edge.resize(N1+N2);
  cost.assign(N1+N2, -1);
  for(int i = 0;i< M;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    edge[a].push_back(b);
    edge[b].push_back(a);
  }
  int ans = 0;
  ans+=solve(0);

  ans+=solve(N1+N2-1);

  cout<<ans+1<<endl;

  return 0;
}