#include <bits/stdc++.h>
using namespace std;

int main() {
      int n =5;
      int m = n;
      int mask=0;
      //edge case
      if(n==0){
        return 1;
      }
      while(m!=0){
          mask = (mask << 1) | 1;
          m = m>>1;
      }
      int ans = ~n & mask;
      return ans;


}

// Type	Complexity
// Time	O(log n)
// Space	O(1)