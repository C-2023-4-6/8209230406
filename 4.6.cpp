#include <iostream>
#include <cctype> 
void count(const char s[], int counts[]);
void count(const char s[], int counts[]) {
    for (int i = 0; i < 26; ++i) {
        counts[i] = 0;
    }
    for (int i = 0; s[i] != '\0'; ++i) {
        char lower_case_char = std::tolower(s[i]); 
        if (lower_case_char >= 'a' && lower_case_char <= 'z') {
            counts[lower_case_char - 'a']++;
        }
    }
}

int main() {
    const int ARRAY_SIZE = 26;
    int letter_counts[ARRAY_SIZE] = { 0 };
    char input_string[256];

    std::cout << "Enter a string: ";
    std::cin.getline(input_string, sizeof(input_string)); 
    count(input_string, letter_counts);
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        if (letter_counts[i] > 0) {
            std::cout << "Letter " << char('a' + i) << " appears " << letter_counts[i] << " times." << std::endl;
        }
    }
    return 0;
}
