#include "Node.h"
/*
Node::Node() {

}

Node::~Node() {

}
*/

bool Node::IsStartNode() const{
	//a parent node az pointer, ha nincs definialva, akkor nullptr erteket vesz fel
	return parentNode == nullptr;
}

bool Node::IsLeafNode() const {
	return childNodes.empty();
}

void Node::AddChildNode(Node* node) {
	//can't add nullpointer as child
	if (node == nullptr) {
		return;
	}

	//check for duplicate pointer

}