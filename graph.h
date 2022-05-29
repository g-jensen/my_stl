#ifndef _MYSTL_VECTOR_
#include "vector.h"
#endif

#include <iostream>

template <typename T>
class graphNode {
public:
    T value;
    vector<graphNode<T>*> relations;
    graphNode(T value);
};


template<typename T>
inline graphNode<T>::graphNode(T value) {
    this->value = value;
}

template<typename T>
void two_way_con(graphNode<T>* n1, graphNode<T>* n2) {
    one_way_con(n1,n2);
    one_way_con(n2,n1);
};

template<typename T>
void one_way_con(graphNode<T>* n1, graphNode<T>* n2) {
    n1->relations.push_back(n2);
};