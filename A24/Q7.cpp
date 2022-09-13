#include<iostream>
using namespace std;

int add(int, int, int=0);
int main(){

    int a,b,c;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    cout<<"Sum of "<<a<<"+"<<b<<"="<<add(a,b)<<endl; 

    cout<<"Enter three numbers ";
    cin>>a>>b>>c;
    cout<<"Sum of "<<a<<"+"<<b<<"+"<<c<<"="<<add(a,b,c)<<endl; 

    return 0;
}

int add(int a, int b, int c){
    int sum;
    sum=a+b+c;
    return sum;
}