#ifndef AVL_HPP
#define AVL_HPP

template <class T>
class AVL {
private:
  // put your private functions here (you will probably have quite a few)
  
public:
  AVL() {}
  ~AVL();

  // Insert a node into the AVL with a given data value
  // The tree must be balanced after every insert
  void insert(const T&);

  // remove a node from the AVL with a specific data value
  // you MUST use the in order predecessor to replace the removed node
  void remove(const T& t) { find_and_remove(t, root, &root); }

  // return a std::vector<std::string> of the serialized AVL tree
  // you WILL need to have template specialization for AVL<int> and AVL<std::string>
  // std::to_string(int) can be used to convert an integer to a string
  std::vector<std::string> serialize();
};

#endif
