#include <bits/stdc++.h>
using namespace std;
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

int main(void){
  map<char,int> m={
    {'A',3},
    {'B',1},
    {'C',4},
    {'D',1},
    {'E',5},
    {'F',9},
    {'G',0},
  };

  char p,q;
  cin>>p>>q;
  if(p>q) swap(p,q);
  int res = 0;
  for(char i = p;i<q;i++){
    res += m[i];
  }
  cout<<res<<endl;
  
  return 0;
}