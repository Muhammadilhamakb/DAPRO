#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 100 ; i++){
        cout << i << endl;
        if (i == 55){
            break;
        }
        cout << i << endl;
    }
    
    return 0;
}