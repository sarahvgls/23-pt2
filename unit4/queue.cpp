#include "queue.h"

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

// test a queue of integers
void test_int_queue(void) {
    Queue<int> q;

    q.enqueue(12);
    q.enqueue(10);
    q.enqueue(2);

    cout << setw(20) << "Front of queue: " << q.front() << endl;
    q.dequeue();
    cout << setw(20) << "Front of queue: " << q.front() << endl;
    cout << setw(20) << "Dequeued value: " << q.dequeue() << endl;
    cout << setw(20) << "Dequeued value: " << q.dequeue() << endl;
    cout << setw(20) << "is_empty (queue): " << q.is_empty() << endl;

    return;
}

// test a queue of strings
void test_string_queue(void) {
    Queue<string> q;

    q.enqueue("This");
    q.enqueue("is");
    q.enqueue("an");
    q.enqueue("example");

    cout << setw(20) << "Front of queue: " << q.front() << endl;
    q.dequeue();
    cout << setw(20) << "Front of queue: " << q.front() << endl;
    cout << setw(20) << "Dequeued value: " << q.dequeue() << endl;
    cout << setw(20) << "Dequeued value: " << q.dequeue() << endl;
    cout << setw(20) << "Dequeued value: " << q.dequeue() << endl;

    return;
}

int main(void) {
    test_int_queue();
    test_string_queue();

    return (0);
}