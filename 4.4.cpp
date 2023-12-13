#include<iostream>
using namespace std;
void swap(int& a, int& b) { 
    int temp = a;
    a = b;
    b = temp;
}

void bubblesort(int arr[],int size) 
{
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
}
}
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    for (int i = 0; i < size1; i++) {
        list3[i] = list1[i];
    }
    for (int i = 0; i < size2; i++) {
        list3[i + size1] = list2[i];
    }
    int size3 = size1 + size2;
    bubblesort(list3, size3);
}
int main() { int size1, size2;
cout << "Enter size1:";
cin >> size1;
int* list1 = new int[size1];
cout << "Enter list1:";
for (int i = 0; i < size1; i++) {
    cin >> list1[i];
}
cout << "Enter size2:";
cin >> size2;
int* list2 = new int[size2];
cout << "Enter list2:";
for (int i = 0; i < size2; i++) {
    cin >> list2[i];
}
int* list3 = new int[size1 + size2];
merge(list1, size1, list2, size2, list3);
cout << "The merged list is ";
for (int i = 0; i < size1 + size2; i++) {
        cout << list3[i] << " ";
    }
    cout << endl;
    delete[] list1;
    delete[] list2;
    delete[] list3;
    return 0;
}
	