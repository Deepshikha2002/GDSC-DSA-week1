class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int p=0;
        int n=nums.size()-1;
        int mid;
        while(p<=n)
        {
            mid=(p+n)/2;
            if(nums[mid]==target)
                return mid;
            
            else if(nums[mid]<target) 
                p=mid+1;
            
            else n=mid-1;
        }
        return p;    
    }
};