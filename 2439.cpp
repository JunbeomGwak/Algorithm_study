#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int num=0, cnt=1;
    cin >> num;
    while(0 < num) {
        for(int i=num; i>1; i--)
            cout << " ";
        for(int j=0; j<cnt; j++)
            cout << "*";
        cout << endl;
        num--;
        cnt++;
    }
    return 0;
}