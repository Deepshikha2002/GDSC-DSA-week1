class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int r=matrix.size();
        int c=matrix[0].size();
        
        for(int i=0;i<r;i++){
            for(int j=i;j<c;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        int low=0;
        int high=c-1;
        while(low<high){
            for(int i=0;i<r;i++){
                swap(matrix[i][low],matrix[i][high]);
            }
            low++;
            high--;
          
    }
    }
};