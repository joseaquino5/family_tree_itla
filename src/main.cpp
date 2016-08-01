//============================================================================
// Name        : FamilyTree.cpp
// Author      : VMeta
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "FamilyTree.h"

using namespace VMeta;
int main()
{
	FamilyTree* familyTree = new FamilyTree();
	while(true){
		if(!familyTree->printMenu()){
			break;
		}
	}
	delete familyTree;

	return 0;
}
