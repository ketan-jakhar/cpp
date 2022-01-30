#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n = 789;
    // cin >> n;

    int sum = 0;
    int realn = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }

    if(sum == realn) {
        cout << "Armstrong no." << endl;
    } else{
        cout << "Not Armstrong no." << endl;
    }

    return 0;
}