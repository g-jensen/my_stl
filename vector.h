#define _INITIAL_CAPACITY_ 16

#ifndef _STDLIB_H_
#define _STDLIB_H_
#include <stdlib.h>
#endif

#ifndef _STRING_H_
#define _STRING_H_
#include <string.h>
#endif

#define _MYSTL_VECTOR_

template <typename T>
class vector {
public:
    vector(); // done
    vector(size_t size); // done
    ~vector(); // done
    size_t size(); // done
    void push_back(T item); // done
    void pop_back(); // done
    void remove(size_t index); // done
    void insert(T item, size_t index); // done
    void clear();
    void swap(size_t index1, size_t index2);
    T& operator[](size_t index); // done
    size_t getCapacity(); // done
protected:
    size_t m_capacity;
    size_t m_size;
    void resize(); // probably fine
    T* m_array;
};

template<typename T>
inline vector<T>::vector() {
    m_capacity = _INITIAL_CAPACITY_;
    m_array = (T*)malloc(sizeof(T)*m_capacity);
    memset(m_array,0,m_capacity);
    m_size = 0;
}

template<typename T>
inline vector<T>::vector(size_t size) {
    this->m_capacity = size;
    this->m_array = (T*)malloc(sizeof(T)*m_capacity);
    memset(m_array,T(),m_capacity);
    m_size = m_capacity;
}

template<typename T>
inline vector<T>::~vector() {
    free(m_array);
}

template<typename T>
inline T& vector<T>::operator[](size_t index) {
    return m_array[index];
}

template<typename T>
inline size_t vector<T>::getCapacity() {
    return m_capacity;
}

template<typename T>
inline size_t vector<T>::size() {
    return m_size;
}

template<typename T>
inline void vector<T>::resize() {
    T* temp = (T*)malloc(sizeof(T)*m_capacity);
    memcpy(temp,m_array,sizeof(T)*m_size);
    free(m_array);
    m_capacity *= 2;
    m_array = (T*)malloc(sizeof(T)*m_capacity);
    memcpy(m_array,temp,sizeof(T)*m_size);
    free(temp);
}

template<typename T>
inline void vector<T>::push_back(T item) {
    size_t delta = m_capacity - m_size;
    if (delta <= 2) {
        resize();
    }
    m_array[m_size] = item;
    m_size++;
}

template<typename T>
inline void vector<T>::pop_back() {
    m_array[m_size-1] = 0;
    m_size--;
}

template<typename T>
inline void vector<T>::remove(size_t index) {
    for (int i = index; i < m_size; i++) {
        m_array[i] = m_array[i+1];
    }
    m_size--;
}

template<typename T>
inline void vector<T>::insert(T item, size_t index) {
    size_t delta = m_capacity - m_size;
    if (delta <= 2) {
        resize();
    }

    for (int i = m_size; i > index; i--) {
        m_array[i] = m_array[i-1];
    }
    m_array[index] = item;

    m_size++;
}

template<typename T>
inline void vector<T>::clear() {
    free(m_array);
    m_capacity = _INITIAL_CAPACITY_;
    m_array = (T*)malloc(sizeof(T)*m_capacity);
    memset(m_array,0,m_capacity);
    m_size = 0;
}

template<typename T>
inline void vector<T>::swap(size_t index1, size_t index2) {
    T temp = (*this)[index1];
    (*this)[index1] = (*this)[index2];
    (*this)[index2] = temp;
}
