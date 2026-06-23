class Solution {
public:
    string convert(string s, int numRows) {
        int currentrow=0;
        bool goingdown=true;
        vector<string> rows(numRows);
        if(numRows==1){
            return s;
        }
        for(int i=0;i<s.length();i++){
            rows[currentrow]+=s[i];
            if(currentrow==0){
                goingdown=true;
            }
            if(currentrow==numRows-1){
                goingdown=false;
            }
            if(goingdown){
                currentrow++;
            }
            else{
                currentrow--;
            }
        }
        string result = "";
        for(int i=0;i<numRows;i++)
        {
            result += rows[i];
        }
        return result;;
    }
};
