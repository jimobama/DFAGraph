#ifndef NODE_H
#define NODE_H
#include<vector>

namespace obaro
{
	namespace graphs
	{
		class Edge;
		class Node
		{

		private:
			std::vector<Edge*> edges;
			int n;
		public:
			Node(int n=0);
			int getN(){ return n; }
			bool hasEdge(Edge *edge);
			void addEdge(Edge *edge);			
			std::vector<Edge*> Edges();
			
		};
	}
}

#endif