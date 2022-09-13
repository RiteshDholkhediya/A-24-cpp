#include<iostream>
using namespace std;

int power(int, int);

int main(){
    int a,b;
    cout<<"Enter number ";
    cin>>a;
    cout<<"Enter power of the number ";
    cin>>b;
    cout<<"Result is "<<power(a,b);

    return 0;
}

int power(int x, int y){
    int i=1;

    while(y){
        i=i*x;
        y--;
    }
    return i;
}