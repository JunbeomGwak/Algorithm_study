#include <iostream>
using namespace std;

int main() {
    int num=0, result=0;
    cin >> num;

    for(int i=1; i<=num; i++)
        result += i;

    cout << result << endl;
    return 0;

}