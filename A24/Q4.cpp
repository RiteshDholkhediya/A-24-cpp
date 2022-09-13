#include<iostream>
using namespace std;

void pascalTriangle(int);
int combination(int, int);
int fact(int);

int main(){
    int n,flag,r;

    cout<<"Enter a number";
    cin>>n;

    pascalTriangle(n);
   
    return 0;
}


void pascalTriangle(int n){
    int flag,r;
     for(int i=0;i<n;i++){
        flag=1;
        r=0;
        for(int j=0;j<=(n-1)*(n-1);j++){
            
            
            if(j>=((n-1)-i) && j<=((n-1)+i)){

                if(flag){
                    
                    if(combination(i,r)>9 && combination(i,r)<100)
                        cout<<combination(i,r)<<"  ";
                    else if(combination(i,r)>100)
                        cout<<combination(i,r)<<" ";
                    else
                        cout<<combination(i,r)<<"   ";
                    r++;
                    flag=0;
                }
                else{
                    cout<<"    ";
                    flag=1;
                }

            }
                
            else 
                cout<<"    ";
        }
        cout<<endl;
    }
}

int fact(int n){
    int fact=1;
    while(n){
        fact = fact*n;
        n--;
    }

    return fact;
}

int combination(int n, int r){
    return fact(n)/(fact(n-r)*fact(r));
}