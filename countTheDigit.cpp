#include<iostream>
using namespace std;
int main(){
    int n ,temp=0, count =0;
    cout<<"enter the number : ";
    cin>>n;
    while(n!=0){
        n = n/10;
        count++;
    }
    cout<<count;
    return 0;
}