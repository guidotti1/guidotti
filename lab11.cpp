//File name : lab11.cpp
//Author : Thomas Guidotti, Kyle Rose
//Email : guidotti1@kenyon.edu, rosek@kenyon.edu
//Lab number : Lab 11
//Description : This program defines a few functions for the binary search tree and tests them
//Last Changed : December 1, 2018
//Both partners collaborated and contributed equal amounts of work to this program
#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>
#include "binarySearchTree.h"

int main()
{
srand(time(NULL));

int treeSize;
cout << "Enter your desired number of nodes for your binary search tree" << endl;
cin >> treeSize;
int next;
bSearchTreeType<int> myTree;
for (int i =0; i < treeSize; i++)
    {
    next = rand();
    myTree.insert(next);
    }
cout << "The number of nodes in the tree is " << myTree.treeNodeCount() << endl;
cout << "The number of leaves in the tree is " << myTree.treeLeavesCount() << endl;
cout<<endl;
cout<< "Before swapping the right and left subtrees, the tree output of the inorder traversal is:"<<endl;
myTree.inorderTraversal();
cout<<endl;
cout<< "After swapping the right and left subtrees, the tree output of the inorder traversal is:"<<endl;
myTree.swapSubtreesRun();
myTree.inorderTraversal();
cout<<endl;

cout<< "The number of single parents in the binary tree is: "<< myTree.singleParentCountRun()<<endl<<endl;

return 0;
}
