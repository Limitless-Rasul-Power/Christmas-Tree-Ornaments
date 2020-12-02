#include <iostream>
#include "Christmas_Tree.h"

ChristmasTree::ChristmasTree():root(nullptr)
{}

Node* ChristmasTree::Create_new_ornament()
{
	Node* new_node = new Node;
	new_node->left = nullptr;
	new_node->right = nullptr;
	return new_node;
}

void ChristmasTree::Insert(Node* const& node, Ornament* const& ornament)
{
	if (node != nullptr)
	{
		if (ornament->Get_volume() < node->ornament->Get_volume())
		{
			if (node->left != nullptr)
				Insert(node->left, ornament);
			else
			{
				node->left = Create_new_ornament();
				node->left->ornament = ornament;
			}
		}
		else
		{
			if (node->right != nullptr)
				Insert(node->right, ornament);
			else
			{
				node->right = Create_new_ornament();
				node->right->ornament = ornament;
			}
		}
	}
}

void ChristmasTree::Insert(Ornament* const& ornament)
{
	if (root == nullptr)
	{
		root = Create_new_ornament();
		root->ornament = ornament;
	}
	else
		Insert(root, ornament);
}

void ChristmasTree::Inorder(Node* const& node)
{
	if (node != nullptr)
	{
		Inorder(node->left);
		std::cout << node->ornament[0] << "\n\n";
		Inorder(node->right);
	}
}

void ChristmasTree::Inorder()
{
	if (root == nullptr)
		std::cout << "Christmas Tree is Empty!\n";
	else
		Inorder(root);
}

void ChristmasTree::Preorder(Node* const& node)
{
	if (node != nullptr)
	{
		Preorder(node->left);
		Preorder(node->right);
		std::cout << node->ornament[0] << "\n\n";
	}
}


void ChristmasTree::Preorder()
{
	if (root == nullptr)
		std::cout << "Christmas Tree is Empty!\n";
	else
		Preorder(root);
}

void ChristmasTree::Postorder(Node* const& node)
{
	if (node != nullptr)
	{
		Postorder(node->right);
		Postorder(node->left);
		std::cout << node->ornament[0] << "\n\n";
	}
}


void ChristmasTree::Postorder()
{
	if (root == nullptr)
		std::cout << "Christmas Tree is Empty!\n";
	else
		Postorder(root);
}

bool ChristmasTree::Search(Node* const& node, const float& volume)
{
	bool answer{};
	if (node != nullptr)
	{
		if (volume == node->ornament->Get_volume())
			return true;
		else if (volume < node->ornament->Get_volume())
			answer = Search(node->left, volume);
		else
			answer = Search(node->right, volume);
	}
	return answer;
}

bool ChristmasTree::Search(const float& volume)
{
	if (root == nullptr)
	{
		std::cout << "Christmas Tree is Empty!\n";
		return false;
	}
	else
		return Search(root, volume);
}

Node* ChristmasTree::Get_min(Node* const& node)
{
	Node* min = node;
	while (min->left != nullptr)
		min = min->left;

	return min;
}

Node* ChristmasTree::Get_min()
{
	if (root == nullptr)
		return nullptr;
	else
		return Get_min(root);
}

Node* ChristmasTree::Get_max(Node* const& node)
{
	Node* max= node;
	while (max->right != nullptr)
		max= max->right;

	return max;
}

Node* ChristmasTree::Get_max()
{
	if (root == nullptr)
		return nullptr;
	else
		return Get_max(root);
}

void ChristmasTree::Delete_tree(Node*& node)
{
	if (node != nullptr)
	{
		Delete_tree(node->left);
		Delete_tree(node->right);
		std::cout << "Deleted Ornament Volume: " << node->ornament->Get_volume() << '\n';
		delete node;
	}
}

void ChristmasTree::Delete_tree()
{
	if (root == nullptr)
		std::cout << "Christmas Tree is Empty!\n";
	else
		Delete_tree(root);
}

void ChristmasTree::Delete_node(Node*& node, const float& volume)
{
	if (node != nullptr)
	{
		if (volume < node->ornament->Get_volume())
			Delete_node(node->left, volume);
		else if(volume > node->ornament->Get_volume())
			Delete_node(node->right, volume);
		else
		{
			if (node->left == nullptr && node->right == nullptr)
			{
				delete node;
				node = nullptr;
			}
			else if (node->left == nullptr)
			{
				Node* temp = node;
				node = node->right;

				delete temp;
				temp = nullptr;
			}
			else if (node->right == nullptr)
			{
				Node* temp = node;
				node = node->left;

				delete temp;
				temp = nullptr;
			}
			else
			{
				Node* minimum = Get_min(node->right);
				delete node->ornament;
				node->ornament = new Ornament;
				*node->ornament = *minimum->ornament;
				Delete_node(node->right, minimum->ornament->Get_volume());
			}
		}
	}
}

void ChristmasTree::Delete_node(const float& volume)
{
	if (root == nullptr)
		std::cout << "Christmas Tree is Empty!\n";
	else
		Delete_node(root, volume);
}

ChristmasTree::~ChristmasTree()
{
	Delete_tree();
}
