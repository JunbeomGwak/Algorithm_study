#include <iostream>
using namespace std;

int main() {
    int num1=0;
    cin >> num1;

    if(num1>=90 && num1<=100)
        cout << "A" << endl;
    else if(num1>=80 && num1<90)
        cout << "B" << endl;
    else if(num1>=70 && num1<80)
        cout << "C" << endl;
    else if(num1>=60 && num1<70)
        cout << "D" << endl;
    else
        cout << "F" << endl;

    return 0;

}