#include <iostream>
using namespace std;

int main() {
    int num = 38;

    while (num >= 10) {
        int sum = 0;

        while (num) {
            sum += num % 10;
            num /= 10;
        }

        num = sum;
    }

    cout << num;
}

// d=log10​(n)




#include <iostream>
using namespace std;

int addDigits(int num) {
    if(num == 0) return 0;
    return 1 + (num - 1) % 9;
}

int main() {
    cout << addDigits(38);
}

// O(1)
// O(1)