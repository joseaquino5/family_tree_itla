/*
 * FamilyTree.h
 *
 *  Created on: 30 jul. 2016
 *      Author: José Aquino
 */

#ifndef FAMILYTREE_H_
#define FAMILYTREE_H_
#include "Tree.h"
#include <cstdlib>

namespace VMeta {

	class FamilyTree
	{
		private:
			Tree* _tree;
			std::string _option;
			string _padre;
		public:
			void validacion();
			void recursividad(Node* node);
			void showFamilyTree();
			void createFamilyTree();
			bool printMenu();
			bool verifyOption();
			FamilyTree();
			virtual ~FamilyTree();
	};

} /* namespace VMeta */

#endif /* FAMILYTREE_H_ */
