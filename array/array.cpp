#include<iostream>
using namespace std;
void array1();
void array7();
void array14();
void array20();
void array28();
void array30();
void array51();
void array55();
void array62();
int main() {
    array62();
}
void array1() {
    int N;
    int counter = 1;
    cout << "Enter the amount of numbers:";
    cin >> N;
    int* unpair = new int[N];
    for (int i = 0; i < N; i++) {
        unpair[i] = counter;
        counter += 2;
        cout << unpair[i] << endl;
    }
}
void array7() {
    int size = 0, number;
    cout << "Enter the size of the array:";
    cin >> size;
    int length = size;
    int* N = new int[size];
    int* N1 = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter the " << i + 1 << " number of the array:";
        cin >> number;
        N[i] = number;
    }
    for (int i = 0; i < size; i++) {
        N1[i] = N[length - 1];
        cout << N1[i] << endl;
        length--;
    }
}
void array14() {
    int N, number;
    cout << "Enter the size of the array:";
    cin >> N;
    int* A = new int[N];
    for (int i = 0; i < N; i++) {
        cout << "Enter the " << i + 1 << " number of the array:";
        cin >> number;
        A[i] = number;
    }
    cout << "The elements of the array with the even order:" << endl;
    for (int i = 0; i < N; i += 2) {
        cout << A[i] << endl;
    }
    cout << "The elements of the array with the uneven order:" << endl;
    for (int i = 1; i < N; i += 2) {
        cout << A[i] << endl;
    }
}
void array20() {
    int size, k, l, number;
    int sum = 0;
    cout << "Enter the size of the array:";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter the number k and l (1 ≤ k ≤ l ≤ size) :";
    cin >> k >> l;
    for (int i = 0; i < size; i++) {
        cout << "Enter the " << i + 1 << " number of the array:";
        cin >> number;
        arr[i] = number;
    }
    for (k; k <= l; k++) {
        sum += arr[k - 1];
    }
    cout << "The sum of elements from k to l is:" << sum;
}
void array28() {
    int size, min, number;
    cout << "Enter the size of the array:";
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter the " << i + 1 << " number of the array:";
        cin >> number;
        arr[i] = number;
    }
    for (int i = 1; i < size; i += 2) {
        if (i == 1) {
            min = arr[i];
        }
        if (arr[i] <= min) {
            min = arr[i];
        }
    }
    cout << "The smallest number from the even numbers is:" << min << endl;
}
void array30() {
    int size, number, count = 0;
    cout << "Enter the size of the array:";
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter the " << i + 1 << " number of the array:";
        cin >> number;
        arr[i] = number;
    }
    cout << "The elements of the array with this numbers are bigger than the next element of the array:" << endl;
    for (int i = 0; i < size; i++) {
        if ((arr[i] > arr[i + 1]) && (i + 1 < size)) {
            cout << i + 1 << endl;
            count++;
        }
    }
    cout << "The number of such elements:" << count << endl;

}
void array51() {
    int size, number;
    cout << "Enter the size of the array:";
    cin >> size;
    int* arr1 = new int[size];
    int* arr2 = new int[size];
    int* auxiliary = new int[size];
    cout << "The first array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter the " << i + 1 << " number of the array:";
        cin >> number;
        arr1[i] = number;
    }
    cout << "Enter the second array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter the " << i + 1 << " number of the array:";
        cin >> number;
        arr2[i] = number;
    }
    for (int i = 0; i < size; i++) {
        auxiliary[i] = arr1[i];
    }
    for (int i = 0; i < size; i++) {
        arr1[i] = arr2[i];
        cout << arr1[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        arr2[i] = auxiliary[i];
        cout << arr2[i] << endl;
    }
}
void array55() {
    int size, number;
    cout << "Enter the size of the array:";
    cin >> size;
    int* arr1 = new int[size];
    int* arr2 = new int[size / 3];
    cout << "The first array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter the " << i + 1 << " number of the array:";
        cin >> number;
        arr1[i] = number;
    }
    for (int i = 2; i < size; i += 3) {
        arr2[i] = arr1[i];
        cout << arr2[i] << endl;
    }

}
void array62() {
    int size, plus = 0, minus = 0, number;

    cout << "Enter the size of the array:";
    cin >> size;
    int* general = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter the " << i + 1 << " number:";
        cin >> number;
        general[i] = number;
    }
    for (int i = 0; i < size; i++) {
        if (general[i] < 0) minus++;
        if (general[i] > 0) plus++;
    }
    cout << "The amount of possitive numbers:" << plus;
    cout << "The amount of negative numbers:" << minus;
    int* positive = new int[plus];
    int* negative = new int[minus];
    int n = 0;
    int k = 0;
    for (int i = 0; i < size; i++) {
        if (general[i] < 0) {
            negative[n] = general[i];
            cout << negative[n] << endl;
            n++;
        }

    }
    for (int i = 0; i < size; i++) {
        if (general[i] > 0) {
            positive[k] = general[i];
            cout << positive[k] << endl;
            k++;
        }
    }
}

