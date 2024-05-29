#include <iostream>

using namespace std;

int countOccurrences(int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int size = sizeof(data) / sizeof(data[0]);
    int target = 4;

    int count = countOccurrences(data, size, target);

    cout << "Jumlah angka " << target << " dalam array adalah: " << count << endl;

    return 0;
}
