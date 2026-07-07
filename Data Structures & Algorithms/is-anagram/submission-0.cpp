class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int n=s.size();
        vector<int> fre1(26,0), fre12(26,0);
        for(char c: s) fre1[c-'a']++;
        for(char c: t) fre12[c-'a']++;
        for(int i=0;i<26;i++) if(fre1[i]!=fre12[i]) return false;
        return true;

    }
};
