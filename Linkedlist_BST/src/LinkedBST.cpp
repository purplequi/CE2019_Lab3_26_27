#include "../include/LinkedBST.h"
#include "../include/Stack.h"
#include <iostream>

// checks if the BST is empty
bool LinkedBST::isEmpty() { return root == nullptr ? true : false; }

// adds data to the BST
void LinkedBST::add(int key, int value) {
  bool alreadyExists = exists(key);
  if (alreadyExists) {
    throw std::string("Data with key " + std::to_string(key) +
                      " already exists");
  } else {
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
        if (temp->data.key > key) {
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
    std::cout << "Data with key " << key << " was added" << std::endl;
  }
}

// retruns the maximum vaue from the BST
int LinkedBST::max(int &output) {
  if (!isEmpty()) {
    if (root->rightChild == nullptr) {
      output = root->data.key;
      return output;
    }
    Node *temp = root;
    while (temp->rightChild != nullptr) {
      temp = temp->rightChild;
    }
    output = temp->data.key;
    return output;
  } else {
    throw std::string("The tree is empty");
  }
}

// returns the minimum vaue from the BST
int LinkedBST::min(int &output) {
  if (!isEmpty()) {
    if (root->leftChild == nullptr) {
      output = root->data.key;
      return output;
    }
    Node *temp = root;
    while (temp->leftChild != nullptr) {
      temp = temp->leftChild;
    }
    output = temp->data.key;
    return output;
  } else {
    throw std::string("The tree is empty");
  }
}

// checks if the key exists or not
bool LinkedBST::exists(int targetKey) {
  if (!isEmpty()) {
    if (root->data.key == targetKey)
      return true;

    Node *temp = root;
    while (temp != nullptr && temp->data.key != targetKey) {
      if (temp->data.key > targetKey)
        temp = temp->leftChild;
      else
        temp = temp->rightChild;
    }
    if (temp == nullptr)
      return false;
    else
      return true;
  }
  return false;
}

// BST traversal
void LinkedBST::inorder() {
  if (!isEmpty()) {
    ArrayStack stack(totalNodes);
    Node *temp = root;
    while (temp != nullptr || !stack.isEmpty()) {
      while (temp != nullptr) {
        stack.push(temp);
        temp = temp->leftChild;
      }
      temp = stack.pop();
      std::cout << temp->data.key << " ";
      temp = temp->rightChild;
    }
  } else
    throw std::string("Cannot traverse, the BST is empty");
}

// deletes a node from the BST
void LinkedBST::remove(int value) {

  if (!isEmpty()) {
    Node *temp = root;
    Node *parent = nullptr;
    while (temp != nullptr && temp->data.key != value) {
      parent = temp;
      if (value < temp->data.key)
        temp = temp->leftChild;
      else
        temp = temp->rightChild;
    }
    if (temp == nullptr)
      throw std::string(std::to_string(value) + " not doesnot exist in BST");

    if (temp->leftChild != nullptr && temp->rightChild != nullptr) {
      Node *maxNode = maxInGivenRoot(temp->leftChild);
      temp->data.data = maxNode->data.data;
      temp->data.key = maxNode->data.key;
      if (temp->leftChild == maxNode)
        parent = temp;

      else {
        parent = temp->leftChild;
        while (parent->rightChild != maxNode) {
          parent = parent->rightChild;
        }
      }
      temp = maxNode;
    }

    // while (true) {
    if (temp->leftChild == nullptr && temp->rightChild == nullptr) {
      if (parent == nullptr) {
        root = root->leftChild;
      } else if (parent->leftChild == temp)
        parent->leftChild = nullptr;
      else
        parent->rightChild = nullptr;

      delete temp;
      // break;
    } else if (temp->leftChild != nullptr && temp->rightChild == nullptr) {
      if (parent == nullptr) {
        root = root->leftChild;
      } else if (parent->leftChild == temp)
        parent->leftChild = temp->leftChild;
      else
        parent->rightChild = temp->leftChild;

      delete temp;
      // break;
    } else {
      // else if (temp->leftChild == nullptr && temp->rightChild != nullptr) {
      if (parent == nullptr) {
        root = root->rightChild;
      } else if (parent->leftChild == temp)
        parent->leftChild = temp->rightChild;
      else
        parent->rightChild = temp->rightChild;
      delete temp;
      // break;
    }
    // }
  } else {
    throw std::string("Cannot remove, the BST is empty");
  }
  totalNodes--;
  std::cout << "The key " << value << " was removed from the BST" << std::endl;
}

Node *LinkedBST::maxInGivenRoot(Node *root) {
  if (root->rightChild == nullptr) {
    return root;
  }
  return maxInGivenRoot(root->rightChild);
}