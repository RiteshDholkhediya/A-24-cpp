#include<iostream>
using namespace std;
float area(int);
float area(int, int);
float area(float, float);


int main(){
    int r,b,h;
    float l,w;
    cout<<"Enter  radius number ";
    cin>>r;
    cout<<endl;
    cout<<"Area of circle is "<<area(r)<<endl;
    cout<<"Enter length and breadth of the rectangle ";
    cin>>l>>w;

    cout<<endl;

    cout<<"Area of rectangle is "<<area(l,w);

    cout<<endl;
    cout<<"Enter the base and height ";
    cin>>b>>h;

    cout<<endl;

    cout<<"Area of the triangle is "<<area(b,h);


    return 0;
}

float area(int r){
    return 3.14*r*r;
}

float area(int b, int h){
    float a;
    a=0.5*b*h;
    return a;
}

float area(float l, float b){

    return l*b;
}