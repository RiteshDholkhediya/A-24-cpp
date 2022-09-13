#include<iostream>
using namespace std;

int add(int,int);
float add(int, float);
float add(float, int);
float add(float,float);
double add(float, double);
double add(double, float);
double add(double,double);

double add(int, double);
double add(double, int);

int main(){
    
    cout<<"Sum is "<<add(2.45555,1);
    
    return 0;
}

int add(int a,int b){
    return a+b;
}

float add(int a, float b){
    return a+b;
}

float add(float a, int b){
    return a+b;
}

float add(float a, float b){
    return a+b;
}

double add(float a, double b){
    return a+b;
} 


double add(double a, float b){
    return a+b;
}

double add(double a, double b){
    return a+b;
}

double add(int a, double b){
    return a+b;
}

double add(double a, int b){
    return a+b;
}