/* Rizka Nurul Septiana Hakim */
/* Nim 20051397025 Kelas 2020A */
/* Tugas 4 Membuat Program Menghitung Jumlah 6 Suku Pertama */

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int jumlahsuku;
    string pager = "===========================================================";

    cout << pager << endl << pager << endl;
    cout << "Menghitung Jumlah 6 Suku Pertama" << endl <<"dari barisan ";

    for(int i = 1; i <= 6; i++){
        if(i<6){
            cout << i <<"^3, ";
        }
        if(i<6){
        jumlahsuku+= pow(3, i);
        }
        if(i==6){
            cout << i << "^3 " << endl;
            cout << endl << "Jumlah 6 suku pertama Adalah " << jumlahsuku << endl;
        }
    }
}
