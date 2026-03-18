// subtract the product and sum of digits of an integer
// If n = 234

// Digits → 2, 3, 4

// Product = 2 × 3 × 4 = 24
// Sum = 2 + 3 + 4 = 9

// Result = 24 − 9 = 15


#include <iostream>
using namespace std;

int subtractProductAndSum(int n) {
    int product = 1;
    int sum = 0;

    while(n > 0) {
        int digit = n % 10;   // get last digit
        product *= digit;     // multiply
        sum += digit;         // add
        n /= 10;              // remove last digit
    }

    return product - sum;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Result: " << subtractProductAndSum(n);

    return 0;
}

// Time	O(log₁₀ n)
// Space	O(1)