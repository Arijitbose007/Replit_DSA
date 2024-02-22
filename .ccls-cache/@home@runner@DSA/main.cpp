// main.cpp
#include <iostream>
#include <vector>
using namespace std;

// Function declarations
//void left_rotate(vector<int> &arr);     // Pass arr as reference
//void findFrequencies(vector<int> &arr); // Pass arr as reference
void left_rotate(vector <int> &);
void findFrequencies(vector <int> &);
int main() {
  vector<int> arr;
  left_rotate(arr); // Pass arr to left_rotate
  cout << endl;
  findFrequencies(arr); // Pass arr to findFrequencies
  return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// // Function declarations
// void left_rotate();
// void findFrequencies();

// int main() {
//   left_rotate();
//   findFrequencies();
//   return 0;
// }