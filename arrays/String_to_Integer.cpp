class Solution {
public:
    int myAtoi(string s) {
        int digit=0;
        int sign=1;
        int num=0;
        int i=0;
        while(i < s.length() && s[i] == ' ')
        {
            i++;
        }
        if(s[i]=='-'){
            sign =-1;
            i++;}
        if(s[i]=='+'){
            sign=1;
            i++;
        }
        while(i<s.length()&& isdigit(s[i])){
            
            digit=s[i]-'0';
            i++;
            if(num > INT_MAX/10 || num == INT_MAX/10 && digit>7){
                return INT_MAX;
            } 
            num=num*10 + digit;
        }
        return sign*num;
    }
};
