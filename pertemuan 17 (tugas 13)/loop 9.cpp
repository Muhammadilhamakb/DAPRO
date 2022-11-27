#include <iostream>

using namespace std;

int main()
{
    int k,l,a;
    for(int j = 0; ; j++) {
        cout << "Masukan Nilai Anda = ";
        cin >> k;
        cout << k << endl;
        if(k == 9999) {
        break;
        } else if(k != 9999) {
        l += k;
        }
        a += 1;
    }

    cout << "Jumlah angka = " << l << endl;
    cout << "Jumlah angka cacah = " << a << endl;
    return 0;
}