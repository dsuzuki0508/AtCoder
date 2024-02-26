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

  ull N,M;
  cin>>N>>M;
  DPRINT(N);
  DPRINT(M);
  vector<ull> v(N,0);
  for(ull i = 0;i<M;i++){
    ull a,b;
    cin>>a>>b;a--;b--;
    v[a]|=(1ull<<b);
    v[b]|=(1ull<<a);
  }
  //  for(const auto& e:v)DPRINT(bitset<40>(e));


  ull n = N/2;
  ull m = N-n;
  vector<ull> p(1<<n, 0);
  for(ull i = 0;i<(1<<n);i++){
    bool ok = true;
    for(ull d = 0;d<n;d++){
      if( (i & (1<<d))==0 )continue;
      if((v[d]&i)>0){
	ok=false;
	break;
      }
    }
    if(ok)p[i]=popcount((ull)i);
    else p[i]=0;
  }
  //  for(int i = 0;i<p.size();i++)cout<<bitset<40>(i)<<" "<<i<<" "<<p[i]<<endl;
  //  DPRINT(p);
  for(ull i = 0;i<(1<<n);i++){
    for(ull d=0;d<n;d++){
      p[i|(1<<d)]=max(p[i|(1<<d)] , p[i]);
    }
  }
  //  DPRINT(p);
  //  for(int i = 0;i<p.size();i++)cout<<bitset<40>(i)<<" "<<i<<" "<<p[i]<<endl;

  ull ans = 0;

  for(ull i = 0;i<(1ull<<N);i+=(1ull<<n)){
    //    DPRINT(bitset<40>(i));
    ull x = 0;
    for(ull d = n;d<N;d++){
      if(!(i&(1ull<<d)))continue;
      x|=v[d];
    }
    if(x&i)continue;
    ull cnt = popcount((ull)i);
    x= ~x;
    x&= (1<<n)-1;
    cnt += p[x];
    ans = max(ans, cnt);
  }
  cout<<ans<<endl;
      



  
  /*
  ll N,M;
  cin>>N>>M;
  //  DPRINT(N);
  //  DPRINT(M);
  ll n = N/2;
  ll m = N-n;
  vector<ll> v(N,0);
  vector<bool> ok(1<<n, true);
  for(ll i = 0;i<M;i++){
    ll a,b;
    cin>>a>>b;
    a--;b--;
    v[a] |= (1<<b);
    v[b] |= (1<<a);
  }
  //  for(const auto& e:v)DPRINT(bitset<40>(e));
  //  DPRINT(ok);
  for(ll i = 0;i<n;i++){
    for(ll j = i+1;j<n;j++){
      if(v[i] & (1<<j)){
	ok[(1<<i)|(1<<j)] = false;
      }
    }
  }
  //  DPRINT(ok);
  for(ll i = 0;i<(1<<n);i++){
    if(ok[i])continue;
    for(ll d = 0;d<n;d++){
      if(i&(1<<d))continue;
      ok[i|(1<<d)]=false;
    }
  }
  //  DPRINT(ok);

  vector<ll> Set(1<<n, 0);
  Set[0] = (((1<<m)-1)<<n);

  for(ll d = 0;d<n;d++){
    ll tmp = (((1<<m)-1)<<n);
    tmp &= ~v[d];
    Set[1<<d] = tmp;
  }

  for(ll i = 0;i<(1<<n);i++){
    for(ll d = 0;d<n;d++){
      if((1<<d)&i)continue;
      Set[i|(1<<d)]=Set[i]&Set[1<<d];
    }
  }
  //  for(const auto& e:Set)DPRINT(bitset<40>(e));

  vector<bool> ok2(1<<m, true);
  for(ll i = 0;i<m;i++){
    for(ll j = i+1;j<m;j++){
      if(v[i+n] & (1<<(j+n))){
	ok2[(1<<i)|(1<<j)] = false;
      }
    }
  }
  //  DPRINT(ok2);
  for(ll i = 0;i<(1<<m);i++){
    if(ok2[i])continue;
    for(ll d = 0;d<m;d++){
      if(i&(1<<d))continue;
      ok2[i|(1<<d)]=false;
    }
  }
  //  DPRINT(ok2);

  vector<ll> dp(1<<m, 0);
  for(ll i = 0;i<(1<<m);i++){
    if(ok2[i])dp[i]=popcount((ull)i);
  }
  for(ll i = 0;i<(1<<m);i++){
    for(ll w=0;w<m;w++){
      if(i&(1<<w))continue;
      dp[i|(1<<w)] = max(dp[i|(1<<w)], dp[i]);
    }
  }
  //  DPRINT(dp);

  
  ll ans = 0;
  for(ll i = 0;i<(1<<n);i++){
    if(!ok[i])continue;
    ll u = Set[i];
    u>>=n;
    //    cout<<i<<" "<<u<<" "<<dp[u]<<endl;
    ans = max(ans, (ll)popcount((ull)i)+ (ll)dp[u]);
  }
  cout<<ans<<endl;
  */
    

  return 0;
}
