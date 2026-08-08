class Solution {
public:

    void solve(vector<int>& nums,int n, int idx,vector<int>& tmp,vector<vector<int>>& res){
        if(idx==n){
            res.push_back(tmp);
            return;
        }

        solve(nums,n,idx+1,tmp,res);

        tmp.push_back(nums[idx]);
        solve(nums,n,idx+1,tmp,res);
        tmp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> tmp;
        vector<vector<int>> res;
        solve(nums,n,0,tmp,res);
        return res;
        
    }
};
