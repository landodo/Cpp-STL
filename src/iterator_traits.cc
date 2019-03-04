#include <iostream>

using namespace std;

template <typename T>
struct iterator_traits<const T*> {
  // 当迭代器是个pointer-to-const
  // 萃取出来的类型应该是 T 而非 const T
  typedef value_type;
};

template <typename I>
typename iterator_traits<I>::value_type
func(I ite) {
  return *ite;
}


int main() {

  return 0;
}
