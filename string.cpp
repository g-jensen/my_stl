#include "string.h"

string::string() {
    vector<char>();
}

string::string(const char* str) {
    clear();
    size_t len = strlen(str);
    for (int i = 0; i < len; i++) {
        push_back(str[i]);
    }
}

void string::operator = (string &str) {
    clear();
    size_t len = str.m_size;
    for (int i = 0; i < len; i++) {
        push_back(str.m_array[i]);
    }
}

std::ostream & operator << (std::ostream &out, const string &c) {
    for (int i = 0; i < c.m_capacity; i++) {
        std::cout << c.m_array[i];
    }
    return out;
}