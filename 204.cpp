// Efficient Approach: Sieve of Eratosthenes

// Instead of checking each number individually (which is slow), we use the Sieve of Eratosthenes, which efficiently marks non-prime numbers.

// Idea:
// Create a boolean array isPrime initialized to true
// Mark 0 and 1 as not prime
// Start from 2, and mark all multiples as non-prime
// Count remaining true values

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) count++;
        }

        return count;
    }
};


// Time: O(n log log n)
// Space: O(n)