class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>arr(26,0);
        vector<int>brr(26,0);
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']++;
            brr[t[i]-'a']++;
        }
        for(int i=0;i<25;i++){
            if(arr[i]!=brr[i]) return false;
        }
        return true;

    }
};
