#include<iostream>
using namespace std;

int isPrime(int);
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;

    if(isPrime(num)){
        cout<<num<<" is prime number";
    }
    else
        cout<<num<<" is not prime";
    return 0;
}


int isPrime(int n){
    int i,flag=1;
    for(i=2;i<=n/2;i++){
        if(n%i==0)
            flag=0;
    }
    if(n<=1)
        flag=0;
    return flag;
}