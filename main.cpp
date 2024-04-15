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

ll n;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;

  for (auto i = 0; i < n; ++i) {
    ll m;
    cin >> m;

    if (m < 250) {
      cout << 4;
    } else if (m < 275) {
      cout << 3;
    } else if (m < 300) {
      cout << 2;
    } else {
      cout << 1;
    }
    cout << ' ';
  }

  return 0;
}