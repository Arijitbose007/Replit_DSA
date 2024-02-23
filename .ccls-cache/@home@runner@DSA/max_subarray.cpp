#include<bits/stdc++.h> 
using namespace std;

void max_subarray(vector<int>&arr){
  int res = arr[0], maxending = arr[0];
  for(int i = 0 ; i< arr.size() ; i++){
        maxending = max(arr[i] , maxending + arr[i]);
  }
  res = max(res , maxending);
  cout<<" THe Max subarray :"<< res;
}