class Solution {
public:

    bool fn(vector<int> &Ss , vector<int> &Tt){
        for(int i = 0; i<256; i++){
            if(Ss[i]<Tt[i])
                return false;
        }
        return true;
    }

    string minWindow(string s, string t) {

        vector<int> Ss(256,0);
        vector<int> Tt(256,0);

        for(int i = 0; i<t.size();i++){
            Tt[t[i]]++;
        }

        int low = 0;
        int high = 0;
        int res = INT_MAX;
        int start = 0;

        for(high = 0; high<s.size();high++){
            Ss[s[high]]++;

            while(fn(Ss,Tt)){
                int len = high-low+1;
                if(res>len){
                    res = len;
                    start = low;
                }
                Ss[s[low]]--;
                low++;
            }
        }
        if(res == INT_MAX)
            return "";
            
        return s.substr(start,res);
        
    }
};
