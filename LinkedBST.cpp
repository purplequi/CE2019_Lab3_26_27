#include "LinkedBST.h"
#include "Stack.h"
#include <iostream>

// checks if the BST is empty
bool LinkedBST::isEmpty() { return root == nullptr ? true : false; }

// // adds data to the BST
void LinkedBST::add(int key, int value) {
  totalNodes++;
  Node *temp = root;
  Node *newNode = new Node();
  newNode->data.data = value;
  newNode->data.key = key;
  while (true) {
    if (temp == nullptr) {
      root = newNode;
      break;
    } else {
      if (temp->data.data >= value) {
        if (!temp->leftChild) {
          temp->leftChild = newNode;
          break;
        } else
          temp = temp->leftChild;

      } else {
        if (!temp->rightChild) {
          temp->rightChild = newNode;
          break;
        } else
          temp = temp->rightChild;
      }
    }
  }
  std::cout << value << " was added" << std::endl;
}

// retruns the maximum vaue from the BST
int LinkedBST::max(int &output) {
  if (root->rightChild == nullptr) {
    output = root->data.data;
    return output;
  }
  Node *temp = root;
  while (temp->rightChild != nullptr) {
    temp = temp->rightChild;
  }
  output = temp->data.data;
  return output;
}

// returns the minimum vaue from the BST
int LinkedBST::min(int &output) {
   if (root->leftChild == nullptr) {
    output = root->data.data;
    return output;
  }
  Node *temp = root;
  while (temp->leftChild != nullptr) {
    temp = temp->leftChild;
  }
  output = temp->data.data;
  return output;
}

// checks if the key exists or not
bool LinkedBST::exists(int targetKey) { return true; }

// BST traversal
void LinkedBST::inorder() {
  ArrayStack stack(totalNodes);
  Node *temp = this->root;
  while (temp != nullptr || !stack.isEmpty()) {
    while (temp != nullptr) {
      try {
        stack.push(temp);
        temp = temp->leftChild;
      } catch (std::string error) {
        std::cout << error << std::endl;
      }
    }
    try {
      temp = stack.pop();
      std::cout << temp->data.data << " ";
      temp = temp->rightChild;
    } catch (std::string error) {
      std::cout << error << std::endl;
    }
  }
}