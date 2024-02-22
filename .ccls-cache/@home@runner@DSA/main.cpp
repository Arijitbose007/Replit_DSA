// main.cpp
#include <iostream>
#include <vector>
using namespace std;


void left_rotate(vector <int> &);
void findFrequencies(vector <int> &);
void trap_rainwater(vector<int>&);
int main() {
  vector<int> arr;
  left_rotate(arr); 
  cout << endl;
  findFrequencies(arr);
  cout<<endl;
  trap_rainwater(arr);
  return 0;
}

