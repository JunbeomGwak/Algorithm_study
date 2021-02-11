#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int num=0;
    cin >> num;

    for(int i=1; i<=num; i++) {
        for(int j=0; j<i; j++)
            cout << "*";
        cout << '\n';
    }

    return 0;
}