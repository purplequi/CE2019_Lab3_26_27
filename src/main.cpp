 #include "../include/ArrayBST.h"
// #include "../include/LinkedBST.h"
#include <iostream>

int main() {
  std::cout << "#-Array BST-#" << std::endl;
  ArrayBST a;
  a.add(5, 20);
  a.add(2, 45);
  a.add(3, 78);
  a.add(8, 11);
  a.add(7, 54);
  a.add(1, 88);

  a.add(16, 64);

  a.exists(7);

  std::cout << "Inorder Traversal:" << std::endl;
  a.inorder();
  int arrmin;
  int arrmax;
  std::cout << "Min element: " << a.min(arrmin) << std::endl;
  std::cout << "Max element: " << a.max(arrmax) << std::endl;

  a.remove(8);
  a.remove(5);

  std::cout << "Inorder Traversal:" << std::endl;
  a.inorder();
  std::cout << "#-Array BST-#" << std::endl;
  std::cout << "\n\n";



//   std::cout << "#-Linked BST-#" << std::endl;
//   LinkedBST lBST;
//   std::cout << "\n";
//   std::cout << "Checking if the BST is empty (empty = 1, isn't empty = 0): "
//             << lBST.isEmpty() << std::endl;
//   std::cout << "Searching for key 9 (exists = 1, doesn't exist = 0): "
//             << lBST.exists(9) << std::endl;
//   std::cout << "\n";
//   lBST.add(50, 25);
//   lBST.add(45, 24);
//   lBST.add(55, 11);
//   lBST.add(40, 44);
//   lBST.add(48, 19);
//   lBST.add(35, 67);
//   lBST.add(41, 122);
//   lBST.add(46, 15);
//   lBST.add(49, 77);
//   std::cout << "\n";
//   std::cout << "Inorder Traversal: " << std::endl;
//   lBST.inorder();
//   std::cout << "\n";
//   int max;
//   int min;
//   max = lBST.max(max);
//   std::cout << "\n";
//   std::cout << "The max value in BST is: " << max << std::endl;
//   min = lBST.min(min);
//   std::cout << "The min value in BST is: " << min << std::endl;
//   std::cout << "\n";
//   std::cout << "Searching for key 40 (exists = 1, doesn't exist = 0): "
//             << lBST.exists(40) << std::endl;
//   std::cout << "Checking id the BST is empty (empty = 1, isn't empty = 0): "
//             << lBST.isEmpty() << std::endl;
//   std::cout << "\n";
//   try {
//     lBST.remove(50);
//     lBST.remove(45);
//     lBST.remove(49);
//     lBST.remove(35);
//     std::cout << "\n";
//     std::cout << "Inorder Traversal: " << std::endl;
//     lBST.inorder();
//     std::cout << "\n";
//     std::cout << "\n";
//     lBST.add(6, 13);
//     std::cout << "\n";
//     std::cout << "Inorder Traversal: " << std::endl;
//     lBST.inorder();
//     std::cout << "\n";
//     std::cout << "\n";
//   } catch (std::string e) {
//     std::cout << e << std::endl;
//   }
//   std::cout << "#-Linked BST-#" << std::endl;
 }

