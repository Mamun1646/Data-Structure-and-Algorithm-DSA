#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    if(n==0)
    return ;
    cout<<n<<endl;
    solve(n-1);
   
}
int main(){
    solve(7);
}