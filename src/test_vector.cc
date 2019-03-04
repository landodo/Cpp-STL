#include <vector>
#include <cstdio>

using std::vector;

int main() {
  vector<int> vec;
  vector<int>::iterator first;
  vector<int>::iterator last;
  vector<int>::iterator it;
  for (int i = 0; i < 10; ++i) {
    vec.push_back(i);
  }
  first = vec.begin();
  last = vec.begin();
  first ++;
  last++;
  last++;
  last++;
  for ( it = vec.begin(); it != vec.end() ; ++it) {
    printf("%d ", *it);
  }

  printf("\n, After:\n");
  vec.erase(first, last);
  for ( it = vec.begin(); it != vec.end() ; ++it) {
    printf("%d ", *it);
  }
  return 0;
}