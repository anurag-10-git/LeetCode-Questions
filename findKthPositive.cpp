#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int sz=arr.size();
        int pos=0,i=0,n=1;
        while(i<k&&pos<sz)
        {
            if(arr[pos]!=n)
            {
                i++;
            }
            if(arr[pos]==n)
            {
                pos++;
            }
            n++;
        }
        if(i!=k)
            return n+(k-i-1);
        else
            return n-1;
    }
};


// test Cases
// arr = [2,3,4,7,11] k=5  ANS = 9
//arr = [1,2,3,4] k=2   ANS = 6
