#include <iostream>
using namespace std;

int main(){
    float a1, a2, total;
    float gini;
    while(1){
        cin >> a1 >> a2;
        total = a1 + a2;
        gini= 1 - (a1/total)*(a1/total) - (a2/total)*(a2/total);
        cout << gini << endl;
    }
}