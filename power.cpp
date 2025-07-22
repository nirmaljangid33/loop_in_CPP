#include<iostream>
using namespace std;
int main(){
    int a,b,i=1,m=1;
    cout<<"enter the number ";
    cin>>a;
    cout<<"enter the power ";
    cin>>b;

    while(i<=b){
        m = m*a;
        i++;
    }
    cout<<m;
    return 0;

}