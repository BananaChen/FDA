#include <iostream>
using namespace std;

int main(){
    float n1, n2, total;
    float g0, g1, g2, ig;
    while(1){
        cin >> n1 >> n2 >> g0 >> g1 >> g2;
        total = n1 + n2;
        ig = g0 - (n1/total)*g1 - (n2/total)*g2;
        cout << ig << endl;
    }
}