#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int a[]={1,3,4,5,6,10};
    int Size =sizeof(a)/sizeof(a[0]);
    ll Min =*min_element(a,a+Size);
 ll Max =*max_element(a,a+Size);

    cout << Min << " "<<Max <<"\n";

}


