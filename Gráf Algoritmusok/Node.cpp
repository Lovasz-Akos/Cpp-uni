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
	auto it = std::find(childNodes.cbegin(), childNodes.cend(), node);
	if (it == childNodes.cend()) {
		childNodes.push_back(node);
	}
}

void Node::DepthFirst() const{
	std::stack<Node*> temp;
	temp.push(this);

	while (temp.size()) {
		const Node* actualNode = temp.pop();
		temp.pop();

		for (int i = 0; i < actualNode->childNodes.size(); i++)
		{
			temp.push(actualNode->childNodes[i]);
		}
	}
}

void Node::DepthFirst() const {
	std::queue<const Node*> temp;

	temp.push(this);

	while (temp.size()) {
		const Node* actualNode = temp.front();
		temp.pop();

		for (int i = 0; i < actualNode->childNodes.size(); i++)
		{
			temp.push(actualNode->childNodes[i]);
		}
	}
}