#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the test no.: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        // int j;
        for (int j=1; j<=n - i; j++){
            cout << "  ";
        }

        for (int j=1;j<=2*i - 1; j++) {
            cout << "*" << " ";
        }
        cout << endl;    
    }

    int k = n;
    for (int i=1; i<=n; i++) {
        for (int j=1;j<=n - k; j++) {
            cout << "  ";
        }

        for (int j=1; j<=2*k - 1; j++){
            cout << "*" << " ";
        }
        k--;
        cout << endl;
    }

    return 0;
}