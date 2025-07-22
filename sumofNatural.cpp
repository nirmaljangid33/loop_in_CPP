#include<iostream>
using namespace std;
int main(){
    int n,sum =0;
    cout<<"enter the number :";
    cin>>n;
    int i=1;
    while(i<=n){
        sum +=i;
        i++;
    }
    cout<<"sum of natural number :"<<sum ;
    return 0;
}