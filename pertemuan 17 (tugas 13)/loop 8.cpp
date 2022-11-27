#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    for(i = 0; ; i++) {
        cout << "Masukan Nilai = ";
        cin >> j;
        if(j == 9999) {
            break;
        }
        cout << j << endl;
        k += i;
    }

    cout << "Jumlah angka = " << i << endl;
   
    return 0;
}