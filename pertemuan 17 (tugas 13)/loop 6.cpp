#include <iostream>

using namespace std;

int main()
{
    
    int i,j,max,min;
    while (i != -99){
        cout << "masukkan nilai= ";
        cin >> j ;
        if (j == -99){
            break;
        }
         if(i==0){
            max=j;
            min=j;
        }else if(j>max){
            max = j;
        }else if(j<min){
            min = j;
        }
    }
    cout << " Nilai maksimal = " << max << endl;
    cout << " Nilai minimal = " << min << endl;

    return 0;
}