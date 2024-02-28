// main.cpp
#include <iostream>
#include <vector>
using namespace std;


 void left_rotate(vector <int> &,int);
 void findFrequencies(vector <int> &);
 void trap_rainwater(vector<int>&);
 void consecutive_one(vector<int>&,int);
 int max_subarray(vector<int>&);
 void even_odd_subarray(vector <int> &);
 void circular_sum_subarray(vector <int> &);
 void major_element(vector <int> &);
 void consecutive_flips(vector <int> &);
int main() {
  int num, size = 0 ;
  vector<int> arr{5,4,5,2,5,8,5};
  size = arr.size();
  cout << "Enter a number (1 for left rotate, 2 for finding frequencies, 3 for trapping rainwater, 4 for consecutive ones, 5 for max subarray, 6 for longest even-odd subarray, 7 for circular sum subarray, 8 for major element,9 for concecutive flips ): ";
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
       case 5:
            max_subarray(arr);
            break;
       case 6:
            even_odd_subarray(arr);
            break;
       case 7:
            circular_sum_subarray(arr);
            break;
       case 8:
            major_element(arr);
            break;
       case 9:
            consecutive_flips(arr);
            break;
        default:
            cout << "Invalid choice";
            
    }
  
    return 0;
  }

