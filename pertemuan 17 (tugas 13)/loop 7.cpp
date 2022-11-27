#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    for(i = 1; ; i++) {
        cout << "Masukan Nilai = ";
        cin >> j;
        if(j == 9999) {
            break;
        }
        cout << j << endl;
        k = k + j;
    }

    cout << "Jumlah angka = " << k << endl;
    return 0;
}