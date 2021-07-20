

#ifndef AbstractBST_h
#define AbstractBST_h

class AbstractBST{
	public:
		
		virtual void add(int data)=0;

		
		virtual void inorder(int index)=0;

		virtual int max()=0;
		virtual int min()=0;

		virtual bool searchBST(int data)=0;
		virtual void removeBST(int key)=0;
	
};

#endif
