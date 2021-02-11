#include <iostream>
using namespace std;

int main() {
    int num=0;
    cin >> num;

    if(num%4 == 0 && num%100 !=0 || num%4 == 0 && num%400 == 0)
        cout << "1" << endl;
    else
        cout << "0" << endl;

    return 0;
}
