#include<bits/stdc++.h>
using namespace std;
void kadane_algorithom(int a[],int n){
     int ans_subArray =INT_MIN;
     int current_subArray =0;
     for(int i =0;i<n ; ++i){
         current_subArray+=a[i];
           if(ans_subArray<current_subArray)
           ans_subArray =current_subArray;
     if(current_subArray<0)
        current_subArray=0;


     }
     cout << ans_subArray<<endl;
}
int main(){
    int a[]={-1,-2,-3,-4,-7,-5};
    int Size = sizeof(a)/sizeof(a[0]);
    kadane_algorithom(a,Size);
    return 0;

}
