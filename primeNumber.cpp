#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    bool isPrime = true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isPrime = false;
        }
    }
    if(isPrime ==true){
        cout<<n<<" is prime :";
    }
    else{
        cout<<n<<"not prime";
    }
    return 0;
}