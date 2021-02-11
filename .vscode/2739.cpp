#include <iostream>
using namespace std;

int main() {
    int num=0,i;
    cin >> num;

    for(i=1; i<=9; i++) {
        cout << num << " * " << i << " = " << num*i << endl;
    }
    return 0;
}
