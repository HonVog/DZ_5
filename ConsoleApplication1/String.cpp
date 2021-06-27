#include "String.h"
#include <cstring>
#include <cctype>

String::String(){
    len = 0; // << this
    str = new char[1];
    str[0] = '\0';
}

String::String(const char* s){
    len = std::strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
}

String::String(const String& st){   
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
}

String::~String(){  delete[] str; }


String& String::operator = (const String& st){

    if (this == &st)
        return *this;
    delete[] str;
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    return *this;
}

String& String::operator=(const char* s)
{
    delete[] str;
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    return *this;
}


int String::operator ()(char ch) const
{
    int counter = 0;
    for (int j = 0; j < len; ++j)
        if (str[j] == ch)
            ++counter;

    return counter;
}

char& String::operator[](int i)
{
    return str[i];
}

const char& String::operator[](int i) const
{
    return str[i];
}

String operator+(const String& st1, const String& st2)
{
    String _temp;                         
    delete[] _temp.str;                
    _temp.len = st1.len + st2.len;       
    _temp.str = new char[_temp.len + 1];  

    strcpy(_temp.str, st1.str);
    strcpy(_temp.str + st1.len, st2.str);

    return _temp;
}

