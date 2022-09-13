#include<iostream>
using namespace std;

int maxDigit(int);
int main(){
    int a,b;
    cout<<"Enter a number";
    cin>>a;
    b=a;

    cout<<"Max digit in "<<b<<" is "<<maxDigit(a);
    return 0;
}

int maxDigit(int num){
    int max;
    max=num%10;
    num=num/10;
    while(num){
        
        if(max<num%10)
            max=num%10; 
        num=num/10;
    }
    return max;
}