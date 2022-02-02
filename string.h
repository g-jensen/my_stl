#ifndef _MYSTL_VECTOR_
#define _MYSTL_VECTOR_
#include "vector.h"
#endif

#include <iostream>

// incomplete
class string : public vector<char> {
public:
    string();
    string(const char str[]);
    void operator = (string &str);
    friend std::ostream & operator << (std::ostream &out, const string &c);
};