#include <iostream>
using namespace std;

// Define a structure for a student registration request
struct StudentRequest {
    int id;
    int priority;
    StudentRequest* next;

    // Constructor to initialize a request
    StudentRequest(int _id, int _priority) : id(_id), priority(_priority), next(nullptr) {}
};

// Function to insert a student request into the priority queue (linked list)
void insertStudentRequest(StudentRequest*& head, int id, int priority) {
    StudentRequest* newRequest = new StudentRequest(id, priority);

    if (head == nullptr || priority < head->priority) {
        newRequest->next = head;
        head = newRequest;
    } else {
        StudentRequest* current = head;
        while (current->next != nullptr && current->next->priority <= priority) {
            current = current->next;
        }
        newRequest->next = current->next;
        current->next = newRequest;
    }
}

// Function to print the priority queue (linked list)
void printPriorityQueue(StudentRequest* head) {
    cout << "Priority Queue: ";
    while (head != nullptr) {
        cout << head->id << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n; // Number of student registration requests

    StudentRequest* priorityQueue = nullptr;

    for (int i = 0; i < n; i++) {
        int id, priority;
        cin >> id >> priority;
        insertStudentRequest(priorityQueue, id, priority);
    }

    printPriorityQueue(priorityQueue);

    // Clean up the memory (delete linked list nodes)
    while (priorityQueue != nullptr) {
        StudentRequest* temp = priorityQueue;
        priorityQueue = priorityQueue->next;
        delete temp;
    }

    return 0;
}
