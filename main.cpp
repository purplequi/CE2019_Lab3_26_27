#include "LinkedBST.h"
#include <iostream>

int main() {
  LinkedBST lBST;
  std::cout << lBST.isEmpty() << std::endl;
  lBST.add(1, 25);
  lBST.add(2, 24);
  lBST.add(3, 11);
  lBST.add(4, 44);
  lBST.add(5, 19);
  lBST.add(6, 67);
  lBST.add(7, 122);
  lBST.add(8, 49);
  lBST.inorder();
  int max;
  int min;
  max = lBST.max(max);
  std::cout << "\n";
  std::cout << "The max value in BST is: " << max << std::endl;
  min = lBST.min(min);
  // std::cout << "\n";
  std::cout << "The min value in BST is: " << min << std::endl;
  std::cout << "Searching for key 1 (exists = 1, doesn't exist = 0): " << lBST.exists(1) << std::endl;

}