class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size()-1;
        int maxarea =INT_MIN;

        while(i<j){
            int area = min(heights[i],heights[j])*(j-i);
            maxarea = max(maxarea,area);

            if(heights[i]<heights[j])
            i++;

            else
            j--;


           

        }

        return maxarea;
        
    }
};
