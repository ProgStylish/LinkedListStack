#include "Stack.h"


void Stack::Push(int val)
{
	if (node == nullptr) {
		node = new Node(val);
	}
	else {
		Node* auxNode = new Node(val);
		auxNode->setNextNode(node);
		node = auxNode;
	}
}

int Stack::Pop()
{
	if (Size() != 0) {
		int value = node->myValue();
		node = node->getNextNode();
		return value;
	}
	else {
		return -1;
	}
}

int Stack::Size() const
{
	int size = 0;
	Node* auxNode = node;
	while (auxNode != nullptr) {
		size++;
		auxNode = auxNode->getNextNode();
	}
	return size;
}

bool Stack::Empty() const
{
	return Size() == 0;
}

void Stack::showStack()
{
	Node* auxNode = node;
	while (auxNode != nullptr) {
		char buffer[256];
		chili::int2str(auxNode->myValue(), buffer);
		chili::print(buffer);
		auxNode = auxNode->getNextNode();
	}
}


