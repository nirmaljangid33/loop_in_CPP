#include<iostream>
using namespace std;
int main(){
    int n,i=1,mul=1;
    cout<<"enter the number:";
    cin>>n;
    while(i<=10){
        mul = i*n;
        cout<<n<<" * "<<i<<" = "<<mul<<endl;
        i++;
    }
    return 0;
}