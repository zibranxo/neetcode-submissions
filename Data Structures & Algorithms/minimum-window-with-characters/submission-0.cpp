class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need, window;
        for(char c: t) need[c]++;
        int have=0, req=need.size(), l=0, start=0, minl=INT_MAX;
        for(int r=0;r<s.size();r++){
            char c=s[r];
            window[c]++;
            if(need.count(c)&&window[c]==need[c]) have++;
            while(have==req){
                if(r-l+1<minl) minl=r-l+1, start=l;
                
                window[s[l]]--;
                if(need.count(s[l])&&window[s[l]]<need[s[l]]) have--;
                l++;
            }
        }
        return minl==INT_MAX ? "" : s.substr(start, minl);
    }
};
