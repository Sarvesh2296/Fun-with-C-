/*
Given a number N >= 0, find its representation in binary.

Example:

if N = 6,

binary form = 110
*/
string Solution::findDigitsInBinary(int A) {
    int rem;
    string list;
    if(A==0)
        list.push_back('0');
    while(A>0)
    {
        rem = A%2;
        A=A/2;
        list.push_back(rem + '0');
    }
    reverse(list.begin(), list.end());
    
    return list;

}
