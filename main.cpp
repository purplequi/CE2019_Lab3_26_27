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
}