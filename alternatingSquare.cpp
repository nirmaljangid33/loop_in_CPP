#include<iostream>
using namespace std;
int main(){
    int n,sum=0,seq=1;
    cout<<"enter the nuber : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        seq =(i*i);
        if(seq%2==0){
            sum=sum-seq;
        }
        else{
            sum= sum+seq; 
        }
    }
    cout<<sum<<" ";
    return 0;
}
