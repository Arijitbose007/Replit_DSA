# include <bits/stdc++.h>
using namespace std;

void consecutive_flips(vector<int>&arr){
  int n = arr.size();
  for(int i = 1 ; i < arr.size() ; i++){
    if(arr[i] != arr[i-1]){
      if(arr[i]!=arr[0])
      cout <<"The flipping starts"<< i << "to ";
      else
        cout<< i-1 <<endl;
    }
    
  }
  if(arr[arr.size()-1] != arr[0]){
    cout << n-1 <<endl;
  }
}