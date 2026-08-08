class Solution {
public:
    void solve(vector<int>& nums,int n,int idx,vector<int>& tmp,vector<vector<int>>& res, int sum, int target){
        if(sum==target){
            res.push_back(tmp);
            return;
        }

        if(idx==n)
            return;

        solve(nums,n,idx+1,tmp,res,sum,target);

        if(nums[idx]+sum<=target){
            tmp.push_back(nums[idx]);
            sum+=nums[idx];
            solve(nums,n,idx,tmp,res,sum,target);
            sum -=nums[idx];
            tmp.pop_back();
        }

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> tmp;
        vector<vector<int>> res;
        int sum = 0;
        solve(nums,n,0,tmp,res,sum,target);
        return res;
        
    }
};
