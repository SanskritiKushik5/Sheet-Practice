class Solution:
    def isPalindrome(self, x: int) -> bool:
        string=str(x)
        low=0
        high=len(string)-1
        
        while(low<high):
            if string[low]!=string[high]:
                return False
            low=low+1
            high=high-1
        
        return True
