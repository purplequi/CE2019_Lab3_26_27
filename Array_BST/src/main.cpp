#include <iostream>
#include "../include/ArrayBST.h"


int main(){
	ArrayBST a;
	a.add(5);
	a.add(2);
	a.add(3);
	a.add(8);
	a.add(7);
	a.add(1);

	a.add(16);

	a.searchBST(7);
	
	std::cout<<"Inorder Traversal:"<<std::endl;
	a.inorder(0);
	std::cout<<"Min element: " << a.min()<<std::endl;
	std::cout<<"Max element: " << a.max()<<std::endl;
	
	a.removeBST(8);
	a.removeBST(5);

	std::cout<<"Inorder Traversal:"<<std::endl;
	a.inorder(0);
	return 0;
}
