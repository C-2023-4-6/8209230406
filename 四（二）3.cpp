#include <iostream>
void sortArray(int* array, int size);
int main() {
    int size;
    std::cout << "请输入数组的元素个数: ";
    std::cin >> size;
    int* array = new int[size];
    std::cout << "请输入 " << size << " 个整数: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }
    sortArray(array, size);
    std::cout << "排序后的数组: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    delete[] array;
    return 0;
}
void sortArray(int* array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
