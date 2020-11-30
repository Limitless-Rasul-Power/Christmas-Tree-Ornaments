#pragma once
#include "Glass_Ornaments.h"

struct Node
{
	Ornament* ornament;
	Node* left;
	Node* right;

	Node();
	~Node();
};