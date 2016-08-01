/*
 * FamilyTree.cpp
 *
 *  Created on: 30 jul. 2016
 *      Author: José Aquino
 */

#include "FamilyTree.h"

namespace VMeta {

	FamilyTree::FamilyTree() : _tree(NULL)
	{

	}

	bool FamilyTree::printMenu()
	{
		  cout <<"\n\n\t\t\tWelcome to Family Tree\n"<< endl;
		  cout <<"You have to choose an option (Type the number of the option do you want to execute): \n"<< endl;
		  cout <<"1. Create Family Tree"<< endl;
		  cout <<"2. Show Family Tree"<< endl;
		  cout <<"3. Exit"<< endl;
		  cout <<"\nType your option: ";
		  cin >> _option;
		  cout << endl;
		  return verifyOption();
	}

	bool FamilyTree::verifyOption()
	{
	       while(!(_option == "1" || _option == "2" || _option == "3")){
	        	cout <<"Try again please you type an invalid option: ";
	             cin >> _option;
	         }

	        if(_option == "1"){
	        	createFamilyTree();
	        	return true;
	        }
	        else if(_option == "2"){
	        	showFamilyTree();
	        	return true;
	        }
	        else{
	        	cout << "See, back soon" << endl;
	        	return false;
	        }
	        _option="";
	}

	void FamilyTree::createFamilyTree()
	{
		if(_tree != NULL){
			delete _tree;
		}
		cout <<"Enter the name of the person: ";
		cin >> _padre;
		_tree = new Tree(new Node(_padre));
		recursividad(_tree->getRoot());
		cout << endl <<"________________FIN________________"<<endl<<endl;
		cout <<"Family Tree Created. Press ENTER to return to the main menu...";
	    cin.ignore();
	    cin.get();

	}

	void FamilyTree::showFamilyTree()
	{
		if(_tree != NULL){
			cout <<"________________Family________________"<< endl<< endl;
			_tree->familyTree();
		}else{
			cout <<"You don't have created the family tree yet, you'll be return to the main menu."<< endl;
		}
		cout <<"Press enter to continue..";
	    cin.ignore();
	    cin.get();

	}

	void FamilyTree::recursividad(Node* node)
	{
		cout <<"Type the children amount from " << _padre << ": ";
		cin >> _option;
		if(_option != "0"){
			while(atoi(_option.c_str()) == 0){
				cout <<"You must specify a children amount valid, try again please: ";
				cin >> _option;
				if(_option == "0"){
					break;
				}
			}
		}
		int childrenAmount = atoi(_option.c_str());
		std::string familiy[childrenAmount];
		for(int i = 0; i < childrenAmount; i++){
			cout <<"Enter the name of son #" << i+1 << " from " << _padre << ": ";
			cin >> familiy[i];
		}
		for(int i = 0; i < childrenAmount; i++){
			_padre = familiy[i];
			Node* child = new Node(_padre);
			node->addChild(child);
			recursividad(child);
		}
	}


	FamilyTree::~FamilyTree()
	{
		delete _tree;
	}

} /* namespace VMeta */
