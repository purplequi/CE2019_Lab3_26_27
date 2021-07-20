#include <iostream>

#include "ArrayBST.h"
using namespace std;

ArrayBST::ArrayBST(){
	for(int i=0;i<MAX_SIZE; i++){
	this->element[i]=0;	
	}
	
}


// inserting data into the tree
void ArrayBST::add(int data){
	int i=0;
	
	while(true){
		if(element[i]== NULL){
			element[i]=data;
			
			break;
		}
		
		else if(data>element[i]){
			if(data==element[i]){
				cout<<"ERROR! Data already present!"<<endl;
				break;
			}
			else{
				i=(2*i)+2;
			}
		}
		else if(data<element[i]){
			if(data==element[i]){
					cout<<"ERROR! Data already present!"<<endl;
				break;
			}
			else{
				i=(2*i)+1;
			}
			
		}
	}
}


//searching data
bool ArrayBST::searchBST(int key){
	int i=0;
	
	while(true){
		if(element[i]==NULL){
			cout<<"Key is Present"<<endl;
			break;
		}
		else if(key==element[i]){
			cout<<"Key is Absent" << endl;
			break;
		}
		
		else if(key>element[i]){
			i=(2*i)+2;
				
		}
		else if(key < element[i]){
			i=(2*i)+1;
			
		}
	}
}

//getting left child
	int ArrayBST:: getLeftChild(int i){
		if((element[i]!=NULL) && ((2*i+1) <= MAX_SIZE)){
			return 2*i+1;
		
		}
		else{
			return -1;
		}
	}

//getting right child
	
	int ArrayBST:: getRightChild(int i){
		if((element[i]!=NULL) && ((2*i+2) <= MAX_SIZE)){
			return (2*i+2);
		
		}
		else {
			return -1;
		}
	
	}
	


void ArrayBST::inorder(int i) {
    if((i >= 0) && (element[i] != NULL)){
    	
      
		inorder(getLeftChild(i));
		cout << element[i]<<endl;
        inorder(getRightChild(i));
        
        
    }
}



int ArrayBST::min(){
	int i=0;
	while(element[getLeftChild(i)]!=NULL){
	
		i = 2*i+1;
		

	}
		return (element[i]);	
}


int ArrayBST::max(){
	int i=0;
	while(element[getRightChild(i)]!=NULL){
		i = 2*i+2;
		

	}
		return (element[i]);	
}

int ArrayBST::returnIndex(int key){
	int i=0;

	while(true){
		if(element[i]==0){
			break;
		}
		if(key==element[i]){
			return i;
			break;
		}

		else if(key>element[i]){
			i=(2*i)+2;

		}
		else if(key < element[i]){
			i=(2*i)+1;

		}
	}
}

int ArrayBST::minNode(int index){
	while(element[ArrayBST::getLeftChild(index)]!=0){
        index= 2* index + 1;
    }

    return element[index];
}

void ArrayBST::removeBST(int key){

		if(ArrayBST::searchBST(key)==true){
		int i = ArrayBST::returnIndex(key);
		int leftChild = element[ArrayBST::getLeftChild(i)];
		int rightChild = element[ArrayBST::getRightChild(i)];
		
		if(leftChild==NULL && rightChild== NULL){
			element[i]=NULL;
			cout<<"Delete Sucessfull!!"<<endl;
		}
		else if(leftChild==NULL && rightChild!=NULL){
			element[i] = NULL;
			element[i]=rightChild;
			element[ArrayBST::returnIndex(rightChild)]= NULL;
			cout<<"Delete Sucessfull!!"<<endl;
		}
		else if(leftChild!=NULL && rightChild==NULL){
			element[i] = NULL;
			element[i]= leftChild;
			element[ArrayBST::returnIndex(leftChild)]= NULL;
			cout<<"Delete Sucessfull!!"<<endl;
		}
		else if(leftChild!=NULL && rightChild!=NULL){
			int index = ArrayBST::returnIndex(rightChild);
			int minNodeIndex = ArrayBST::returnIndex(ArrayBST::minNode(index));
			element[i] = NULL;
			element[i] = ArrayBST::minNode(index);
			element[minNodeIndex] = NULL;
			cout<<"Deleted "<<key<<endl;
					
		}
		else 
			return;
	}
		else if(ArrayBST::searchBST(key)==false)
		cout<<"BST doesnt contain "<< key <<" . "<<endl;
}




 ArrayBST::~ArrayBST(){}
 