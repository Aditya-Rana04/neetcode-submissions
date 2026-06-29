class Solution {
public:
    void helper(int n,string s ,vector<string>&ans, int open, int close){
        if(close>open) return;
        if(open==n and close==n){
            ans.push_back(s);
            return;
        }
        if(open!=n){
            helper(n,s+"(",ans,open+1,close);
        }
        if(close!=n){
            helper(n,s+")",ans,open,close+1);
        }
        
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        helper(n,"",ans,0,0);
        return ans;
    }
};
