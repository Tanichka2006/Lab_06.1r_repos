#include <iostream>
#include <time.h>
using namespace std;


void Create(int* b, const int size, const int Low, const int High, int i) {
    b[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1) {
        Create(b, size, Low, High, i + 1);
    }
}


int CountElements(const int* b, const int size, int i) {
    if (i == size) return 0;
    return (!(b[i] % 2 != 0 && i % 7 == 0) ? 1 : 0) + CountElements(b, size, i + 1);
}


int SumElements(const int* b, const int size, int i) {
    if (i == size) return 0;
    return (!(b[i] % 2 != 0 && i % 7 == 0) ? b[i] : 0) + SumElements(b, size, i + 1);
}


void ReplaceElements(int* b, const int size, int i) {
    if (i == size) return;
    if (!(b[i] % 2 != 0 && i % 7 == 0)) {
        b[i] = 0;
    }
    ReplaceElements(b, size, i + 1);
}


int main() {
    srand((unsigned)time(NULL));

    const int r = 23;
    int b[r];
    int Low = 3;
    int High = 92;


    Create(b, r, Low, High, 0);


    cout << "Start: ";
    for (int i = 0; i < r; i++) {
        cout << b[i] << " ";
    }
    cout << endl;


    int count = CountElements(b, r, 0);
    int sum = SumElements(b, r, 0);


    ReplaceElements(b, r, 0);


    cout << "Count: " << count << endl;
    cout << "Sum:   " << sum << endl;

    // Виведення модифікованого масиву
    cout << "Mod:   ";
    for (int i = 0; i < r; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
