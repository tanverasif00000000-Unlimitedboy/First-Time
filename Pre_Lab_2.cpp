#include <iostream>
using namespace std;

int main() {
    char s[1000];
    cout << "Enter Input: ";
    cin.getline(s, 1000);

    int max = 0;
    char ch = ' ';
    int len = 0;
    while(s[len]) len++;

    for (int i = 0; i < len; i++) {
        if (s[i] == ' ') continue;
        int count = 0;
        for (int j = 0; j < len; j++) {
            if (s[j] != ' ' && s[i] == s[j]) count++;
        }
        if (count > max) {
            max = count;
            ch = s[i];
        }
    }

    cout << "Most frequent: " << ch << "\nFrequency: " << max;
    return 0;
}
