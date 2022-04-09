#include <bits/stdc++.h>
using namespace std;

namespace detail {
  template <typename Tp, int N>
  vector<Tp> make_vector(vector<int>& sizes, typename enable_if<(N == 1), Tp const&>::type x){
    return vector<Tp>(sizes[0], x);
  }
  template <typename Tp, int N>
  auto make_vector(vector<int>& sizes, typename enable_if<(N > 1), Tp const&>::type x){
    int size = sizes[N-1];
    sizes.pop_back();
    return vector<decltype(make_vector<Tp, N-1>(sizes, x))>(size, make_vector<Tp, N-1>(sizes, x));
  }
}
template <typename Tp, int N>
auto make_vector(int const(&sizes)[N], Tp const& x) {
  vector<int> s(N);
  for (int i = 0; i < N; ++i) s[i] = sizes[N-i-1];
  return detail::make_vector<Tp, N>(s, x);
}