#include <iostream>

using namespace std;

int main()
{
    int data;
    float jumlah = 0;
    for (int i = 1; i <= 20; i++)
    {
        cout << i << endl;
        jumlah = jumlah + i;
        data = i ;  
    }
    float rata=jumlah / data;
    cout << "jumlah   = " << jumlah << endl;
    cout << "rata rata= " << rata << endl;
    
    return 0;
}