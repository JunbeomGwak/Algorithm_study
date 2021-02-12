#include <iostream>
using namespace std;

int main() {
    int n1=0, n2=0;
    while(true) {
        cin >> n1 >> n2;
        if(cin.eof()) // 만약 EOF라면
            break;
        cout << n1 + n2 << endl;
    }
    return 0;
}