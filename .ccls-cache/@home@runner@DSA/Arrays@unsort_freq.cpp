// unsort_freq.cpp
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void findFrequencies(vector<int> &arr) { // Pass arr as const reference
  unordered_map<int, int> freqMap;
 
  // Count frequencies
  for (int num : arr) {
    freqMap[num]++;
  }

  // Print frequencies
  cout << "Element : Frequency" << endl;
  for (auto pair : freqMap) {
    cout << pair.first << " : " << pair.second << endl;
  }
}

// int main() {
//   // Sample unsorted array
//   vector<int> arr = {3, 1, 2, 2, 3, 1, 5, 1, 4, 2};

//   // Find frequencies of elements
//   findFrequencies(arr);

//   return 0;
// }

// #include <iostream>
// #include <unordered_map>
// #include <vector>

// using namespace std;

// void findFrequencies() {
//   vector<int> arr;
//   unordered_map<int, int> freqMap;

//   // Count frequencies
//   for (int num : arr) {
//     freqMap[num]++;
//   }

//   // Print frequencies
//   cout << "Element : Frequency" << endl;
//   for (const auto &pair : freqMap) {
//     cout << pair.first << " : " << pair.second << endl;
//   }
// }