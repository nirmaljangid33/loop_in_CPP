#include<iostream>
using namespace std;
int main(){
float n,m=0 ,s=0;
    cout<<"enter the number : ";
    cin>>n;
    for(float i=1;i<=n;i++){
            m=1/i;
            s=s+m;
    }
    cout<<s;
}
