#pragma once

class Data {
public:
  int key;
  int data;

  Data() {}
  Data(int key, int data) : key(key), data(data) {}
};

class Node {
public:
  Data data;
  Node *leftChild;
  Node *rightChild;

  Node() : leftChild(nullptr), rightChild(nullptr) { }
  Node(int key, int value)
      : leftChild(nullptr), rightChild(nullptr) {}
};
