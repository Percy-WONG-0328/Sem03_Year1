#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                // Swap
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Function to calculate the median
double findMedian(int array[], int size) {
    bubbleSort(array, size);
    if (size % 2 == 0) {
        // Even number of elements
        return (array[size / 2 - 1] + array[size / 2]) / 2.0;
    }
    else {
        // Odd number of elements
        return array[size / 2];
    }
}

int main() {
    const int MAX_SIZE = 100;
    int array[MAX_SIZE];
    int count = 0;

    cout << "Enter integers (type s to stop): ";
    int input;
    while (cin >> input && input != 's' && count < MAX_SIZE) {
        array[count++] = input;
    }

    if (count == 0) {
        cout << "No numbers entered.\n";
    }
    else {
        double median = findMedian(array, count);
        cout << "Median: " << median << endl;
    }

    return 0;
}
