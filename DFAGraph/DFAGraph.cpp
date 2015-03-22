// DFAGraph.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "DFAGraph.h"
#include "Node.h"
#include "Edge.h"

using namespace obaro::graphs;

DFAGraph::DFAGraph()
{
	this->initial = NULL;
}

//methods
void DFAGraph::addNode(Node* node)
{
	if (node == NULL)
		return;

	if (!this->hasNode(node))
	{
		this->states.push_back(node);
	}
}
void DFAGraph::addEdge(Node* n1, Node* n2, char c)
{
	if (n1 == NULL)
		return;

	Edge *edge = new Edge();
	edge->setLabel(c);
	edge->setEndPoint(n2);
	//check if its has a edge or not
	if (!n1->hasEdge(edge))
	{
		n1->addEdge(edge);
	}
	this->addNode(n1);
	this->addNode(n2);
	

}//end edge

void DFAGraph::setRootNode(Node* state)
{
	//ignore null state
	if (state == NULL) return;
	//check if its already have the node else add the node
	if (!this->hasNode(state))
	{
		this->addNode(state);
	}
	this->initial = state;
}

//Check if the state exists
bool DFAGraph::hasNode(Node* state)
{
	for each(Node *s in this->states)
	{
		if (s == state)
		{
			return true;
		}
	}

	return false;
}

Node * DFAGraph::delta(Node* state, char ch)
{
	std::vector<Edge*> edges = state->Edges();
	for each(Edge *edge in edges)
	{
		if (edge->getLabel() == ch)
		{
			return edge->getNode();
		}
	}
	return NULL;
}