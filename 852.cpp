#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    while(start < end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] < arr[mid+1])
            start = mid + 1; // move right
        else
            end = mid;       // move left
    }

    return start;
}

int main() {
    vector<int> arr = {0,2,1,0};
    cout << "Peak index: " << peakIndexInMountainArray(arr);
}

// Time: O(log n)
// Space: O(1)