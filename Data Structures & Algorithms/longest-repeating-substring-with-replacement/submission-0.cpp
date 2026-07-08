class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int l=0, maxf=0, ans=0;
        for(int r=0;r<s.size();r++){
            freq[s[r]-'A']++;
            maxf=max(maxf, freq[s[r]-'A']);
            while((r-l+1)-maxf>k) freq[s[l++]-'A']--;
            ans=max(ans, r-l+1);
        }
        return ans;

    }
};
