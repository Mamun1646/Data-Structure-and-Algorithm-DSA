#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int a[]={1,3,4,5,6,10};
    int Size =sizeof(a)/sizeof(a[0]);
    ll Min =INT_MAX;
 ll Max =INT_MIN;
    for(int i =0;i<Size; ++i){
        if(Min>a[i])
            Min=a[i];
        if(Max<a[i])
            Max=a[i];
    }
    cout << Min << " "<<Max <<"\n";

}

