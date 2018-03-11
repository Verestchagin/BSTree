#include <iostream>
#include "BSTree.h"
using namespace BSTree;

Tree::Tree(){head = nullptr;}
bool Tree::input(int value){
	if (head == nullptr) head = new Node{value, nullptr, nullptr};
	Node *current = head;
	Node *previous = head;
	while (current != nullptr){
		if (current -> data > value)
			current = current -> left;
		else current = current -> right;
		if (current != nullptr) previous = current;	
	}
	if (previous -> data > value) parent -> left = new Node{value, nullptr, nullptr};
	else parent -> right = new Node{value, nullptr, nullptr};
}

Tree::~Tree() { ; }
