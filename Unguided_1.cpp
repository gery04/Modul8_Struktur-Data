#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Fungsi untuk melakukan binary search
int binarySearch(const string &str, char target) {
    int left = 0;
    int right = str.length() - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        // Jika target ditemukan di tengah
        if (str[middle] == target) {
            return middle;
        }
        // Jika target lebih kecil dari elemen tengah, maka cari di kiri
        else if (str[middle] > target) {
            right = middle - 1;
        }
        // Jika target lebih besar dari elemen tengah, maka cari di kanan
        else {
            left = middle + 1;
        }
    }

    // Jika tidak ditemukan
    return -1;
}

int main() {
    string sentence;
    char target;

    // Input kalimat
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, sentence);

    // Input huruf yang dicari
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> target;

    // Mengubah seluruh kalimat dan huruf target ke huruf kecil untuk menghilangkan sensitivitas huruf besar-kecil
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
    target = tolower(target);

    // Menghilangkan spasi dari kalimat
    sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());

    // Mengurutkan kalimat
    sort(sentence.begin(), sentence.end());

    // Mencari huruf menggunakan binary search
    int result = binarySearch(sentence, target);

    if (result != -1) {
        cout << "Huruf '" << target << "' ditemukan pada indeks " << result << " dalam kalimat yang diurutkan." << endl;
    } else {
        cout << "Huruf '" << target << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}