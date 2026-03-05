#include <iostream>
#include <string>
using namespace std;

int arr[20]; //Deklarasi array global dengan ukuran 20
int n; //Deklarasi variabel n dengan tipe data integer

void input(){ //Prosedur input
    int d;
    while (true){
        cout << "Mau barapa elemen pada array? : ";
        cin >> n;
        if (n<=20)
            break;
        else{
            cout << "\nTerlalu banyak, maksimal 20 saja\n";}

    }
    
cout << endl;
cout << "======================" << endl;
cout << "Masukkan elemen array" << endl;
cout << "======================" << endl;

for (int i=0; i<n; i++){
    cout << "Data ke-" << (i+1) << ": ";
    cin >> arr[i];}
}

void bubbleSortArray(){ //Prosedur bubble sort
    int pass = 1; //Deklarasi variabel dengan nama pass dan tipe data integer, serta nilai awal 1
    do{
        for (int j=0; j<= n - 1 - pass; j++){ //Perulangan for dengan variabel j yang dimulai dari 0 hingga n-1-pass
                                              //j itu untuk ngecek sampai kolom berapa
            if(arr[j] > arr[j+1]){
                int temp; //Deklarasi wadah sementara
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        pass += 1;

        cout << "\nPass " << pass - 1 << ": ";
        for (int k=0; k<n; k++){
            cout << arr[k] << " ";
        }

        cout << endl;
    }
    while (pass <= n-1);
}

void display(){ //Prosedur menampilkan elemen array yang sudah tersusun
    cout << endl;
    cout << "======================" << endl;
    cout << "Elemen array yang sudah tersusun" << endl;
    cout << "======================" << endl;
    cout << endl;

    for (int j = 0; j < n; j++){
        cout << arr[j] << " ";
        if(j < n-1){
            cout << "--> ";
        }
    }
    cout << endl;
    cout << endl;
    
    cout << "Jumlah pass = " << n-1 << endl;
    cout << endl;
    cout << endl;
}

int main(){ //Program utama
    input();

    bubbleSortArray();
    display();

    system("pause");
    return 0;

}