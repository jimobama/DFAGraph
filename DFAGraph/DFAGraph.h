#ifndef DFA_GRAPH_H
#define DFA_GRAPH_H

// DFAGraph.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include<set>
#include<iostream>



namespace obaro
{
	namespace graphs
	{
		class Node;
		class Edge;

		class DFAGraph
		{
		private:
			std::vector < Node* > states;
			std::set<char> alphabets;
			Node *initial;
			//methods
			void addNode(Node*);
			
		public:
			DFAGraph();			
			void addEdge(Node* ,Node* , char c);			
			//Set the root state
			void setRootNode(Node* state);	
			//Check if the state exists
			bool hasNode(Node* state);
			


			//The Transition Method that takes a state and and a character and return the next state that have the character
			Node * delta(Node* state, char ch);
			


		};

	}
}//end DFAGraph



#endif