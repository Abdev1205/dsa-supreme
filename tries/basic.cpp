#include <bits/stdc++.h>
using namespace std;
// 1. What is tries
// -> It is type of data structure that can store mulitiway tree

// 2. What is use of Tries
// -> It is mostly used for pattern matching question and because of its low seraching complexity

class TreeNode{
  public:
    char data;
    TreeNode* children[26];
    bool isEndOfWord;

    TreeNode(char data){
      this->data = data;
      for(int i=0; i<26; i++){
        children[i] = NULL;
      }
      this->isEndOfWord = false;
    }
};

void insertWord(TreeNode* root, string words){
  // base case
  // cout<<"inserting : "<<words<<endl;
  if(words.size() == 0){
    root->isEndOfWord = true;
    return;
  }

  char ch = words[0];
  int index = ch - 'a';
  TreeNode* child;

  if(root->children[index] != NULL){
    // which means that char is present
    child = root->children[index];
  }
  else{
    // which mean that char is not present so we have to create a new child
    child = new TreeNode(ch);
    root->children[index] = child;
  }

  // recursion samhal lega
  insertWord(child, words.substr(1));
}

bool searchWord(TreeNode* root, string words){
  // base case
  if(words.size()==0){
    return root->isEndOfWord;
  }

  char ch = words[0];
  int index = ch - 'a';
  TreeNode* child;

  // if found
  if(root->children[index]!=NULL){
    child = root->children[index];
  }
  else{
    return false;
  }

  // recursion samhal lega
  return searchWord(child,words.substr(1));
}

void deleteWord(TreeNode* root, string words){
  // approach 1 
  // first we will search the words and if is present then 
  // we will just make isendOfWord as false
  // which means words is deleted
}

int main(){
  TreeNode* root = new TreeNode('-');
  insertWord(root, "abhay");

  string word = "abha";

  if(searchWord(root,word)){
    cout<<word<<" is present"<<endl;
  }
  else{
    cout<<word<<" is not present"<<endl;
  }


}
