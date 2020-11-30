#include <iostream>
#include "Christmas_Tree.h"

using namespace std;

unsigned short Ornament::id = 0;

int main()
{
	Ornament* t1 = new Ornament("Green", 50);
	Ornament* t2 = new Ornament("Red", 25);
	Ornament* t3 = new Ornament("Yellow", 70);
	Ornament* t4 = new Ornament("Orange", 10);
	Ornament* t5 = new Ornament("Black", 90);
	Ornament* t6 = new Ornament("White", 30);
	Ornament* t7 = new Ornament("Purple", 60);
	
	Ornament* t8 = new Ornament("Pink", 110);
	Ornament* t9 = new Ornament("Blue", 85);
	Ornament* t10 = new Ornament("Brown", 67);

	ChristmasTree tree;

	tree.Insert(t1);
	tree.Insert(t2);
	tree.Insert(t3);
	tree.Insert(t4);
	tree.Insert(t5);
	tree.Insert(t6);
	tree.Insert(t7);
	tree.Insert(t8);
	tree.Insert(t9);
	tree.Insert(t10);

	//cout << "\n\n\nInOrder\n";
	//tree.Inorder();
	//cout << "\n\n\nPreOrder\n";
	//tree.Preorder();
	//cout << "\n\n\nPostOrder\n";
	//tree.Postorder();
	//cout << "\n\n\n";
	//
	//tree.Delete_node(25);
	//tree.Delete_node(50);
	//tree.Delete_node(60);
	//tree.Delete_node(90);
	//
	//cout << "\n\n\nInOrder\n";
	//tree.Inorder();
	//cout << "\n\n\nPreOrder\n";
	//tree.Preorder();
	//cout << "\n\n\nPostOrder\n";
	//tree.Postorder();
	//cout << "\n\n\n";

	//tree.Inorder();
	//cout << "\n\n\n";
	//tree.Preorder();
	//cout << "\n\n\n";
	//tree.Postorder();

	//bool is_in_tree = tree.Search(67);
	//if (is_in_tree)
	//	cout << "This volume is in Christmas Tree!\n";
	//else
	//	cout << "This volume is NOT in Christmas Tree!\n";

	//Node* minimum = tree.Get_min();
	//if (minimum == nullptr)
	//	std::cout << "Christmas Tree is Empty!\n";
	//else
	//	cout << minimum->ornament[0] << '\n';


	//Node* maximum = tree.Get_max();
	//if(maximum == nullptr)
	//	std::cout << "Christmas Tree is Empty!\n";
	//else
	//	cout << maximum->ornament[0] << '\n';



	system("pause");
	return 0;
}