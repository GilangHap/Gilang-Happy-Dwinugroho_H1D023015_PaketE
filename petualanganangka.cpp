#include <iostream>
#include <algorithm>
using namespace std;

// Fungsi untuk memeriksa apakah sebuah angka adalah bilangan prima
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) return false;
    }
    return true;
}

// Fungsi mencari nilai di array menggunakan linear search
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) return i;
    }
    return -1;
}

int main() {
    int n, m;
    cin >> n >> m;

    int array_A[n];
    int array_B[m];

    // Input array A
    for (int i = 0; i < n; i++) {
        cin >> array_A[i];
    }

    // Input array B
    for (int i = 0; i < m; i++) {
        cin >> array_B[i];
    }

    int results[m + n]; // Menggunakan array untuk hasil
    int result_count = 0; // Counter untuk hasil

    // Cari nilai di array_A yang indeksnya bilangan prima
    for (int i = 0; i < n; i++) {
        if (isPrime(i)) {
            results[result_count++] = array_A[i];
        }
    }

    // Cari nilai di array_B yang indeksnya ganjil
    for (int i = 0; i < m; i++) {
        if (i % 2 != 0) {
            results[result_count++] = array_B[i];
        }
    }

    // Urutkan hasil pencarian
    sort(results, results + result_count);

    // Cetak hasil pencarian
    if (result_count == 0) {
        cout << "TIDAK ADA" << endl;
    } else {
        
    }

    return 0;
}
