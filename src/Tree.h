/*
 * Tree.h
 *
 *  Created on: 29 jul. 2016
 *      Author: José Aquino
 */

#ifndef TREE_H_
#define TREE_H_
#include "Node.h"
#include <iostream>
using namespace std;

namespace VMeta {

	class Tree
	{
		private:
			Node* _root;
		public:
			void familyTree();
			void familyTree(Node* node);
			void goThroughTree();
			void goThroughTree(Node* node);
			void deleteTree(Node* node);
			Tree(Node* root);
			Tree();
			virtual ~Tree();

			Node* getRoot() {return _root;}

			void setRoot(Node* root) {_root = root;}
};

} /* namespace VMeta */

#endif /* TREE_H_ */
