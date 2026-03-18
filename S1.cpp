// find the duplicate element using XOR
#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];  // duplicate found
            }
        }
    }
    return -1; // if no duplicate
}

int main() {
    int arr[] = {1, 2, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate element: " << findDuplicate(arr, n);

    return 0;
}
// Time Complexity: O(n²) (nested loops)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n) {
    int freq[n] = {0};

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;

        if (freq[arr[i]] > 1) {
            return arr[i]; // duplicate found
        }
    }

    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate element: " << findDuplicate(arr, n);

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n) (extra frequency array)



// find the duplicate element using XOR

#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n) {
    int xor1 = 0;
    int xor2 = 0;

    // XOR all array elements
    for (int i = 0; i < n; i++) {
        xor1 = xor1 ^ arr[i];
    }

    // XOR numbers from 1 to n-1
    for (int i = 1; i <= n - 1; i++) {
        xor2 = xor2 ^ i;
    }

    // Duplicate element
    return xor1 ^ xor2;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate element: " << findDuplicate(arr, n);

    return 0;
}

// Time: O(n)
//  Space: O(1)