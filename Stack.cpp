#include "Stack.h"
#include <iostream>

bool ArrayStack::isEmpty() { return topIndex < 0; }

bool ArrayStack::isFull() { return topIndex == size - 1; }

void ArrayStack::push(Node* data) {
  if (!isFull()) {
    ++topIndex;
    stack[topIndex] = data;
  } else
    throw std::string("Stack Overflow");
}

Node* ArrayStack::pop() {
  if (!isEmpty()) {
    // --topIndex;
    Node* data = stack[topIndex--];
    return data;
  } else
    throw std::string("Stack Underflow");
}

Node* ArrayStack::top() {
  if (!isEmpty())
    return this->stack[topIndex];
  else
    throw std::string("Your stack is empty");
}