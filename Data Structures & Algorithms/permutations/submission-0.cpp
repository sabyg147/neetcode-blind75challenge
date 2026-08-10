class Solution {
public:


    void fun(vector<int>& nums,int n, int idx, vector<bool>& used, vector<int>& tmp, vector<vector<int>>& res){
        if(idx==n){
            res.push_back(tmp);
            return;
        }


        for(int i =0;i<n;i++){
            if(used[i]==true)
                continue;

            tmp.push_back(nums[i]);
            used[i]=true;
            fun(nums,n,idx+1,used,tmp,res);
            used[i]=false;
            tmp.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n =nums.size();
        vector<int> tmp;
        vector<vector<int>> res;
        vector<bool> used(n,false);
    
        fun(nums,n,0,used,tmp,res);
        return res;
        
    }
};
