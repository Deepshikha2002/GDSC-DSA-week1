class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
       vector<int> result;
        int max=0;
        for(int i=n-1;i>=0;i--)
           { if(i==n-1 || a[i]>=max){
                max=a[i];
                result.push_back(max);
            }
        }
        int p=0,L=result.size()-1;
        while(p<L){
            int temp=result[p];
            result[p]=result[L];
            result[L]=temp;
            p++;
            L--;
        }
        
        return result; 
    }
};
