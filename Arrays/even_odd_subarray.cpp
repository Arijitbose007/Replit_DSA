#include<bits/stdc++.h>
using namespace std;

void even_odd_subarray(vector<int>&arr){
  int count = 1, res = 1;
  for(int i = 1 ; i < arr.size() ; i++){
     if(arr[i]%2 == 0 && arr[i-1]%2 != 0 || arr[i-1]%2 == 0 && arr[i]%2 == 0)     {
       count++;
     }else{
       count = 1;
     }
    res = max(res, count);
  }
  cout <<" The largest is : "<< res;
}