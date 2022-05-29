#ifndef _MYSTL_VECTOR_
#include "vector.h"
#endif

#define _MYSTL_STRING_

#include <iostream>

// incomplete
class string : public vector<char> {
public:
    string();
    string(const char str[]);
    string substring(size_t lower_bound, size_t upper_bound);
    string substring(size_t lower_bound);
    void operator = (string &str);
    friend std::ostream & operator << (std::ostream &out, const string &c);
};
