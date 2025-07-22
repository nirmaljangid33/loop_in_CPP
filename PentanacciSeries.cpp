#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int a=0,b=0,c=0,d=0,e=1,nt=0;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" ";
    for(int i=5;i<n;i++){
        nt =a+b+c+d+e;
        cout<<nt<<" ";
        a=b;
        b=c;
        c=d;
        d=e;
        e=nt;
    }
    return 0;
    
}

