#include <iostream>
using namespace std;

int main() {
    int n=0, x=0;
    cin >> n >> x;
    int array[n] = {0,};

    for(int i=0; i<n; i++)
        cin >> array[i];

    for(int j=0; j<n; j++) {
        if(array[j] < x)
            cout << array[j] << " ";
    }
    return 0;
}
