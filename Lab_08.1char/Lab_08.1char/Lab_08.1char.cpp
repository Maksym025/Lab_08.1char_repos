#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int Count(char* s) {
    int k = 0, pos = 0;
    char* t;
    while ((t = strstr(s + pos, "while"))) { 
        k++;
        pos = t - s + 1;
    }
    return k;
}

char* Change(char* s) {
    char* t = new char[strlen(s) * 2 + 1];
    char* p;
    int pos1 = 0, pos2 = 0;
    *t = '\0';

    while ((p = strstr(s + pos1, "while"))) {
        pos2 = p - s;
        strncat(t, s + pos1, pos2 - pos1);
        strcat(t, "***");
        pos1 = pos2 + 5;
    }
    strcat(t, s + pos1); 
    strcpy(s, t); 
    delete[] t;
    return s;
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    cout << "String contained " << Count(str) << " groups of 'while'" << endl;
    char* dest = new char[60];
    dest = Change(str);
    cout << "Modified string: " << dest << endl;
    return 0;
}
