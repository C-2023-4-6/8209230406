#include <iostream>
using namespace std;
void bubbleSort(double arr[], int n);
int main() {
    double arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "请输入10个双精度数字：" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    cout << "排序后的数组：" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
void bubbleSort(double arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}
