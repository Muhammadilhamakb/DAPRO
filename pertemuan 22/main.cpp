#include <iostream>
using namespace std;

int main(){
    int y = 2, l = 0, m = 0, rata = 0;
    int x[3][2][2];


     for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<2 ; j++){
            for(int k=0 ; k<2 ; k++){
                x[i][j][k] = y;
                y += 2;

            }
        }
     }
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<2 ; j++){
            for(int k=0 ; k<2 ; k++){
                    cout<< x[i][j][k];

                    if(x[i][j][k]%4==0){
                    l ++;
                    m += x[i][j][k];}
                cout << " ";
            }
        }
    }

        rata = m/l;
        cout<<"\n\nKelipatan 4 = "<< l <<" angka";
        cout<<"\nJumlah Kelipatan 4 = "<< m;
        cout<<"\nRata-rata Kelipatan 4 = "<< rata;
    return 0;
}