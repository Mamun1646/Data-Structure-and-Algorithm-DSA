#include<bits/stdc++.h>
using namespace std;
void print_array(int a[] ,int Size)
{
    for(int i =0;i<Size; ++i){
        cout << a[i] <<" ";
    }
    cout << "\n";
}
void Reverse_array_recursive(int a[],int start , int End){
    int temp ;
    if(start>=End)
        return;
        temp =a[start];
        a[start]=a[End];
        a[End]=temp;

        return Reverse_array_recursive(a,start+1,End-1);
    }


int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    print_array(arr,n);
    printf("Reverse Array \n");
    Reverse_array_recursive(arr,0,n-1);
    print_array(arr,n);
}
