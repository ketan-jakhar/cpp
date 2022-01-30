#include<iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter the test number: ";
    cin >> n;

    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=2*n - 1; j++) {
            if(j > n - i + 1 && j < n + i - 1) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    int k = n;
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=2*n - 1; j++) {
            if(j > n - k + 1 && j < n + k - 1) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        k--;
        cout << endl;
    }

    return 0;
}