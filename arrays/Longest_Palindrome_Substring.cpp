class Solution {
public:
    string longestPalindrome(string s) {
        int left=0;
        int right=0;
        int startindex=0;
        int currentlen=0;
        int maxlen=1;

        for(int i=0;i<s.length();i++){
            left=i;
            right=i;
            while(left >= 0 && right < s.length() && s[left] == s[right])
            {
                left--;
                right++;
            }
        currentlen = right - left - 1;
            if(currentlen > maxlen){
                maxlen=currentlen;
                startindex=left+1;
            }

            
        }

        for(int i=0;i<s.length();i++){
            left=i;
            right=i+1;
            while(left >= 0 && right < s.length() && s[left] == s[right])
            {
                left--;
                right++;
            }
        currentlen=right-left-1;
            if(currentlen > maxlen)
            {
                maxlen=currentlen;
                startindex=left+1;
                
            }
            
            
        }
        return s.substr(startindex, maxlen);
    }
};
