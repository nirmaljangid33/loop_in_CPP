#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int a=0,b=0,c=1,nt=0;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<n;i++){
        nt =a+b+c;
        if(nt%2==0){
            cout<<nt<<" ";
        }
        a=b;
        b=c;
        c=nt;
    }
    return 0;
    
}

