class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int bestanswer = nums[0];
        int maxi = nums[0];

        for(int i =1;i<nums.size();i++){
            bestanswer = max(bestanswer+nums[i], nums[i]);
            maxi = max(maxi,bestanswer);
        }

        return maxi;

    }
};
