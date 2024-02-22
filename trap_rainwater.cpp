#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void trap_rainwater(vector<int> &arr1) {
    int size, second_high, diff = 0;
   // vector<int>arr1{123};
    if (is_sorted(arr1.begin(), arr1.end()) || is_sorted(arr1.begin(), arr1.end(), greater<int>())) {
        cout << "The water cannot be trapped";
    } else {
        int first_high = *max_element(begin(arr1), end(arr1));
        int min_diff = first_high;
        for (int i = 0; i < arr1.size(); i++) {
            if (arr1[i] < first_high && arr1[i] != first_high) {
                diff = first_high - arr1[i];
                if (min_diff > diff) {
                    second_high = arr1[i];
                    min_diff = diff;
                }
            }
        }

        size = arr1.size();

        cout << "Amount Of Water That Is Trapped : " << second_high * size;
    }
}

