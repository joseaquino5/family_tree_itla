/*
 * Tree.cpp
 *
 *  Created on: 29 jul. 2016
 *      Author: José Aquino
 */

#include "Tree.h"


namespace VMeta
{

	Tree::Tree(Node* root) : _root(root)
	{
	}


	Tree::Tree() : _root(NULL)
	{
	}



	void Tree::goThroughTree()
	{
		goThroughTree(_root);
	}

	void Tree::familyTree() {
		familyTree(_root);
	}

	void Tree::goThroughTree(Node* node)
	{
		for(int i = 0; i < node->getDepth(); i++){
			cout << "\t";
		}
		cout << node->getName() << endl;
		Node* i = node->getFirstChild();

		while(i){
			goThroughTree(i);
			i = i->getNext();
		}

	}

	void Tree::familyTree(Node* node)
	{
		while(node){
			if(node->getFirstChild() != NULL){
				cout << node->getName() << " is the father of: ";
			}else{
				cout << node->getName() << " has no children";
			}

			Node* i = node->getFirstChild();

			while(i != NULL){
				cout << i->getName() << " ";
				i = i->getNext();
			}
			cout << endl;
			familyTree(node->getFirstChild());
			node = node->getNext();
		}


	}
	void Tree::deleteTree(Node* node)
	{
		Node* i = node->getFirstChild();
		delete node;

		while(i){
			deleteTree(i);
			i = i->getNext();
		}

	}

	Tree::~Tree()
	{
		deleteTree(_root);
	}

} /* namespace VMeta */
