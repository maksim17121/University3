#include <iostream>
using namespace std;

int countLessThanT(const int *arr, int size, int t) {
    int count = 0;
    const int *end = arr + size;
    for (const int *p = arr; p < end; ++p) {
        if (*p < t) {
            ++count;
        }
    }
    return count;
}

void printArray(const int *arr, int size) {
    const int *end = arr + size;
    for (const int *p = arr; p < end; ++p) {
        cout << *p << " ";
    }
    cout << "\n";
}

bool compareCounts(const int *a, const int *b, int size, int t) {
    int countA = countLessThanT(a, size, t);
    int countB = countLessThanT(b, size, t);
    return (countA >= countB);
}

void compareAndPrint(const int *a, const int *b, int size, int t) {
    if (compareCounts(a, b, size, t)) {
        printArray(a, size);
    } else {
        printArray(b, size);
    }
}

int main() {
    const int SIZE = 5;
    int A[SIZE];
    int B[SIZE];
    int t;

    cout << "Введите элементы массива A: ";
    for (int *p = A; p < A + SIZE; ++p) {
        cin >> *p;
    }

    cout << "Введите элементы массива B: ";
    for (int *p = B; p < B + SIZE; ++p) {
        cin >> *p;
    }

    cout << "Введите значение t: ";
    cin >> t;

    compareAndPrint(A, B, SIZE, t);

    return 0;
}