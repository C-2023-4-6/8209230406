#include <iostream>
void sortArray(int* array, int size);
int main() {
    int size;
    std::cout << "�����������Ԫ�ظ���: ";
    std::cin >> size;
    int* array = new int[size];
    std::cout << "������ " << size << " ������: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }
    sortArray(array, size);
    std::cout << "����������: ";
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
