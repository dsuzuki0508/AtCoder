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
/*
void solve(vector<int> P){
  for(int i = 0;i< P.size()-1;i++){
    int index = lower_bound(P.begin()+i, P.end(), i+1) - P.begin();
    pair<int,int> tmp;
    tmp.first = P[i];
    P.erase(P.begin()+index);
    tmp.second = P[i];
    P.erase
    
  }
}
*/
int f(vector<int>& P){
  int res = 0;
  for(int i=0;i<P.size()-1;i++){
    for(int j = i+1;j< P.size();j++){
      if(P[i]>P[j])res++;
    }
  }

  return res;
}

bool end(vector<int> P){
  reverse(P.begin(), P.end());
  return next_permutation(P.begin(), P.end());
}

void g(vector<int>& P, int i, int j){
  vector<int> tmp;
  tmp.push_back(P[i]);
  P.erase(P.begin()+i);
  tmp.push_back(P[i]);
  P.erase(P.begin()+i);
  P.insert(P.begin()+j, tmp.begin(), tmp.end());
}

int main(void){
  int N;cin>>N;
  vector<int> P(N);
  cin>>P;
  for(auto& e:P)e--;
  if(f(P)&1){
    cout<<"No"<<endl;
    return 0;
  }

  cout<<"Yes"<<endl;
  vector<pair<int,int>> res;
  for(int j = 0;j< N;j++){
    if(j==P[j])continue;
    int i = find(P.begin()+j, P.end(), j)-P.begin();
    if(i == N-1){
      int tmpi=N-2;
      int tmpj=tmpi-1;
      res.push_back(make_pair(tmpi+1, tmpj));
      g(P,tmpi, tmpj);
      j--;
      continue;
    }
    res.push_back(make_pair(i+1,j));
    g(P,i,j);
  }
  cout<<res.size()<<endl;
  for(const auto& e:res){
    cout<<e.first<<" "<<e.second<<endl;
  }
  return 0;
}
