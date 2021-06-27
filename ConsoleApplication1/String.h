#pragma once
#include <iostream>

using namespace std;

/// <summary>
/// class string
/// </summary>
class String
{
private:
    char* str; // we need a constant, but a constant breaks the logic
    int len;
    static const int CINLIM = 80;
public:
    String();
    String(const char* s);
    String(const String&);

    ~String();

    int getLen() const { return len; }

    String& operator=(const String&);
    String& operator=(const char*);
    char& operator[](int i);
    const char& operator[](int i) const;


    int operator ()(char ch) const;

    bool operator < (const String& st) { return (len < st.len);};
    bool operator > (const String& st) { return (len > st.len); };

    bool operator == (const String& st) {
        if (len != st.len) return false;
        for (int i = 0; i < len; ++i) for (int j = 0; j < st.len; ++j)
                if (str[i] != st.str[j]) return false;
        return true;
    };

    friend String operator + (const String& st1, const String& st2);

    void print() {
        for (int i = 0; i < len; ++i) { cout << str[i]; }
    }
};

