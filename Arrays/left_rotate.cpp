#include <iostream>
#include <vector>
using namespace std;

void left_rotate(vector<int> &arr,int size) {
  arr.resize(size);
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
