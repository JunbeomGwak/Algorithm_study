#include <iostream>
using namespace std;

int main() {
    int n1=0, n2=0;
    while(1) {
        cin >> n1 >> n2;
        if(n1 == 0 && n2 == 0)
            break;
        cout << n1 + n2 << endl;
        
    }
    return 0;
}