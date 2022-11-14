#include<bits/stdc++.h>
using namespace std;
void reverse(string & name , int i , int j){
    if(i>j){
        return ;
    }
    swap(name[i],name[j]);
    i++;--j;
    reverse(name, i, j);
}
int main(){
   string name ="mamun";
    reverse(name,0,name.size()-1);
    cout<<name<<endl;
}