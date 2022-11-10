#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    if(n==0)
    return ;
    solve(n-1);
    cout<<n<<endl;
}
int main(){
    solve(7);
}