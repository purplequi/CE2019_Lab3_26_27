#pragma once
#include <iostream>
#include <string>
#include "Node.h"

class Stack {
public:
  virtual ~Stack() {}
  virtual void push( Node* data) = 0;
  virtual Node* pop() = 0;
  virtual bool isEmpty() = 0;
  virtual bool isFull() = 0;
  virtual Node* top() = 0;
};

 class ArrayStack : public Stack {
private:
  int topIndex;
  int size;
  Node* *stack;

public:
  ArrayStack() : topIndex(-1), size(5), stack(new Node*[size]) {}

  ArrayStack(int size) : size(size), topIndex(-1), stack(new Node*[size]) {}

  virtual bool isEmpty();

  virtual bool isFull();

  virtual void push( Node* data);
  
  virtual Node* pop();

  virtual Node* top();

  virtual ~ArrayStack() { delete stack; }
};
