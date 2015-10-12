# Data Structures - Project 2 - AVL Trees
## Due 10/25/15 at 11:59 pm

With this project you will be creating AVL trees!

I have provided the header file for the AVL class, and you MUST implement all of the functions.
Your AVL class will need to be templated and there are test cases for both AVL<int> and AVL<std::string>.

## Files

I will supply you with these files:

 * README.md - This file contains these instructions
 * makefile - use 'make' on the linux system to compile the project using this makefile.  The binary file will be named 'avl.out'.
 * test_avl.cpp - This file contains all of the test cases and will be what you must compile and run to test your code.
 * AVL.hpp - This contains the header file for an AVL object. You must implement this object in order for the test cases to pass.

You must write the AVL.cpp file that implements the test_string function found in the AVL.hpp file (you may implement in the hpp file).

## Functions

Here is the AVL.hpp file I have included.  You MUST implement these functions without changing the name or arguments.

```
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
```
