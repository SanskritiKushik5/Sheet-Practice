class Solution {
public:
    bool check(string s) {
        string s1 = s;
        reverse(s.begin(), s.end());
        if(s1 == s)
            return true;
        return false;
    }
    bool validPalindrome(string s) {
        int start = 0;
        int end = s.length()-1;
        int count = 0;
        while(start < end){
            if (s[start+1] == s[end]) {
                start += 2;
                end--;
                count += 1;
                s.erase(s.begin()+start);
                if(check(s)) 
                    return true;
                return false;
            } else if (s[start] == s[end-1]) {
                end -= 2;
                start++;
                count += 1;
                s.erase(s.begin()+end);
                if(check(s)) 
                    return true;
                return false;
            } else {
                start++;
                end--;
            }
        }
        if(count>1) 
            return false;
        else 
            return true;
        
    }
};
