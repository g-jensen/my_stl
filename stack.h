#ifndef _MYSTL_VECTOR_
#include "vector.h"
#endif

#define _MYSTL_STACK_

template <typename T>
class stack {
public:
    void push_front(T item);
    void pop_front();
    T get_front();
private:
    vector<T> vec;
};

template <typename T>
inline void stack<T>::push_front(T item) {
    vec.push_back(item);
}

template <typename T>
inline void stack<T>::pop_front() {
    vec.remove(vec.size()-1);
}

template <typename T>
inline T stack<T>::get_front() {
    return vec[vec.size()-1];
}
