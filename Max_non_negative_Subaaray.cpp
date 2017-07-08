/*
Find out the maximum sub-array of non negative numbers from an array.
The sub-array should be continuous. That is, a sub-array created by choosing the second and fourth element and skipping the third element is invalid.

Maximum sub-array is defined in terms of the sum of the elements in the sub-array. Sub-array A is greater than sub-array B if sum(A) > sum(B).

Example:

A : [1, 2, 5, -7, 2, 3]
The two sub-arrays are [1, 2, 5] [2, 3].
The answer is [1, 2, 5] as its sum is larger than [2, 3]
NOTE: If there is a tie, then compare with segment's length and return segment which has maximum length
NOTE 2: If there is still a tie, then return the segment with minimum starting index
*/
vector<int> Solution::maxset(vector<int> &A) {
    vector<int> B;
    float sum1=0;
    float largest=0;
    int ctr=0;
    vector<int> X;
    for(int i=0; i<A.size(); i++)
       {
            if(A[i]<0)
            {
                if(ctr == 0)
                {
                    continue;
                }
                else 
                if(sum1<largest)
                {
                    sum1 = 0;
                    B.clear();
                }
                else
                if(sum1>largest)
                {
                    largest = sum1;
                    sum1 = 0;
                    X.clear();
                    X=B;
                    B.clear();
                }
                else 
                if(sum1 == largest)
                {
                    if(B.size()>X.size())
                    {
                        X=B;
                        B.clear();
                        sum1 = 0;
                    }
                    else 
                    if(B.size()==X.size())
                    {
                        if(B[0]<X[0])
                        {
                            X=B;
                            B.clear();
                            sum1 = 0;
                        }
                    }
                }
            }
            else 
            {
                ctr=1;
                B.push_back(A[i]);
                sum1+=A[i];
                if(i == A.size()-1)
                {
                        if(sum1>largest)
                    {
                        largest = sum1;
                        sum1 = 0;
                        X=B;
                        B.clear();
                    }
                    else 
                    if(sum1 == largest)
                    {
                        if(B.size()>X.size())
                        {
                            X=B;
                            B.clear();
                            sum1 = 0;
                        }
                        else 
                        if(B.size()==X.size())
                        {
                            if(B[0]<X[0])
                            {
                                X=B;
                                B.clear();
                                sum1 = 0;
                            }
                        }
                    }
                }           
            }
            
       }
    return X;
 }
