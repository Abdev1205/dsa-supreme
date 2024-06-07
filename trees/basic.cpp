#include <bits/stdc++.h>

// 1. What is tree
// -> It is non linear data strcture where elements are stored in the form of connected nodes

// 2. what are term realted to trees
// -> Some of the terms related to trees are 
//    1. node - yeh ek element ko bol rahe hai
//    2. root - yeh tree ka starting element hai
//    3. parent - element ke upar connected node ko parent bol rahe hai
//    4. child - element ke niche ke connected node ko child bol rahe hai
//    5. ancestor - element ke upar element ke upar connected node ko ancestor bol rahe hai jaise dada
//    6. descendent - element ke child ke niche ke connected node ko descendent bol rahe hai jaise pota
//    7. leaf - element ke niche agar koi chils na ho to leave node bol jayega

// 3. How can we create a tree 
class Node{
  // this is sample node structure that we follows
  public:
    int data;
    int* left;
    int* right;
}

// 4. What is Binary tree
// -> It is type of tree where we have atmost 2 child

// 5. What is N-aray tree
// -> It is type of tree where we have n no of childs

// 6. How we can create N aray tree
class Node{
  int data;
  int* left;
  int* right;
  vector<Node> childs;
}

// 7. Explain diffrent types of traversal in tree
// -> some of the trversal techniques are 
//    1. Level Order traversal :-> here we traversing the tree in level wise
//                                 like level 0 , level 1 , level 2 etc...