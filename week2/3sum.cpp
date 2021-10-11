class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         sort(nums.begin(), nums.end()); 
        vector<vector<int>> ans; 
        for (int i = 0; i < nums.size(); ++i) 
            if (i == 0 || nums[i-1] != nums[i]) 
                for (int low = i+1, high = nums.size()-1; low < high; )
                  {
                    int sum = nums[i] + nums[low] + nums[high]; 
                    if (sum < 0) ++low; 
                    else if (sum == 0) 
                      {
                        ans.push_back({nums[i], nums[low], nums[high]}); 
                        ++low; 
                        while (low < high && nums[low-1] == nums[low]) ++low; 
                       } 
                    else --high; 
                }
        return ans; 
 
    }
};