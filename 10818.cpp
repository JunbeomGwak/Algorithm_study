#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num=0, *array, temp=0;
    cin >> num;

    array = new int[num];
    for(int i=0; i<num; i++)
        cin >> array[i];

    sort(array, array+num);
    cout << array[0] << " " << array[num-1];

    return 0;

}