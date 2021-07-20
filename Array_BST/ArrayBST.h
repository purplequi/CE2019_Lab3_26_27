	
#include "AbstractBST.h"


#define MAX_SIZE 100

class ArrayBST : public AbstractBST {
	private:
		int element[MAX_SIZE];
	public:
		ArrayBST();
		~ArrayBST();
	
	
	void add(int data);
	bool searchBST(int key);
	
	void inorder(int i);
	
	int getLeftChild(int i);
	int getRightChild(int i);

	int min();
	int max();

	void removeBST(int key);
	int returnIndex(int key);
	int minNode(int index);

};
