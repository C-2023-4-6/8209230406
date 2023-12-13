#include <iostream>
using namespace std;
int main() {
    int numbers[10]; 
    int uniqueNumbers[10]; 
    int count = 0; 
    cout << "Please enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
       cin >> numbers[i];
    }
    for (int i = 0; i < 10; i++) {
        bool isUnique = true;
        for (int j = 0; j < count; j++) {
            if (numbers[i] == uniqueNumbers[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            uniqueNumbers[count] = numbers[i];
            count++;
        }
    }


    cout << "Unique numbers: ";
    for (int i = 0; i < count; i++) {
       cout << uniqueNumbers[i] << " ";
    }
   cout << endl;

    return 0;
}
