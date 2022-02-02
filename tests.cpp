#include "vector.h"
#include "string.h"

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
    std::cout << farts << std::endl;
}

int main(int argc, char const *argv[]) {
    vectorExample();
}