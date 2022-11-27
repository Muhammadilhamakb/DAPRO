#include <iostream>

using namespace std;

int main()
{
    int i;
    int j;
    cout << "program ini akan berhenti jika anda menginputkan -99.Jika anda tidak percaya silahkan buktikan!!!" << endl;
    while (i != -99){
        cout << "masukkan nilai= ";
        cin >> j ;
        if (j == -99){
            cout << "berhenti karena anda menginputkan -99" << endl;
            break;
        }
    }
    cout << "bagaimana percaya nggak 😁  " ;
    return 0;
}

