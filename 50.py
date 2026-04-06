class Solution:
    def myPow(self, x: float, n: int) -> float:
        # Handle the base case when n is 0 (any number to the power of 0 is 1)
        if n == 0:
            return 1.0
        
        # Handle negative exponents by converting x and making n positive
        if n < 0:
            x = 1 / x
            n = -n
        
        result = 1.0
        while n > 0:
            if n % 2 == 1:  # If n is odd, multiply result by x
                result *= x
            x *= x  # Square the base
            n //= 2  # Halve n
        
        return result