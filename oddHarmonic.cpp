#include<iostream>
using namespace std;
int main(){
   int n,div=1;
   cout<<"enter the number :";
   cin>>n;
   for (int i=1;i<=n;i++){
       if(i%2!=0){
         div +=(1/i);
       }
   }
   cout<<div;
   return 0;
}