class Solution {
public:
    bool isValid(string s) {
        stack<char>valid;
        for(int i=0;i<s.size();++i){
        if(s[i]=='(')
            valid.push(s[i]);
         else if(s[i]=='{')
            valid.push(s[i]);
        else if(s[i]=='[')
            valid.push(s[i]);
        else  if(s[i]==')'&&!valid.empty() &&valid.top()=='(') 
             valid.pop();
        else if(s[i]=='}'&&!valid.empty() &&valid.top()=='{')
             valid.pop();
         else if(s[i]==']'&&!valid.empty() && valid.top()=='[')
             valid.pop();
                 else
                 {
                     cout << " ";

                     return false;
                     
                 }
                 
                 
                 }
                 
                 return valid.size() ? false : true;
       // return true;
       
            
        
    }
};