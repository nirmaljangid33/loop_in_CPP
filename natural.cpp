#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the number : ";
    cin >> n;

    int i = 1;

    while (i <= n) {
        cout << i << ": is natural number "<<endl;
        i++;
    }

    return 0;
}
