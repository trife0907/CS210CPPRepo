// TASK 03 -- The Stack ADT's implementation
//
// This is where "how" lives. We chose std::vector as the backing
// storage: push_back is our push, back() is our top, pop_back() is our
// pop. A student could rewrite this whole file to use a raw fixed-size
// array instead, and as long as push/pop/top/isEmpty/size still behave
// the same way, nothing calling this class would ever notice.

#include "Stack.h"
#include <iostream>

#include <cstdio>
#include <iostream>
#include <ostream>

Stack::Stack() : topIndex(-1) { // Initialize topIndex to -1 because stack is empty upon construction

}

void Stack::push(int value) {
    // Check if stack is full first
    if (isFull()) {
        std::cout << "Stack is full, cannot push." << std::endl;
        return;
    }

    data[++topIndex] = value; // Increment topIndex first, then assign value
}

int Stack::pop() {
    // Check if stack is empty first
    if (isEmpty()) {
        std::cout << "Stack is empty, cannot pop." << std::endl;
        return -9999;
    }

    return data[topIndex--]; // Return top element, decrement topIndex
}

int Stack::peek() const {
    // TODO: return the top element of data_
    // undefined if empty -- callers should check isEmpty() first. We'll
    // harden this kind of thing later in the course.
    // Check if stack is empty first
    if (isEmpty()) {
        std::cout << "Stack is empty, cannot peek." << std::endl;
        return -9999;
    }

    return data[topIndex]; // If not empty, return the top element
}

bool Stack::isEmpty() const {
    return topIndex == -1; // We know the stack is empty when topIndex == -1
}

bool Stack::isFull() const {
    return topIndex == 99; // Stack is full when topIndex is 99(size is 100)
}

int Stack::size() const {
    return topIndex + 1; // topIndex + 1 because topIndex == 0 means there is 1 element
}
