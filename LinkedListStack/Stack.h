#pragma once
#include "Node.h"
#include "ChiliString.h"

class Stack
{
public:
	void Push( int val );
	int Pop();
	int Size() const;
	bool Empty() const;
	void showStack();
private:
	Node* node = nullptr;
};