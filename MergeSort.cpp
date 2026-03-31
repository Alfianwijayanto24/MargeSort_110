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

void mergeSort(int low, int high){
    if(low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;


    mergeSort(low, mid);
    mergeSort( mid +  1, high);

        int i = low;
    int j = mid + 1;
    int k = low;

    while(i <= mid && j <= high)
    {
        if (arr[i] <= arr[j]<= high)
        {
            B[k] = arr[i];
            i++;

        }
        else
        {
            B[k] = arr[j];
            j++;
        }    
        k++;
    }
       while (j <= high)
    {
        B[k] = arr[j];
        j++;
        k = k + 1;

    }
    while (i <= mid)
    
    {
        B[k] = arr[i];
        i++;
        k++;
    
    }
 for (int x = low; x <= high; x++)
    {
        arr[x] = B[x];

    }

}
void output()
{
    cout << "\nData setelah diurutakan (Merge Sort): ";
    for(int i = 0; i <n; i++)
    {
        cout << arr[i]<< " ";

    }
    cout << endl;
}
int main()
{
    input();
    mergeSort(0, n - 1);
    output();

}