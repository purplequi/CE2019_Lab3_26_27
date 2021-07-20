#pragma once

#include "AbstactBST.h"
#include "Node.h"

class LinkedBST {

public:
  Node *root;
  int totalNodes;

  // Constructor
  LinkedBST() : root(nullptr), totalNodes(0) {}

  // checks if the BST is empty
  virtual bool isEmpty();

  // adds data to the BST
  virtual void add(int key, int value);

  // deletes a node from the BST
  void remove(int value);

  // retruns the maximum vaue from the BST
  virtual int max(int &output);

  // retruns the minimum vaue from the BST
  virtual int min(int &output);

  // checks if the key exists or not
  virtual bool exists(int targetKey);

  // BST traversal
  virtual void inorder();

  // retruns the node with largest value in the given root
  Node *maxInGivenRoot(Node *root);

  // destructor
  virtual ~LinkedBST() {}
};
