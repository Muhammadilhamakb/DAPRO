#include <iostream>

using namespace std;

int main()
{
    for (int i = 1;i <= 7;i++)
    {
        cout << "looping ke" << i << ":" << endl;
        for (int j = 1;j <= 10;j++)
        {
        cout << "->baris ke " << j << ":" << endl;   
        }
        
    }
    return 0;
}