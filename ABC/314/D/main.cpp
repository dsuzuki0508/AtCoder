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
  int N;
  cin>>N;
  string S;
  cin>>S;
  int Q;
  cin>>Q;
  vector<tuple<int,int,char>> v(Q);
  cin>>v;

  int last = 0;
  for(int i=0;i<Q;i++){
    if(get<0>(v[i]) !=1)last=i;
  }

  for(int i = 0;i<Q;i++){
    auto [t,x,c] = v[i];
    if(t==1){
      S[x-1]=c;
    }else{
      if(i!=last)continue;
      if(t==2){
	for(int j = 0;j<S.size();j++){
	  S[j]=tolower(S[j]);
	}
      }else{
	for(int j = 0;j<S.size();j++){
	  S[j]=toupper(S[j]);
	}
      }
    }
  }
  cout<<S<<endl;
  


  return 0;
}
