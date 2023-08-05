#include<bits/stdc++.h>
using namespace std;
int factorial(int number){
    if(number==0)
    return 1;
    int smallProblem=factorial(number-1);
    int bigProblem=number*smallProblem;
    return bigProblem;
}

int main() {
    int number;
    cout<<"Enter Your Number : \n";
    cin>>number;
    int result =factorial(number);
    cout<<result<<endl;
}