#include <iostream>
using namespace std;

int main() {
    int casenum=0, n=0, cnt=0;
    
    cin >> casenum;
    do{
        int *score, avcount=0;
        double result=0, average=0;
        cin >> n;
        
        score = new int [n];
        for(int i=0; i<n; i++) {
            cin >> score[i];
            result += score[i];
        }
        average = result/n;
        for(int i=0; i<n; i++) {
            if(score[i]>average)
                avcount++;
        }
        cout << fixed;
        cout.precision(3);
        cout << double(avcount*100)/n << "%" << endl;

        cnt++;
    }while(cnt<casenum);
    return 0;
}