#pragma once
class Node {
public:
	Node(int myValue);
	Node* getNextNode();
	void setNextNode(Node* node);
	Node* myInstance();
	int myValue();
private:
	int value;
	Node* nextNode = nullptr;
};