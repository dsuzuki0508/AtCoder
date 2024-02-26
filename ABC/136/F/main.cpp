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

template <auto MOD, typename T = long long int>
class ModInt{
public:
  ModInt():mN(0){};
  ModInt(const ModInt<MOD,T>& m):mN(m.mN){};
  template <typename U>
  ModInt(U v):mN(((v%MOD)+MOD)%MOD){};
  long long int val(){return mN;}
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

template<typename T>
class BinaryIndexedTree{
  std::vector<T> mArray;
  void resize(int n);
  T sum(int n);
public:
  BinaryIndexedTree(){}
  BinaryIndexedTree(int n):mArray(n){}
  void add(int p, T x);
  T sum(int l, int r);
};

template<typename T>
void BinaryIndexedTree<T>::resize(int n){
  if(n<=static_cast<int>(mArray.size()))return;
  int i = mArray.size();
  mArray.resize(n);
  i++;
  for(;i<=n;i++){
    int l = i&-i;
    int b = i-l;
    while(l>1){
      l/=2;
      b+=l;
      mArray[i-1]+=mArray[b-1];
    }
  }
}

template<typename T>
void BinaryIndexedTree<T>::add(int p, T x){
  assert(0<=p);
  p++;
  resize(p);
  while(p<=static_cast<int>(mArray.size())){
    mArray[p-1]+=x;
    p+=p&-p;
  }
}
template<typename T>
T BinaryIndexedTree<T>::sum(int n){
  resize(n);
  T ret = T();
  while(n>0){
    ret+=mArray[n-1];
    n-=n&-n;
  }
  return ret;
}
template<typename T>
T BinaryIndexedTree<T>::sum(int l, int r){
  resize(r);
  return sum(r) - sum(l);
}


int main(void){
  int N;
  cin>>N;
  vector<pair<int,int>> p(N);
  cin>>p;
  //  DPRINT(p);
  {
    map<int,int> comp_x, comp_y;
    vector<int> dec_x, dec_y;
    for(const auto& [x,y]:p){
      dec_x.push_back(x);
      dec_y.push_back(y);
    }
    sort(dec_x.begin(), dec_x.end());
    sort(dec_y.begin(), dec_y.end());
    dec_x.erase(unique(dec_x.begin(), dec_x.end()), dec_x.end());
    dec_y.erase(unique(dec_y.begin(), dec_y.end()), dec_y.end());

    for(int i = 0;i<N;i++){
      comp_x[dec_x[i]] = i;
      comp_y[dec_y[i]] = i;
    }
    //    DPRINT(dec_x);
    //    DPRINT(dec_y);
    //    DPRINT(comp_x);
    //    DPRINT(comp_y);
    for(auto& [x,y]:p){
      x=comp_x[x];
      y=comp_y[y];
    }
  }
  //  DPRINT(p);

  vector<vector<int>> v(N, vector<int>(4, 0));
  sort(p.begin(), p.end());
  {
    BinaryIndexedTree<int> bit(N);
    for(int i = 0;i<N;i++){
      int tmp = bit.sum(0, p[i].second);
      v[i][1] = i-tmp;
      v[i][2] = tmp;
      bit.add(p[i].second, 1);
    }
  }
  {
    BinaryIndexedTree<int> bit(N);
    for(int i = N-1;i>=0;i--){
      int tmp = bit.sum(0, p[i].second);
      v[i][0] = N-1-i-tmp;
      v[i][3] = tmp;
      bit.add(p[i].second, 1);
    }
  }

  ModInt<998244353> ans=0;
  for(int i = 0;i<N;i++){
    ModInt<998244353> a=2, b=2, c=2, d=2;
    a = a.pow(v[i][0]);
    b = b.pow(v[i][1]);
    c = c.pow(v[i][2]);
    d = d.pow(v[i][3]);
    a--;
    b--;
    c--;
    d--;

    ModInt<998244353> tmp = 0;
    //4
    tmp += a*b*c*d * 2;

    //3
    tmp += a*b*c * 2;
    tmp += a*b*d * 2;
    tmp += a*c*d * 2;
    tmp += b*c*d * 2;

    //2
    tmp += a*c * 2;
    tmp += b*d * 2;

    tmp += a*b;
    tmp += b*c;
    tmp += c*d;
    tmp += d*a;

    //1
    tmp += a;
    tmp += b;
    tmp += c;
    tmp += d;

    // 0
    tmp+=1;

    //    DPRINT(tmp.val());
    ans+=tmp;
  }
  //  DPRINT(ans.val());
  cout<<ans.val()<<endl;    

    


  return 0;
}
