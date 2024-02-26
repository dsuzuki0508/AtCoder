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
  ll N,M;
  cin>>N>>M;
  vector<string> S(N);
  cin>>S;
  S.push_back(string(M, '#'));
  for(ll i = 0;i<S.size();i++){
    for(ll j=0;j<M;j++){
      if(S[i][j]=='#'&&i<N-1){
	S[i+1][j]='#';
	if(j<M-1)S[i+1][j+1]='#';
      }
    }
    S[i].push_back('#');
    DPRINT(S[i]);
  }

  vector<vector<ll>> dp(N+1,vector<ll>(M+1,0));
  dp[0][M-1]=1;
  for(int c = M-1;c<N;c++){
    for(int j=M;j>=0;j--){
      int i = c+j;
      if(i>=N)continue;
      if(i<0)break;
      //      cout<<"c = "<<c<<", i = "<<i<<", j = "<<j<<endl;
      if(i<N-1&&j<M-1){
	dp[i][j]+=dp[i+1][j+1];
      }else{
	if(j<M-1)dp[i][j]+=dp[i][j+1];
      }
      if(i>0)dp[i][j]+=dp[i-1][j];
    }
    for(int j = 0;j<M;j++){
      int i = c-M+1+j;
      if(i>=N)break;
      if(i<0)continue;
      if(S[i][j]=='#')dp[i][j]=0;
    }
  }
  for(auto & e:dp)DPRINT(e);



  return 0;
}

/*
#define mod 998244353
int main(){
  long long n,m;
  cin >> n >> m;
  vector<string> s(n);
  for(auto &nx : s){cin >> nx;}

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(s[i][j]=='#'){
        if(i!=(n-1)){s[i+1][j]='#';}
        if(i!=(n-1) && j!=(m-1)){s[i+1][j+1]='#';}
      }
    }
  }
  vector<long long> dp(m+1,0);
  dp[m]=1;
  for(int c=-m+1;c<=n-1;c++){
    for(int j=m-1;j>=0;j--){
      dp[j]+=dp[j+1];
      dp[j]%=mod;
    }
    for(int j=0;j<m;j++){
      int i=j+c;
      if(i<0){dp[j]=0;}
      else if(i>=n || s[i][j]=='#'){dp[j+1]=0;}
    }
    DPRINT(dp);
  }
  long long res=0;
  for(auto &nx : dp){res+=nx;res%=mod;}
  cout << res << "\n";
  return 0;
}
*/
