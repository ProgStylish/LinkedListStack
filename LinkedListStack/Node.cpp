#include "Node.h"

Node::Node(int in_myValue) :
	value(in_myValue)
{
}

Node* Node::getNextNode() {
	return nextNode;
}

void Node::setNextNode(Node* node)
{
	nextNode = node;
}

Node* Node::myInstance()
{
	return this;
}

int Node::myValue()
{
	return value;
}
