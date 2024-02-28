#include <bits/stdc++.h>
using namespace std;
// moore-moody algorithm
void major_element(vector<int> &arr){
  int candidate = arr[0], count = 1;
  for(int i = 1 ; i < arr.size() ; i++){
      if(arr[i] == arr[0])
        count ++;
      else
        count --;
      if(count == 0){
        candidate = arr[i];
        count = 1;
      }
  }
  count = 0;
  for(int i = 0 ; i < arr.size() ; i++){
    if(arr[i] == arr[candidate])
      count ++;
    }
  if(count > arr.size()/2)
    cout<<"The majority element is :" << arr[candidate]<<endl;
  else
    cout<< "No majority element"<<endl;
}
