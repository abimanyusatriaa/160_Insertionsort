
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

void insertionsort() {                                    //procedure insertionsort

    int temp;                                             //membuat variable data temporer atau penyimpanan sementara
    int i, j;                                             //membuat variable j sebagai penanda

    for (i = 1; i <= n - 1; i++) {                        //1. looping dengan 1 ddimulai dari 1 hingga n-1

        temp = arr[i];                                    //2. simpan nilai arr[1] ke variable sementara temp

        j = i - 1;                                        //3. setting nilai j sama dengan i-1

        while (j >= 0 && arr[j] > temp)                   //4. looping while dimana niali j lebih besar sama dengan 0 dan
            //arr[j] lebih besar daripada temp
        {
            arr[j + 1] = arr[j];                          //4a. simpan arr[j] ke dalam variable arr[j+1]
            j--;                                          //4b. decrement nilai j by 1
        }

        arr[j + 1] = temp;                                //5. simpan nilai temp ke dalam arr[j+1]

        cout << "\nPass" << i << ": ";                    //output ke layar
        for (int k = 0; k < n; k++) {                     //looping nilai k dimulai dari 0 hingga n-1
            cout << arr[k] << " ";                        //output ke layar
        }

    }
}

int main()
{
    std::cout << "Hello World!\n";
}

