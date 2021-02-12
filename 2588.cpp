#include <iostream>

using namespace std;
int main(void) {
    int num1=0, num2=0;
    int result1 = 0, result2 = 0, result3 = 0;
    cin >> num1 >> num2;
    
    result1 = (num2%100)%10 * num1; // 5
    result2 = ((num2%100)/10) * num1 ; // 8
    result3 = (num2/100) * num1; // 3

    cout << result1 << endl << result2 << endl << result3 << endl << result1 + result2*10 + result3*100 << endl;
    return 0;
}






