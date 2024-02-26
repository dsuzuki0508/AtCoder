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
vector<vector<char>> A,B,X;
int H,W;

bool check(int ay, int ax, vector<vector<char>>& V){
  for(int i = 0;i<V.size();i++){
    for(int j = 0;j<V[0].size();j++){
      if(V[i][j]=='.')continue;
      if(i+ay<0)return false;
      if(X.size()<=i+ay) return false;
      if(j+ax<0)return false;
      if(X[0].size()<=j+ax) return false;
    }
  }
  return true;
}
      
vector<vector<char>> overrap(int ay, int ax, int by, int bx){
  vector<vector<char>> res(X.size(), vector<char>(X[0].size(), '.'));
  for(int i = 0;i<A.size();i++){
    for(int j = 0;j<A[0].size();j++){
      if(A[i][j]=='.')continue;
      int xy=i+ay;
      int xx=j+ax;
      res[xy][xx]='#';
    }
  }
  for(int i = 0;i<B.size();i++){
    for(int j = 0;j<B[0].size();j++){
      if(B[i][j]=='.')continue;
      int xy=i+by;
      int xx=j+bx;
      res[xy][xx]='#';
    }
  }
  return res;
}
    
int main(void){
  cin>>H>>W;
  A.assign(H,vector<char>(W));
  cin>>A;
  cin>>H>>W;
  B.assign(H,vector<char>(W));
  cin>>B;
  cin>>H>>W;
  X.assign(H,vector<char>(W));
  cin>>X;
  bool ok = false;
  for(int ay = -(int)A.size()+1;ay<(int)X.size();ay++){
    for(int ax = -(int)A[0].size()+1;ax<(int)X[0].size();ax++){
      for(int by = -(int)B.size()+1;by<(int)X.size();by++){
	for(int bx = -(int)B[0].size()+1;bx<(int)X[0].size();bx++){

	  if(!check(ay,ax,A))continue;
	  if(!check(by,bx,B))continue;
	  vector<vector<char>> tmp = overrap(ay,ax,by,bx);
	  if(X!=tmp)continue;
	  ok=true;
	}
      }
    }
  }
  if(ok)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
	  


  return 0;
}
