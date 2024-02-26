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


template<typename S, auto op, auto e>
class SegmentTree{
  std::vector<S> mArray;
  int mN;
  int mSize;
  int mLog;
  void resize(unsigned int n);
  void update(int n);
public:
  SegmentTree();
  SegmentTree(int n);
  SegmentTree(const std::vector<S>& v);
  void set(int p, const S& x);
  S get(int p);
  S prod(int l, int r);
  S all_prod();
};

template<typename S, auto op, auto e>
SegmentTree<S,op,e>::SegmentTree():SegmentTree(0){}
template<typename S, auto op, auto e>
SegmentTree<S,op,e>::SegmentTree(int n):SegmentTree(std::vector<S>(n, e())){}
template<typename S, auto op, auto e>
SegmentTree<S,op,e>::SegmentTree(const std::vector<S>& v):mN(v.size()),mSize(std::bit_ceil(v.size())){
  mLog = std::countr_zero((unsigned int)mSize);
  mArray.assign(mSize*2, e());
  for(int i = 0;i<v.size();i++){
    mArray[mSize+i] = v[i];
  }
  for(int i = mSize-1;i>=1;i--){
    update(i);
  }

}

template<typename S, auto op, auto e>
void SegmentTree<S,op,e>::resize(unsigned int n){
  if( mSize >= n )return;
  mN = n;
  int old_size = mSize;
  mSize = std::bit_ceil(n);
  mLog = std::countr_zero((unsigned int)mSize);
  mArray.resize(mSize*2, e());

  for(int i = 0;i<old_size;i++){
    mArray[mSize+i] = mArray[old_size+i];
  }
  for(int i = mSize -1;i>=1;i--){
    update(i);
  }

}
template<typename S, auto op, auto e>
void SegmentTree<S,op,e>::update(int n){
  mArray[n] = op(mArray[n*2], mArray[n*2+1]);
}


template<typename S, auto op, auto e>
void SegmentTree<S,op,e>::set(int p, const S& x){
  p+=mSize;
  mArray[p] = x;
  while(p>1){
    p>>=1;
    update(p);
  }

}
template<typename S, auto op, auto e>
S SegmentTree<S,op,e>::get(int p){
  assert(0<=p && p<mN);
  p+=mSize;
  return mArray[p];
}

template<typename S, auto op, auto e>
S SegmentTree<S,op,e>::prod(int l, int r){
  assert(0<=l && l<= r&& r<=mN);
  l+=mSize;
  r+=mSize;
  S le = e();
  S re = e();

  while(l<r){
    if(l&1) le=op(le, mArray[l++]);
    if(r&1) re=op(mArray[--r], re);
    l>>=1;
    r>>=1;
  }
  return op(le, re);
}
template<typename S, auto op, auto e>
S SegmentTree<S,op,e>::all_prod(){
  return mArray[1];
}
vector<ll> a;
using S = pair<ll,ll>;
S op(S A, S B){
  S ret;
  ret.first = max(A.first, B.first);
  
  ret.second = A.second + B.second;
  return ret;
}
S e(){
  return {0,0};
}

int main(void){

  ll N,x;
  cin>>N>>x;

  a.resize(N);
  cin>>a;


  vector<S> b(N, {1e4, 1e15});
  for(ll i = 0;i<N;i++){
    for(ll j = 0;j<N;j++){
      if(b[j].first * x + b[j].second >= i*x+a[(j+N-i)%N] ){
	b[j].first = i;
	b[j].second = a[(j+N-i)%N];
      }
    }
  }
  //  DPRINT(b);
  
  
  SegmentTree<S,op,e> seg(b);
  cout<<seg.all_prod().first * x + seg.all_prod().second<<endl;
  

  
  return 0;
}
