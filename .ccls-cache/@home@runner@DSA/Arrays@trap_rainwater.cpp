#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;
// its good
void trap_rainwater(vector<int> &arr1) {
  int trap = 0;
  int n = arr1.size();

  if (n <= 2) {
    cout << "The water cannot be trapped";
    return;
  }

  vector<int> left_max(n, 0);
  vector<int> right_max(n, 0);

  left_max[0] = arr1[0];
  for (int i = 1; i < n; i++) {
    left_max[i] = max(left_max[i - 1], arr1[i]);
  }

  right_max[n - 1] = arr1[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    right_max[i] = max(right_max[i + 1], arr1[i]);
  }

  for (int i = 1; i < n - 1; i++) {
    trap += min(left_max[i], right_max[i]) - arr1[i];
  }

  cout << "Amount Of Water That Is Trapped : " << trap;
}
