#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#ifdef ONLINE_JUDGE
#define DPRINT(str) 
#else
#define DPRINT(str) std::cout<<(#str)<< " = "<<(str)<<std::endl
#endif
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
std::ostream& operator<<(std::ostream& os, const std::vector<T>& c);
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::deque<T>& c);
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::list<T>& c);
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::forward_list<T>& c);
template <typename T, typename U>
std::ostream& operator<<(std::ostream& os, const std::map<T,U>& c);
template <typename T, typename U>
std::ostream& operator<<(std::ostream& os, const std::multimap<T,U>& c);
template <typename T, typename U>
std::ostream& operator<<(std::ostream& os, const std::unordered_map<T,U>& c);
template <typename T, typename U>
std::ostream& operator<<(std::ostream& os, const std::unordered_multimap<T,U>& c);
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::set<T>& c);
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::multiset<T>& c);
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::unordered_set<T>& c);
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::unordered_multiset<T>& c);
template <typename T, typename U>
std::ostream& operator<<(std::ostream& os, const std::pair<T, U>& p);
template<typename... Args>
std::ostream& operator<<(std::ostream& os, const std::tuple<Args...>& t);
template <typename Head, typename... Tail>
std::ostream& operator<<(std::ostream& os, std::priority_queue<Head, Tail...> c);
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
template <typename Head, typename... Tail>
std::ostream& operator<<(std::ostream& os, std::priority_queue<Head, Tail...> c) {
  vector<Head> tmp;
  while(!c.empty()){
    tmp.push_back(c.top());
    c.pop();
  }
  PRINT(os, tmp);
}
template<typename Head>
void SCAN_PARAMS(std::istream& is, Head& head){
  is>>head;
}
template<typename Head, typename... Tail>
void SCAN_PARAMS(std::istream& is, Head& head, Tail&... tail){
  is>>head;
  SCAN_PARAMS(is, tail...);
}
template<typename T, size_t... I>
void SCAN_TUPLE_WITH_SEQUENCE( std::istream& is, T& t, std::index_sequence<I...>){
  SCAN_PARAMS(is, std::get<I>(t)...);
}

template<typename... Args>
std::istream& operator>>(std::istream& is, std::tuple<Args...>& t);
template <typename T>
std::istream& operator>>(std::istream& is, std::vector<T>& c);
template <typename T, typename U>
std::istream& operator>>(std::istream& is, std::pair<T, U>& p);

template<typename... Args>
std::istream& operator>>(std::istream& is, std::tuple<Args...>& t){
  SCAN_TUPLE_WITH_SEQUENCE(is, t, std::make_index_sequence<std::tuple_size<std::tuple<Args...>>::valu\
e>{});
  return is;
}
template <typename T>
std::istream& operator>>(std::istream& is, std::vector<T>& c){
  for(auto& e:c) is>>e;
  return is;
}
template <typename T, typename U>
std::istream& operator>>(std::istream& is, std::pair<T, U>& p) {
  is >> p.first >> p.second;
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
unsigned long long int combination(unsigned long long int n, unsigned long long int r, vector<vector<unsigned long long int>>& v){
  if(n-r<r)r=n-r;
  if(v[n][r])return v[n][r];
  if(r==0)return v[n][r]=1;
  return v[n][r]=combination(n-1,r-1,v)+combination(n-1, r, v);
}
unsigned long long int combination(unsigned long long int n, unsigned long long int r){
  if(n<r)return 0;
  if(n-r<r)r=n-r;
  if(r==0)return 1;
  vector<vector<unsigned long long int>> v(n+1,vector<unsigned long long int>(r+1, 0));
  return combination(n, r, v);
}
template<typename T>
T exponentiation(T n, T m, T mod = 0){
  T ret = 1;
  for(T i = 0;(m>>i)>0;i++){
    if((1<<i)&m){
      ret*=n;
      if(mod>0)ret%=mod;
    }
    n=n*n;
    if(mod>0)n%=mod;
  }
  return ret;
}

int main(void){
  int H,W,K;
  cin>>H>>W>>K;
  vector<string> S(H);
  cin>>S;

  for(auto& e:S){
    e = "x"+e+"x";
  }
  S.insert(S.begin(), string(S[0].size(), 'x'));
  S.push_back( string(S[0].size(), 'x'));


  const int INF = 1e9;
  int ans = 0;
  bool ok = false;
  for(int i = 0;i<S.size();i++){
    int c=0,d=0;
    for(int j = 0;j<S[i].size();j++){
      if(S[i][j]=='x'){
	c=0;
	d=0;
	continue;
      }
      c++;
      if(S[i][j]=='o')d++;
      if(c>K&&S[i][j-K]=='o')d--;
      if(c>=K){
	ok=true;
	ans = max(ans, d);
      }
    }
  }

  for(int j = 0;j<S[0].size();j++){
    int c=0,d=0;
    for(int i = 0;i<S.size();i++){
      if(S[i][j]=='x'){
	c=0;
	d=0;
	continue;
      }
      c++;
      if(S[i][j]=='o')d++;
      if(c>K&&S[i-K][j]=='o')d--;
      if(c>=K){
	ok=true;
	ans = max(ans, d);
      }
    }
  }

  if(ok)cout<<K-ans<<endl;
  else cout<<-1<<endl;
	
      
  
  return 0;
}
