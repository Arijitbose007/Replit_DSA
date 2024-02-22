

#include <iostream>
#include <vector>
using namespace std;

void left_rotate(vector<int> &arr) {
  int size;
  cout << " Enter The Size Of THe Array : ";
  cin >> size;
  arr.resize(size);
  for (int i = 0; i < size; i++) {
    cout << "Enter The Elements " << i + 1 << ":";
    cin >> arr[i];
  }
  for (int cum : arr) {
    cout << cum << " ";
  }
  cout << endl;
  int temp = arr[0];
  for (int i = 1; i < arr.size(); i++) {
    arr[i - 1] = arr[i];
  }
  arr[arr.size() - 1] = temp;
  for (int num : arr) {
    cout << num << " ";
  }
}
