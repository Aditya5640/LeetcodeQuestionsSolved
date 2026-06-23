make sure you are using the sign in the string to calculate the integer with the sign attached. if there is sign store it in "sign" named variable and skip it i++; 
if there is blank space skip it (if s[i]==' ' i++)
while i<length of s && isdigit  
   to convert character to digit digit=s[i]-'0';  
   read the digits then i++;
   check for positive overflow return INT_MAX
   build the number num = num * 10 +digit;
return sign*num;
