#include <list>
#include <cstdio>

using std::list;

int main() {
  list<int> ls;
  list<int>::iterator list_iter;
  ls.push_back(1);
  ls.push_back(2);
  ls.push_back(3);
  ls.insert(ls.begin(), 6);
  ls.unique(2);
  for (list_iter = ls.begin(); list_iter != ls.end(); list_iter++) {
    printf("%d ", ls.front());
    ls.pop_front();
  }
  ls.reverse();
  return 0;
}

