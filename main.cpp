// main.cpp
#include <iostream>
#include <vector>
using namespace std;


 void left_rotate(vector <int> &,int);
 void findFrequencies(vector <int> &);
 void trap_rainwater(vector<int>&);
 void consecutive_one(vector<int>&,int);
int main() {
  int num, size = 0 ;
  vector<int> arr{1,1,1,0,1,1,0,1,1,1,1,1};
  size = arr.size();
  cout<<size;
  cout << "Enter a number (1 for left rotate, 2 for finding frequencies, 3 for trapping                 rainwater, 4 for consecutive ones): ";
    cin >> num;
  
    switch (num) {
        case 1:
            left_rotate(arr,size);
            break;
        case 2:
            findFrequencies(arr);
            break;
        case 3:
            trap_rainwater(arr);
            break;
       case 4:
            consecutive_one(arr,size);
            break;
        default:
            cout << "Invalid choice";
            
    }
  
    return 0;
  }

