#include<iostream>
using namespace std;

int fiboSeries(int);
int main(){
    int num;
    cout<<"Enter a number ";
    cin>>num;
    if(fiboSeries(num))
        cout<<num<<" is present in fibonacci series";
    else
        cout<<num<<" not found in series";
    return 0;
}

int fiboSeries(int n){
    int a=-1,b=1,c;
    c=a+b;
    while(c<n){
        
        cout<<c<<" ";
        a=b;
        b=c;
        c = a+b;

    }
    cout<<endl;
    if(c==n)
        return 1;
    return 0;
}