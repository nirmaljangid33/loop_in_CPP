#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int a=0,b=0,c=0,d=0,e=0,f=1,nt=0;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" ";
    for(int i=6;i<n;i++){
        nt =a+b+c+d+e+f;
        cout<<nt<<" ";
        a=b;
        b=c;
        c=d;
        d=e;
        e=f;
        f=nt;
    }
    return 0;
    
}

