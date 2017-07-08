/*
Determine whether an integer is a palindrome. Do this without extra space.

A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed.
Negative numbers are not palindromic.

Example :

Input : 12121
Output : True

Input : 123
Output : False
*/
bool Solution::isPalindrome(int A) {
    if(A<0)
        return 0;
    vector<int> x;
    int ctr = 0;
    while(A>0)
    {
        x.push_back(A%10);
        A/=10;
    }
    int n = x.size();
    for(int i=0; i<n; i++)
        if(x[i]!=x[n-i-1])
            {
                ctr=1;
                break;
            }
    if(ctr == 1)
        return 0;
    else
        return 1;
    
}
