	
#include "AbstractBST.h"


#define MAX_SIZE 100

class ArrayBST : public AbstractBST {
	private:
		int element[MAX_SIZE];
	public:
		ArrayBST();
		virtual ~ArrayBST();

		bool isEmpty();
		void add(int key, int value);
		bool exists(int targetKey);
		void inorder();
		void inorder(int i);

		int getLeftChild(int i);
		int getRightChild(int i);

		int min(int &output);
		int max(int &output);

		void remove(int key);
		int returnIndex(int key);
		int minNode(int index);

	
};


