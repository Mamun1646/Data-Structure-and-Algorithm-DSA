#include<bits/stdc++.h>
using namespace std;
int sum;
int linear_search (int arr[],int s,int k){
    if(s==0)
    return 0;
    if(arr[0]==k)
    return 1;
    int remaining_part=linear_search(arr+1,s-1,k);
    return remaining_part;

 
    
}

int main() {
    int arr[]={1,2,3,4,5,6};
   int ans=linear_search(arr,6,6);
   ans?cout<<"present":cout<<"Not Present"<<endl;
}