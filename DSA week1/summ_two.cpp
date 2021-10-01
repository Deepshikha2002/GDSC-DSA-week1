class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> result;
        int n=nums.size(); int f=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                    continue;
                else if(nums[i]+nums[j]==target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    f=1;
                    break;
                 }
            }
            if(f==1)
                break;
        }
        return result;

  
    }
};