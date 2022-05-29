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

string string::substring(size_t lower_bound, size_t upper_bound) {
    string s;
    for (size_t i = lower_bound; i < upper_bound; i++) {
        s.push_back((*this)[i]);
    }
    return s;
}

string string::substring(size_t lower_bound) {
    string s;
    for (size_t i = lower_bound; i < m_size; i++) {
        s.push_back((*this)[i]);
    }
    return s;
}

std::ostream & operator << (std::ostream &out, const string &c) {
    for (int i = 0; i < c.m_capacity; i++) {
        std::cout << c.m_array[i];
    }
    return out;
}
