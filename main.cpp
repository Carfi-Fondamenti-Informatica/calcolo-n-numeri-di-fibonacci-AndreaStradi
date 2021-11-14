#include <iostream>
using namespace std;

int main(){
    int a=1, b=1, c, n, i=1;
    cin >> n;

        if (n>=2) {
            cout << b << endl;
            for (i = 2; i <= n; i++) {
                c = a + b;
                cout << c << endl;
                a = b;
                b = c;
            }
        }else{
               cout << "errore" << endl;
        }
    return 0;
}
