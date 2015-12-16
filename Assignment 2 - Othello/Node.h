#pragma once
class Node
{
public:
	int depth;
	Node* parent;

	Node();
	virtual ~Node();

	bool isValid();
};

