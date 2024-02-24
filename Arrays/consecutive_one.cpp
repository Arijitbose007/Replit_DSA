#include <bits/stdc++.h>
using namespace std;

void consecutive_one(vector<int>&arr, int size){
  int count = 0, res = 0;
    for(int i = 0; i < size; i++){
  
        if(arr[i] == 0)
          count = 0;
        else{
          count++;
          res = max(res,count);
        }
    }
      cout << "The maximum consecutive 1s is: " << res << endl;
  }

