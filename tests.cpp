#include "vector.h"
#include "graph.h"
#include "string.h"
#include "queue.h"
#include "stack.h"

// no memory leaks :D
void vectorExample() {
    vector<int> greg;
    
    std::cout << "initial capacity: " << greg.getCapacity() << std::endl;
    for (int i = 0; i < 20; i++) {
        greg.push_back(i);
    }
    std::cout << "capacity after push_back: " << greg.getCapacity() << std::endl;

    greg.remove(4);

    for (int i = 0; i < 12; i++) {
        greg.insert(12,4);
    }

    for (int i = 0; i < 5; i++) {
        greg.pop_back();
    }

    for (int i = 0; i < greg.size(); i++) {
        std::cout << greg[i] << std::endl;
    }

    std::cout << "capacity now: " << greg.getCapacity() << std::endl;

    greg.clear();

    std::cout << "capacity after clear: " << greg.getCapacity() << std::endl;
}

void stringExample() {
    string farts = "Hello!";
    farts.swap(0,farts.size()-1);
    std::cout << farts << std::endl;
}

void graphExample() {
    graphNode<int> a(1);
    graphNode<int> b(2);
    graphNode<int> c(3);
    graphNode<int> d(4);
    
    two_way_con(&a,&b);
    one_way_con(&b,&c);
    two_way_con(&c,&d);
}

void queueExample() {
    queue<int> q;
    q.push_back(3);
    q.push_back(2);
    q.push_back(10);
    std::cout << q.get_front() << std::endl;
    q.pop_front();
    std::cout << q.get_front() << std::endl;
    q.pop_front();
    std::cout << q.get_front() << std::endl;
    q.pop_front();
    std::cout << q.get_front() << std::endl;
}

void stackExample() {
    stack<int> s;
    s.push_front(1);
    s.push_front(2);
    s.push_front(3);
    std::cout << s.get_front() << std::endl;
    s.pop_front();
    std::cout << s.get_front() << std::endl;
    s.pop_front();
    std::cout << s.get_front() << std::endl;
    s.pop_front();
    std::cout << s.get_front() << std::endl;
}

int main(int argc, char const *argv[]) {
    
}
