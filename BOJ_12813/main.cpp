#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

string a, b;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> a >> b;

  auto oss_and = ostringstream{};
  auto oss_or = ostringstream{};
  auto oss_xor = ostringstream{};
  auto oss_na = ostringstream{};
  auto oss_nb = ostringstream{};

  for (auto i = 0; i < a.length(); ++i) {
    const auto p = a[i] - '0';
    const auto q = b[i] - '0';

    oss_and << (p & q);
    oss_or << (p | q);
    oss_xor << (p ^ q);
    oss_na << (1 == p ? 0 : 1);
    oss_nb << (1 == q ? 0 : 1);
  }

  cout << oss_and.str() << '\n';
  cout << oss_or.str() << '\n';
  cout << oss_xor.str() << '\n';
  cout << oss_na.str() << '\n';
  cout << oss_nb.str();

  return 0;
}