#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string name , int i, int j){
    if(i>j){
        return 1;
    }
    if(name[i]!=name[j])
      return 0;
    return isPalindrome(name,i+1,j-1);
}
int main(){
    string name ="mmmm";
   int ans = isPalindrome(name,0,name.size()-1);
   if(ans)
    cout<<"Palindrome Number"<<endl;
    else cout<< "is Not a Palindrome number"<<endl;
    
}