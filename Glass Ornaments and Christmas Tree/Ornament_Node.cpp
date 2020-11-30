#include "Ornament_Node.h"

Node::Node():ornament(nullptr), left(nullptr), right(nullptr)
{}

Node::~Node()
{
	delete ornament;
}