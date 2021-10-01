//User function Template for C++

class Solution{
    public:
    // User function to complete
    // arr[]: input array
    // n: size of array
    // k: find element smaller and closest to it.
    
    int immediateSmaller(int arr[], int n, int x)
    {   int res= -1;
        for(int i=0; i<n;i++)
        { if( arr[i]<x)
          res= (arr[i]>res? arr[i]:res) ;
        }
        return res;
        
    }
};
