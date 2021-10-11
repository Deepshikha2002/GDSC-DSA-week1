class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
       vector<int>p;
        int first=0,last=0,t=0;
        while(first<=n and last<=n){
            if(t==s)
            {
               p.push_back(first+1);
                p.push_back(last);
                return p;
            }
            if(t>s){
                t-=arr[first];
                first++;
            }
            if(t<s ){
                t+=arr[last];
                last++;
            }
        }
        
       p.push_back(-1);
        return p; // Your code here
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends