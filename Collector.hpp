#ifndef COLLECTOR_HPP
#define COLLECTOR_HPP

#include "Node.hpp"

using namespace std;
class Node;
class Collector {

private:
    Node* firstReference;
    static Collector* collector;

    Collector() {
        firstReference = nullptr;
    }

public:
    static Collector* getCollector();

    void* getMemoryReference();

    void addMemoryReference(void* voidPointer);

    Node* getFirstReference() {
        return firstReference;
    }

    void printCollector();
};

Collector* Collector::collector = nullptr;

Collector* Collector::getCollector() {
    if (!collector) {
        collector = new Collector();
    }return collector;
}

#endif COLLECTOR_HPP