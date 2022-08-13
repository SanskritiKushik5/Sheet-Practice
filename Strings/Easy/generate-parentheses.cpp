class Solution {
public:
    vector<string> ans;
    void para(string &s, int open, int close){
        if(open==0 && close==0){
            ans.push_back(s);
            return;
        }
        if(open>0){
            s.push_back('(');
            para(s, open-1, close);
            s.pop_back();
        }
        if(close>0 && open<close){
            s.push_back(')');
            para(s, open, close-1);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string s;
        para(s, n, n);
        return ans;
    }
};
