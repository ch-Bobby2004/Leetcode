#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 16;
    if(n<1)
    return 0;
    while (n!=1)
    {
        if(n%2==1){
            return 0;
        }
        n=n/2;
    }
    return 1;
    
}





#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int n = 16;
    cout << (isPowerOfTwo(n) ? "true" : "false");
    return 0;
}

// Time	O(1) (constant time for 32-bit integers)
// Space	O(1)