#pragma once

#include <iostream>
#include <string.h>

using namespace std;

class String_New
{
private:
    const char* string_n;
    int len;

public:
    String_New(int lenP) : len{ lenP } { string_n = new char[len]; };
    String_New(const char* s) {
        len = strlen(s);
        string_n = new char[len + 1];
        string_n = s;
    };

    String_New(const String_New& s) {
        delete[] string_n;
        len = s.len;
        string_n = new char[len + 1];
        string_n = s.string_n;
    }

    ~String_New() { delete[] string_n; }

    const char* GetStr()const { return string_n; }
    const int GetLen()const { return len; }

    String_New& print() {
        for (int i=0; i < len; ++i) {
            std::cout << string_n [i];
        }
    }
};
