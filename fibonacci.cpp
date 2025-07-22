#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int f=0, s=1,nt=0;
    cout<<f<<" "<<s<<" ";
     for(int i = 2; i <= n; i++){
        nt = f + s;
        cout << nt << " ";
        f = s;
        s = nt;
    }

    return 0;
    
}

