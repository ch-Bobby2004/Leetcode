#include <bits/stdc++.h>
using namespace std;

bool increasingTriplet(vector<int>& nums) {
    int first = INT_MAX, second = INT_MAX;

    for (int num : nums) {
        if (num <= first) {
            first = num;         // update smallest
        } else if (num <= second) {
            second = num;        // update second smallest
        } else {
            return true;         // found third number
        }
    }

    return false;
}