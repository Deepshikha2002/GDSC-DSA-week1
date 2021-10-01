class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
      int incr = true, decr = true;
		for(int i = 0; i < nums.size() - 1; i++)
        {	if(nums[i] > nums[i + 1])
			incr = false;
			
		    else if(nums[i] < nums[i + 1])
        	decr = false;
			
		    if(incr == false && decr == false)
				return false;
			
		}
		return true;
	}
};  
    