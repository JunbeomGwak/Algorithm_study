#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int num=0;
    cin >> num;

    for(int i=1; i<=num; i++) {
        int n1=0, n2=0;
        cin >> n1 >> n2;
        cout << "Case #" << i << ": " << n1+n2 << "\n";
    }
    return 0;
}