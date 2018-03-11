#include <iostream>
#include "bstree.hpp"

using namespace BSTree;

Tree::Tree(){
	head = nullptr;
}

bool Tree::insert(int value) {
	if (head == nullptr) {
		head = new Node{value, nullptr, nullptr};
	}

	Node* current = head;
	Node* previous = head;
	while (current != nullptr) {
		if (current -> data > value) {
			current = current -> left;
		}
		else if (current -> data < value){
			current = current -> right;
		}
		else {
			return false;
		}
		if (current != nullptr) {
			previous = current;	
		}
	}

	if (previous -> data > value) {
		previous -> left = new Node{value, nullptr, nullptr};
	}
	else {
		previous -> right = new Node{value, nullptr, nullptr};
	}
	return true;
}

void Tree::remove(Node*& node){
	if (node == nullptr) return;
	if (node -> left != nullptr) remove(node -> left);
	if (node -> right != nullptr) remove(node -> right);
	delete node;
	node = nullptr;
}
Tree::~Tree(){
	remove(head);
}
	
