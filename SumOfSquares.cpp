#include<iostream>
using namespace std;
int main(){
    int n,pow=1,sum=0;
    cout<<"enter the nuber :";
    cin>>n;
    for(int i=0;i<=n;i++){
        pow= i*i;
        sum= sum+pow;
    
    }
    cout<<sum;
    return 0;
}