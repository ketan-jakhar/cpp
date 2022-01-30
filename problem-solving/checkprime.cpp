#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool flag = false;

    for (int i = 2; i < sqrt(n); i++){
        if (n%i==0){
            cout << "non-prime" << endl;
            flag = true;
            break;
        }
    }
    if(!flag){
        cout << "prime" << endl;
    }
    return 0;
}