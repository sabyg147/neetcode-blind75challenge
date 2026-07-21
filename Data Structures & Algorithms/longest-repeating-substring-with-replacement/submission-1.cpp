class Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0;
        int high = 0;
        int res = INT_MIN;
        vector<int> h(256,0);

        for(high = 0; high<s.size();high++){
            h[s[high]]++;
            int len = high - low + 1;
            int mf = *max_element(h.begin(),h.end());
            int diff = len -mf;

            while(diff>k){
                h[s[low]]--;
                low++;

            len = high - low + 1;
            mf = *max_element(h.begin(),h.end());
            diff = len -mf;
            }

            if(diff<=k){
                len = high-low+1;
                res = max(res,len);
            }
        }

        if(res == INT_MIN){
            return 0;
        }
        
        return res;
    }
};
