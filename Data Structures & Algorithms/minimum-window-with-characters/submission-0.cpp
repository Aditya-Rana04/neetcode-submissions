class Solution {
public:
    string minWindow(string s, string t) {
        int left=0;
        int start=0;
        int min_length=INT_MAX;
        int required =t.size();
        unordered_map<char,int>m;
        for(char x: t){
            m[x]++;
        }
        for(int right=0;right<s.size();right++){
            if(m[s[right]]>0){
                required--;
            }
            m[s[right]]--;
            while(required==0){
                if(right-left+1<min_length){
                    min_length=right-left+1;
                    start=left;
                }
                m[s[left]]++;
                if(m[s[left]]>0){
                    required++;
                }
                left++;

               
            }
        }
        return min_length == INT_MAX ? "" : s.substr(start, min_length);

    }
};
