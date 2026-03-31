#include<iostream>
using namespace std;

int arr[20],  B[20];
int n;
/// nama repo : MargeSort_110
// Commit 2: Struktur dasar program
void input(){
    while (true)
    {
        cout << "Masukan panjnag elemet arry:";
        cin >> n;
        if(n <=20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array yg dapat dimasukkan adalah 20 ";

        }
    }

    cout << "\n======================================"<< endl;
    cout << "\n=======================Masukan Array==========="<< endl;
    cout << "\n======================================"<< endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ":";
        cin >> arr[i];
    }
}

