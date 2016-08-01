/*
 * Nodo.h
 *
 *  Created on: 29 jul. 2016
 *      Author: VMeta
 */

#ifndef NODE_H_
#define NODE_H_
#include <string>

namespace VMeta
{

	class Node
	{
		private:
			std::string _name;
			Node* _firstChild;
			Node* _lastChild;
			Node* _next;
			int _depth;
		public:
			void addChild(Node* child);
			Node(std::string name);
			virtual ~Node();

			Node* getFirstChild() {return _firstChild;}

			std::string& getName() {return _name;}

			Node*& getNext()  {return _next;}

			int getDepth() {return _depth;}
};

} /* namespace VMeta */

#endif /* NODE_H_ */
