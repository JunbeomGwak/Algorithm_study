#include <iostream>
using namespace std;

int main() {
    int num=0, compnum=0, ten=0, il=0, new_number_il=0, new_number=0, cnt=1;
    cin >> num;
    compnum = num;
    while(1) {
        ten = compnum/10;
        il = compnum%10;

        new_number_il = (ten+il)%10;
        new_number = il*10+new_number_il;
        
        compnum = new_number;
        if(num == new_number) 
            break;
        cnt++;
    }
    cout << cnt;
}