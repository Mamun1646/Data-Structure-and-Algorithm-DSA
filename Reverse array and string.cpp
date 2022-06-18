#include<bits/stdc++.h>
using namespace std;
void print_array(int a[] ,int Size)
{
    for(int i =0;i<Size; ++i){
        cout << a[i] <<" ";
    }
    cout << "\n";
}
void Reverse_array(int a[],int start , int End){
    int temp ;
    while(start<End){
        temp =a[start];
        a[start]=a[End];
        a[End]=temp;
        start++;
        End--;
    }

}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    print_array(arr,n);
    printf("Reverse Array \n");
    Reverse_array(arr,0,n-1);
    print_array(arr,n);
}
