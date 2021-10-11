class Solution{
    public:
    // Function to find missing integer in array
    // arr: input array
    // n: size of array
    int findMissing(int arr[], int n) { 
        
       int p=0;
       for(int i=0; i<n; i++)
         if(arr[i]==1)
           { p=1;
             break;
            }
        
        if (p==0)
        return 1;
        
        for(int i=0; i<n; i++)
         { if(arr[i]<=0 || arr[i]>n)
           arr[i]=1;
         }
         
        for(int i=0; i<n; i++)
          arr[(arr[i]-1)%n]+=n; 
        
         for(int i=0; i<n; i++)
         { if(arr[i]<=n)
           return i+1;
         } 
        return n+1;
        
    }
};

// { Driver Code Starts.

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        cout<<ob.findMissing(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends