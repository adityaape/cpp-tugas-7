#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    // Input jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    // Membuat array bertipe data int
    vector<int> array(n);

    // Mengisi nilai dalam array melalui inputan user
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << (i + 1) << ": ";
        cin >> array[i];
    }

    // Menampilkan nilai tertinggi dalam array
    int nilaiTertinggi = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > nilaiTertinggi) {
            nilaiTertinggi = array[i];
        }
    }
    cout << "Nilai tertinggi dalam array adalah: " << nilaiTertinggi << endl;

    // Meminta user untuk memasukkan angka untuk diperiksa
    int angkaCari;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> angkaCari;

    // Mencari angka dalam array dan menampilkan indeksnya jika ada
    bool ditemukan = false;
    for (int i = 0; i < n; i++) {
        if (array[i] == angkaCari) {
            cout << "Angka " << angkaCari << " ditemukan pada indeks: " << i << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Angka " << angkaCari << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}
