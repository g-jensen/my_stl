#ifndef _MYSTL_VECTOR_
#include "vector.h"
#endif

#define _MYSTL_QUEUE_

template <typename T>
class queue {
public:
    void push_back(T item);
    void pop_front();
    T get_front();
private:
    vector<T> vec;
};

template <typename T>
inline void queue<T>::push_back(T item) {
    vec.push_back(item);
}

template <typename T>
inline void queue<T>::pop_front() {
    vec.remove(0);
}

template <typename T>
inline T queue<T>::get_front() {
    return vec[0];
}