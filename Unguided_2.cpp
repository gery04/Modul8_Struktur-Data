#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Fungsi untuk memeriksa apakah sebuah karakter adalah huruf vokal
bool isVowel(char ch) {
    ch = tolower(ch); // Mengubah karakter ke huruf kecil untuk pemeriksaan
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    string sentence;
    int vowelCount = 0;

    // Input kalimat
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, sentence);

    // Menghitung jumlah huruf vokal
    for (char ch : sentence) {
        if (isVowel(ch)) {
            vowelCount++;
        }
    }

    // Menampilkan hasil
    cout << "Jumlah huruf vokal dalam kalimat: " << vowelCount << endl;

    return 0;
}
