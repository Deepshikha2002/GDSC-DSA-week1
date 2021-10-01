class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       if(nums.size()==0)
            return {-1,-1};
        
        int i=0;
        int j=0;
        while(i<nums.size() && j<nums.size()){
            if(nums[i]==target){
            if(nums[i]==nums[j]){
                j++;
            }
            else
                break;
            }
            else{
            i++;
            j++;
            }
        }
        
            if(j-i-1>=0)
            return {i,j-1};
            else
            return {-1,-1}; 
    }
};