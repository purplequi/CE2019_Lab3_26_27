#ifndef AbstractBST_h
#define AbstractBST_h

class AbstractBST {
public:
  // checks if the BST is empty
  virtual bool isEmpty() = 0;

  // adds data to the BST
  virtual void add(int key, int value) = 0;

  // retruns the maximum vaue from the BST
  virtual int max(int &output) = 0;

  // retruns the minimum vaue from the BST
  virtual int min(int &output) = 0;

  // checks if the key exists or not
  virtual bool exists(int targetKey) = 0;

  // BST traversal
  virtual void inorder() = 0;

  // removes data from the BST
  void remove(int key);
};

#endif // AbstractBST_h