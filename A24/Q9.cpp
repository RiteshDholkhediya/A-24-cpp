#include<iostream>
using namespace std;

int max(int, int);
double max(double,double);

int main(){
    int a,b;
    double x,y;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    cout<<endl;
    cout<<"Max between a and b "<<max(a,b);
    cout<<endl;
    cout<<max(3.4,4.3);



    return 0;
}

int max(int a, int b){
    return ((a>b)?a:b);
}

double max(double a, double b){
    return (a>b?a:b);
}