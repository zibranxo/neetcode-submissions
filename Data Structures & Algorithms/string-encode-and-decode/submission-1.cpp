class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(string s:strs){
            ans+=to_string(s.size());
            ans+=#;
            ans+=s;
        }
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#') j++;

            int len=stoi(s.substr(i, j-i));
            ans.push_back(s.substr(j+1, len));
            i=j+len+1;
        }
        return ans;
    }
};
