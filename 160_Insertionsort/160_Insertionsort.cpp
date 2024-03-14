
#include <iostream>
using namespace std;

int arr[20];                                              //membuat array dengan panjang data 20
int n;                                                    //membuat variable inputan n

void input() {                                            //procedure input
    while (true)
    {
        cout << "Masukan Jumlah DAta Pada Array : ";      //membuat inputan jumlah elemen array
        cin >> n;                                         //memanggil variable inputan n

        if (n <= 20) {                                    //membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";     //menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;                                         //membuat jarak per baris program
    cout << "====================" << endl;               //membuat tampilan susunan data element array
    cout << "Masukan Elemen Array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++)                           //membuat perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

int main()
{
    std::cout << "Hello World!\n";
}

