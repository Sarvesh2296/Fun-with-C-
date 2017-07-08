/*
Given a column title as appears in an Excel sheet, return its corresponding column number.

Example:

    A -> 1
    
    B -> 2
    
    C -> 3
    
    ...
    
    Z -> 26
    
    AA -> 27
    
    AB -> 28 
    */
    
    int Solution::titleToNumber(string A) {
    int n = A.length();
    int value=0;
    for(int i=0; i<n; i++)
        {
            value += pow(26,i)*(A[n-i-1] - 'A' +1);
        }
    return value;
}
