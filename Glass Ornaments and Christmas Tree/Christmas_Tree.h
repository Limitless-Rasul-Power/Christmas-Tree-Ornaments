#pragma once
#include "Ornament_Node.h"

class ChristmasTree
{
private:
	Node* root;
	void Insert(Node* const&, Ornament* const&);
	void Inorder(Node* const&);
	void Preorder(Node* const&);
	void Postorder(Node* const&);
	bool Search(Node* const&, const float&);
	Node* Get_min(Node* const&);
	Node* Get_max(Node* const&);
	void Delete_tree(Node*&);
	void  Delete_node(Node*&, const float&);

public:

	ChristmasTree();
	Node* Create_new_ornament();
	void Insert(Ornament* const&);
	void Inorder();
	void Preorder();
	void Postorder();
	bool Search(const float&);
	Node* Get_min();
	Node* Get_max();
	void Delete_tree();
	void  Delete_node(const float&);

	~ChristmasTree();
};