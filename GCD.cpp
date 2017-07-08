/*
Greatest Common DivisorBookmark Suggest Edit
Given 2 non negative integers m and n, find gcd(m, n)

GCD of 2 integers m and n is defined as the greatest integer g such that g is a divisor of both m and n.
Both m and n fit in a 32 bit signed integer.

Example

m : 6
n : 9

GCD(m, n) : 3 
*/

int Solution::gcd(int A, int B) {
    int gcd = 1;
    if(A==0 || B==0)
        gcd = max(A,B);
    else
    if(A%B == 0 || B%A == 0)
        gcd = min(A,B);
    else 
    if(A>B)
    {
        
        int n = B/2;
        for(int i=2; i<=n; i++)
        {
            if(A%i==0 && B%i==0)
                gcd = i;
        }
    
    }
    else
    {
        int n =A/2;
        for(int i=2; i<=n; i++)
        {
            if(A%i==0 && B%i==0)
                gcd = i;
        }
    }
    return gcd;
}
