#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int num=0;
    cin >> num;

    for(int i=0; i<num; i++) {
        int num1=0, num2=0;
        cin >> num1 >> num2;
        cout << num1+num2 << "\n";
    }

    return 0;
}