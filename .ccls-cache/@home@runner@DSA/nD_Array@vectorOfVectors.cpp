#include <bits/stdc++.h>
using namespace std;

void vectorOfVectors(int m, int n) {
  vector<vector<int>> arr;
  for (int i = 0; i < m; i++) {
    vector<int> v;  // Move the declaration here
    for (int j = 0; j < n; j++) {
      v.push_back(i + 1);
    }
    arr.push_back(v);  // Push the vector v once after it's populated.
  }
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[i].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}
// void vectorOfVectors(int m, int n) {
//   vector<vector<int>> arr;
//   for (int i = 0; i < m; i++) {
//     vector<int> v;
//     for (int j = 0; j < n; j++) {
//       v.push_back(i + 1);
//       arr.push_back(v);
//     }
//   }
//   for (int i = 0; i < arr.size(); i++) {
//     for (int j = 0; j < arr[i].size(); j++) {
//       cout << arr[i][j] << " ";
//     }
//     cout << endl;
//   }
//   cout << endl;
// }
