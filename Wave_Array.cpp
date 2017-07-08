/*
Given an array of integers, sort the array into a wave like array and return it, 
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....

Example

Given [1, 2, 3, 4]

One possible answer : [2, 1, 4, 3]
Another possible answer : [4, 1, 3, 2]
*/
vector<int> Solution::wave(vector<int> &A) {
    
    int largest = 0;
    int temp;
    n = A.size();
    sort(A.begin(), A.end());
    
    if(A.size()%2 == 0)
        for(int i=0; i<n; i+=2)
        {
            temp = A[i];
            A[i] = A[i+1];
            A[i+1] = temp;
        }
    else
    for(int i=0; i<n-1; i+=2)
        {
            temp = A[i];
            A[i] = A[i+1];
            A[i+1] = temp;
        }
    return A;
    
}
