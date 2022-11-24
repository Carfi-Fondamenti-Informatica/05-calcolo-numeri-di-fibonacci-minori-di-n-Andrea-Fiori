#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin >> n;
    int a=1, b=1, risultato=0;
    if (n==1) {
        cout << "1" << endl;
        cout << "1" << endl;
    } else if (n==2) {
        cout << "1" << endl;
        cout << "1" << endl;
        cout << "2" << endl;
    } else if (n==0) {
        cout << "0" << endl;
    } else {
        cout << "1" << endl;
        cout << "1" << endl;
        for (int i = 0; i <=(n-3); ++i) {

            risultato = a+b;
            if (risultato>n) break;
            cout << risultato << endl;
            a = b;
            b= risultato;


        }
    }
   return 0;
}
