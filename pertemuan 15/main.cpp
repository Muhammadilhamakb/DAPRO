#include <iostream>

using namespace std;

int main()
{
    int x ;
    int a = 5000 ;
    int y ;
    cout << "Masukkan bilangan :";
    cin >> x ;
    if (x == 500) {
        y = 5 ;
    }
    else if (x == 1000) {
        y = a / 1000 ;
    }
    else if (x == 300){
        while (x<= a) {
            if ( x > a-300){
                cout << x << "." ;
                x = x + 300;
            }else{
                cout << x << "," ;
                x = x + 300;
            }
        }
                y = a / 300;
    }
    cout << "\npermen dito berjumlah = " << y ;
    return 0;
}

