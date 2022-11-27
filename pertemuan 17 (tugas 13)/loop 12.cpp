#include <iostream>

using namespace std;

int main()
{
    float f;
    cout << "-------------------------" << endl;
    cout << "Celcius     Fahremheit" << endl;
    cout << "-------------------------" << endl;
    for(int c = 0; c <= 100; c++) {

        f = ((9.0/5)*c)+32;
        printf("%d \t|\t %.1f |\n",c, f);
    
    }
    return 0;
}