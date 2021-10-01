class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
      int m;
     unordered_map<int,int>t;
        for(int i=0;i<n;i++){
            t[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(t[arr[i]]>1){
            m=i+1;    
            return m;}
        }
        return -1;
    
    }
};