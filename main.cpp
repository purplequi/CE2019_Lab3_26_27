#include "LinkedBST.h"
#include <iostream>

int main() {
  LinkedBST lBST;
  std::cout << lBST.isEmpty() << std::endl;
  std::cout << lBST.exists(9) << std::endl;
  lBST.add(50, 25);
  lBST.add(45, 24);
  lBST.add(55, 11);
  lBST.add(40, 44);
  lBST.add(48, 19);
  lBST.add(35, 67);
  lBST.add(41, 122);
  lBST.add(46, 15);
  lBST.add(49, 77);
  std::cout << "\n";
  lBST.inorder();
  int max;
  int min;
  max = lBST.max(max);
  std::cout << "\n";
  std::cout << "The max value in BST is: " << max << std::endl;
  min = lBST.min(min);
  std::cout << "The min value in BST is: " << min << std::endl;
  std::cout << "Searching for key 1 (exists = 1, doesn't exist = 0): " << lBST.exists(3) << std::endl;
  // lBST.remove(24);
  std::cout << "\n";
  lBST.inorder();
  std::cout << "\n";
  std::cout << lBST.exists(6) << std::endl;
  try{
    lBST.remove(50);
    lBST.remove(45);
    lBST.remove(49);
    lBST.remove(35);
    lBST.inorder();
  // std::cout << "The min value in BST is: " << min << std::endl;
  std::cout << "\n";
    lBST.add(6, 13);
    lBST.inorder();
  }catch(std::string e) {
    std::cout << e << std::endl;
  }
 

}