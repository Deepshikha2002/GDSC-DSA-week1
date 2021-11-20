// } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
          int arr[256] = {0};
        
        for(int i = 0; i < str.size(); ++i) {
           arr[str[i]]++;
        }
        
        int max = INT_MIN;
        char res;
        
        for(int i = 0; i < str.size(); ++i) {
            
            if(arr[str[i]] > max) {
                res = str[i];
                max = arr[str[i]];
            }
            
            else if(arr[str[i]] == max) {
                if(res > str[i])
                  res = str[i];
            }
        }
        
        return res;
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends