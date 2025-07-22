#include<iostream>
using namespace std;
int main(){
    int n,tem = 0 ,m=0;
    cout<<"enter the number : ";
    cin>>n;
    while(n!=0){
       tem = n%10;
       m = m*10+tem;
       n = n/10;
    }
    cout<<m;
    return 0;
}