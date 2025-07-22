#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=1,nt=0;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" ";
    for(int i=7;i<n;i++){
        nt =a+b+c+d+e+f+g;
        cout<<nt<<" ";
        a=b;
        b=c;
        c=d;
        d=e;
        e=f;
        f=g;
        g=nt;
    }
    return 0;
    
}

