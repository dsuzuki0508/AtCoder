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

template <auto MOD, typename T = long long int>
class ModInt{
public:
  ModInt():mN(0){};
  ModInt(const ModInt<MOD,T>& m):mN(m.mN){};
  template <typename U>
  ModInt(U v):mN(((v%MOD)+MOD)%MOD){};
  long long int val()const{return mN;}
  ModInt pow( long long int n)const{
    ModInt x=*this, r=1;
    while(n){
      if(n&1)r*=x;
      x*=x;
      n>>=1;
    }
    return r;
  }
  ModInt inv() const{
    return pow(MOD-2);
  }
  ModInt& operator++(){
    mN++;
    mN%=MOD;
    return *this;
  }
  ModInt& operator--(){
    mN--;
    mN+=MOD;
    mN%=MOD;
    return *this;
  }
  ModInt operator++(int){
    ModInt ret = *this;
    mN++;
    mN%=MOD;
    return ret;
  }
  ModInt operator--(int){
    ModInt ret = *this;
    mN--;
    mN+=MOD;
    mN%=MOD;
    return ret;
  }
  ModInt& operator+=(const ModInt& rhs){
    mN+=rhs.mN;
    mN%=MOD;
    return *this;
  }
  ModInt& operator-=(const ModInt& rhs){
    mN-=rhs.mN;
    mN+=MOD;
    mN%=MOD;
    return *this;
  }
  ModInt& operator*=(const ModInt& rhs){
    mN*=rhs.mN;
    mN%=MOD;
    mN+=MOD;
    mN%=MOD;
    return *this;
  }
  ModInt& operator/=(const ModInt& rhs){
    return *this = *this * rhs.inv();
  }
  friend ModInt operator+(const ModInt& lhs, const ModInt& rhs) {
    ModInt ret(lhs);
    return ret+=rhs;
  }
  friend ModInt operator-(const ModInt& lhs, const ModInt& rhs) {
    ModInt ret(lhs);
    return ret-=rhs;
  }
  friend ModInt operator*(const ModInt& lhs, const ModInt& rhs) {
    ModInt ret(lhs);
    return ret*=rhs;
  }
  friend bool operator==(const ModInt& lhs, const ModInt& rhs) {
    return lhs.mN == rhs.mN;
  }
  private:
    unsigned long long int mN;
};


ll factorial(ll n, ll MOD){
  ll ret = 1;
  for(int i = 1;i<=n;i++)ret=(ret*i)%MOD;
  return ret;
}


unsigned long long int combination(unsigned long long int n, unsigned long long int r){
  ModInt<998244353> ret;

  ret = factorial(n, 998244353);
  ret /= factorial(r, 998244353);
  ret /= factorial(n-r, 998244353);
  return ret.val();
}

int main(void){
  const ll MOD = 998244353;
  ll N;
  cin>>N;
  vector<ModInt<MOD>> v(N+1, 0);
  for(const auto& e:v)DPRINT(e.val());cout<<endl;
  
  //  v[1]=1;
  //  v[2]=v[1]/3;

  /*

n == 2;
1/2 => 0;
1/2:
  1/4 => 1
  1/4 -> v[2];

1/4 + 1/16 + ...

1/4/(3/4)
= 1/3

n==3;
1/2 -> 0;
1/2:
  1/8-> v[1] =1
  1/4 -> v[2] = 1/3;
  1/8 -> v[3];

1/8+1/12 = 5/24;

5/24 + 5/192 + ...

5/24/(7/8)
=5/21;
   */

  v[1] = 1;
  //  ModInt s = 0;
  for(int i = 2;i<=N;i++){
    ModInt<MOD> s = 0;
    double ds = 0;
    ModInt<MOD> pow =2;
    pow = pow.pow(i);
    DPRINT(pow.val());
    for(int j = 1;j<i;j++){
      ModInt<MOD> tmp = combination(i-1,j);
      double dtmp = combination(i-1,j);
      tmp/=pow;
      dtmp/=pow.val();
      DPRINT(dtmp);
      s+=tmp;
      ds+=dtmp;
      DPRINT(ds);
    }
    DPRINT(ds);
    DPRINT(pow.val());
    s*=(pow);
    s/=(pow-1);
    ds*=(pow.val());
    ds/=(pow.val()-1);
    DPRINT(ds);
    v[i]=s;
  }

  for(const auto& e:v)DPRINT(e.val());
  
  
  
  return 0;
}
