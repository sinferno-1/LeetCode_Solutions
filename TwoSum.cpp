class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        
        int x, y;
        int size = nums.size();
        vector<int> ans;
        
        for(x=0; x<size; x++)
        {
            
                for(y=x+1; y<size; y++)
                {
                    if(nums[x]+nums[y]==target)
                    {
                        ans.push_back(x);
                        ans.push_back(y);
                        break;
                    }
                
                }
                
              
        }
        return ans;   
    }
};
