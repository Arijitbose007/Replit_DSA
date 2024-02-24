# include <bits/stdc++.h>
using namespace std;

int max_subarray(vector<int>& arr);

void circular_sum_subarray(vector<int> &arr){
  // max sum in inverted array = min sum in org array
  
  int  res1, arrsum = 0,max_circular_subarray = 0; 
  int max_st_subarray = max_subarray(arr);
  cout<<endl<<max_st_subarray;
  if(max_st_subarray < 0)
    res1 = max_st_subarray;
  for(int i = 0 ; i < arr.size() ; i++){
     arrsum += arr[i];
     arr[i] = -arr[i];
  }
    max_circular_subarray = arrsum + max_subarray(arr);
    cout<<endl<<max_circular_subarray;
    res1 = max(max_circular_subarray, max_st_subarray);
    cout<< " The Max Subarray Combined : "<< res1;
}

