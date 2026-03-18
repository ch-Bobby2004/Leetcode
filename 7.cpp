#include <bits/stdc++.h>
using namespace std;

int main() {
      int n =123;
      int ans = 0;
      while(n!=0){
          if((ans > INT_MAX/10) || ( ans< INT_MIN/10)){
              return 0;
          }
          int digit = n%10;
          ans = ans * 10 + digit;
          n = n/10;
      }
      return ans;

}

// Time	O(log₁₀ n)
// Space	O(1)
