class Solution {
public:
    string reverseWords(string s) {
        s = regex_replace(s, regex("^ +| +$|( ) +"), "$1");
        vector<string> st;
        string temp;
        string comp = "  ";
        for(int i=0; i<s.length(); i++){
            if(s[i]!=comp[0])
                temp.push_back(s[i]);
            else {
                st.push_back(temp);
                temp = "";
            }
        }
        st.push_back(temp);
        
        string ans = "";
        int n = st.size();
        for(int i=n-1; i>=0; i--){
            if(i!=0)
                ans = ans + st[i] + " "; 
            else
                ans = ans + st[i];
        }
        return ans;
    }
};
