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

template<unsigned long long BASE = 0xc0dedba5e>
class RollingHash{
  static const unsigned long long MASK30 = (1UL << 30) - 1;
  static const unsigned long long MASK31 = (1UL << 31) - 1;
  static const unsigned long long MOD = (1UL << 61) - 1;
  static const unsigned long long MASK61 = MOD;
  deque<unsigned long long> mPow, mHash;
  static unsigned long long calcMod(unsigned long long x);
  static unsigned long long mul(unsigned long long a, unsigned long long b);
  static unsigned long long pow(unsigned long long b, unsigned long long n){
    unsigned long long x=b,r=1;
    while(n){
      if(n&1)r = mul(r, x);
      x = mul(x, x);
      n>>=1;
    }
    return r;
  }
  static unsigned long long inv(unsigned long long b){
    return pow(b, MOD-2);
  }
  unsigned long long inv()const {
    static unsigned long long invBase = 0;
    if(invBase==0) return invBase = inv(BASE);
    return invBase;
  }
  /*
  unsigned long long chk(unsigned long long n){
    if(n>1)return n;
    mt19937_64 e(0);
    unsigned long long ret = e();
    while(ret<2)ret = e();
    return ret;
  }
  */
public:
  /*
  template<typename T>
  RollingHash(const T& v, unsigned long long base):RollingHash(v.begin(), v.end(), base){}
  template<typename T>
  RollingHash(const T& v, unsigned long long l, unsigned long long base):RollingHash(v.begin(), v.begin()+l, base){}
  */
  template<typename InputIterator>
  RollingHash(InputIterator b, InputIterator e, unsigned long long base=0){
    mHash.push_back(0);
    mPow.push_back(1);
    while(b!=e){
      mHash.push_back( calcMod( mul(mHash.back(), BASE) + static_cast<unsigned long long>(*b) ) );
      mPow.push_back( mul(mPow.back(), BASE) );
      b=next(b);
    }
    //    mPow = mul(mPow, inv());
  }
  unsigned long long val(){
    DPRINT(mHash);
    DPRINT(mPow);
    return mHash.back();
  }
  unsigned long long append(unsigned long long e){
    mHash.push_back( calcMod( mul(mHash.back(), BASE) + e ) );
    mPow.push_back( mul(mPow.back(), BASE) );
    return mHash.back();
  }
  unsigned long long hash(long long l = 0, long long r= -1){
    assert(l>=0);
    assert(l<mHash.size());
    assert(r>=-1);
    assert(r<mHash.size());
    assert(l<=r);
    if(r==-1)r=mHash.size();
    return calcMod( mHash[r] - mul(mHash[l] , mPow[r-l]) +MOD );
  }
    
};
template<unsigned long long BASE>
unsigned long long RollingHash<BASE>::calcMod(unsigned long long x)
{
    unsigned long long xu = x >> 61;
    unsigned long long xd = x & MASK61;
    unsigned long long res = xu + xd;
    if (res >= MOD) res -= MOD;
    return res;
}

template<unsigned long long BASE>
unsigned long long RollingHash<BASE>::mul(unsigned long long a, unsigned long long b)
{
    unsigned long long au = a >> 31;
    unsigned long long ad = a & MASK31;
    unsigned long long bu = b >> 31;
    unsigned long long bd = b & MASK31;
    unsigned long long mid = ad * bu + au * bd;
    unsigned long long midu = mid >> 30;
    unsigned long long midd = mid & MASK30;
    return calcMod(au * bu * 2 + midu + (midd << 31) + ad * bd);
}


int main(void){
  string s,t;
  cin>>s>>t;
  {
    string tmp=s;
    while(tmp.size()<t.size())tmp=tmp+tmp;
    swap(tmp,s);
  }

  DPRINT(s);
  DPRINT(t);
  string ds(s+s);
  DPRINT(ds);
  RollingHash rh(ds.begin(), ds.end());

  unsigned long long x = RollingHash(t.begin(), t.end()).val();
  DPRINT(x);

  vector<int> ok(s.size(), -1);
  const int INF = 1e9;
  
  auto cnt = [&](auto cnt, int i)->int{
    if(ok[i]>=0)return ok[i];
    if(rh.hash(i, i+t.size()) != x)return ok[i] = 0;
    ok[i]=INF;
    ok[i]=cnt(cnt, (i+t.size())%s.size());
    if(ok[i]==INF)return ok[i];
    ok[i]+=1;
    return ok[i];
  };

  int ans = -1;
  for(int i = 0;i<s.size();i++){
    ans = max(ans, cnt(cnt,i));
    if(ans==INF)break;
  }

  if(ans==INF)cout<<-1<<endl;
  else cout<<ans<<endl;
      

  return 0;
}
