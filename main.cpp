#include <iostream>
#include "List.hpp"

using namespace std;

int main() {

    List *list = new List();
    Collector *collector = Collector::getCollector();

    cout << "\n\nAdding elements to list: 0, 1, 2, 3"<<endl;
    list->addHead(0);list->addHead(1);list->addHead(2);list->addHead(3);
    list->printList();
    collector->printCollector();


    Node* nodeToDelete = list->searchNode(2);
    cout << "\n\nDeleting node: [" << nodeToDelete->getData() << " | " << nodeToDelete << "]" << endl;
    list->deleteNode(2);
    list->printList();
    collector->printCollector();

    Node* nodeToDelete2 = list->searchNode(0);
    cout << "\n\nDeleting node: [" << nodeToDelete2->getData() << " | " << nodeToDelete2 << "]" << endl;
    list->deleteNode(0);
    list->printList();
    collector->printCollector();

    cout << "\n\nAdding element to list: 4"<<endl;
    list->addHead(4);
    list->printList();
    collector->printCollector();

    cout << "\n\nAdding element to list: 5"<<endl;
    list->addHead(5);
    list->printList();
    collector->printCollector();


    return 0;
}