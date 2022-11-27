#include <iostream>

using namespace std;

int main()
{
    int a ,mpy;
    cout << "input : " ;
    cin >> a ;
    for (int i = 1; i <= 10; i++)
    {
        mpy=i*a;
        cout << i << "x" << a << "=" << mpy << endl;
    }
    
    return 0;
}