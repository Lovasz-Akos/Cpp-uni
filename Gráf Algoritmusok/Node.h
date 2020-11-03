﻿#pragma once
#ifndef NODE_H
#define NODE_H

#include<vector>

class Node
{
public:
	//ez a constructor
	//Node();


	//ez a deconstructor, példány megszűnése előtt fut le
	//virtual ~Node();

	//gyökér
	bool IsStartNode() const;

	//levél
	bool IsLeafNode() const;

	//segéd, gyerek hozzáadás
	void AddChildNode(Node* node);

protected:

private:
	std::vector<Node*> childNodes;
	Node* parentNode;
};
#endif // !NODE_H