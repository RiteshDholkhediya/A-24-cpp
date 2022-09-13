#include<iostream>
using namespace std;

void swap(int &, int &);
int main(){
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;

    swap(a,b);
    cout<<"a="<<a<<" b="<<b;
    return 0;
}

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b=temp;
}