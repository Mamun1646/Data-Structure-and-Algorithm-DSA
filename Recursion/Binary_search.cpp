#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int start,int end){
    for(int i=start; i<end; ++i)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int binary_search(int arr[],int start,int end, int key){
    print(arr,start,end);
    if(start>end)
    return -1;
    int mid =(start+end)/2;
    cout<<"======"<<mid<<endl;
    if(arr[mid]==key)
       return 1;
     if(arr[mid]>key){
        return  binary_search(arr,start,mid-1,key);}
         else return   binary_search(arr,mid+1,end,key);
     
}
int main(){
    int arr[]={1,2,3,4,5,6,7,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=2;
    cout<<"size "<<size<<endl;
    int ans =binary_search(arr,0,size-1,key);
    if(ans==1)
    cout<<"present"<<endl;
    else cout<<"not Present"<<endl;
}