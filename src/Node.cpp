/*
 * Nodo.cpp
 *
 *  Created on: 29 jul. 2016
 *      Author: José Aquino
 */

#include "Node.h"

namespace VMeta {

	Node::Node(std::string name) :   _name(name),_firstChild(NULL), _lastChild(NULL), _next(NULL), _depth(0)
	{
	}

	void Node::addChild(Node* child)
	{
		child-> _depth = _depth+1;
		if(!_firstChild){
			_firstChild = child;
			_lastChild = child;
		}else{
			_lastChild -> _next = child;
			_lastChild = child;
		}
	}


	Node::~Node()
	{
	}

} /* namespace VMeta */
