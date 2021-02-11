#include <iostream>
using namespace std;

int main() {
    int num=0;
    cin >> num;

    for(int i=0; i<num; i++) {
        int n1=0, n2=0;
        cin >> n1 >> n2;
        cout << n1+n2 << endl;
    }
    return 0;
}