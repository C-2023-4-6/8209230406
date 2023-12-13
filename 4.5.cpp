#include <iostream>
#include <cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 > len2) return -1;
    for (int i = 0; i <= len2 - len1; ++i) {
        bool match = true;
        for (int j = 0; j < len1; ++j) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) return i;
    }
    return -1;
}

int main() {
    const int MAX_LEN = 1000; 
    char s1[MAX_LEN], s2[MAX_LEN];

    cout << "Enter the first string (s1): ";
    cin.getline(s1, MAX_LEN);

    cout << "Enter the second string (s2): ";
    cin.getline(s2, MAX_LEN); 

    int index = indexOf(s1, s2);

    if (index != -1) {
        cout << "The string '" << s1 << "' is a substring of '" << s2 << "' at index " << index << endl;
    }
    else {
        cout << "The string '" << s1 << "' is NOT a substring of '" << s2 << "'" << endl;
    }

    return 0;
}
