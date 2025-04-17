#include <iostream>
using namespace std;

int arr[20], B[20]; // Array utama dan array bantu
int n;

void input()
void input()

{
    void input()
{
    while (true)
    {
        cout << "masukkan panjang element array :";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else 
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "==================" << endl;
    cout << "masukkan elemen array" << endl;
    cout << "==================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

}

void mergeSort(int low,int high){
    if (low >= high)
    {               // step 1
        return;     // step 1a
    }

    int mid = (low + high) / 2; // step 2

    mergeSort(low, mid);      //step 3a
    mergeSort(mid + 1, high); // step 3b

    int i = low; // step 4a
    int j, k;
    j = mid + 1; // step 4b
    k = low;   // step 4c

    while (i <= mid && j <= high) // step 4d
    {
        if (arr[i] <= arr[j]) // step 4.d.i
        {
            B[k] = arr[i]; // step 4.d.i.1
            i++;            // step 4.d.i.2
        }
        else
        {
            B[k] = arr[j]; // step 4.d.i.3
            j++;            // step 4.d.i.4
        }
        k++; //step 4.d.ii
    }

    while (j <= high) // step 4e
    {
        B[k] = arr [j]; // step 4e.i
        j++;            // step 4e.ii
        k++;            // step 4e.iii
    }

    while (i <= mid)
    {
        B[k] = arr [i];
        i++;
        k++;
    }



}