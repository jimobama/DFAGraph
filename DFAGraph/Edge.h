#ifndef EDGE_H
#define EDGE_H

namespace obaro
{
	namespace graphs
	{
		class Node;
		class  Edge
		{
		private:
			char ch;
			Node *endPoint;
		public:
			Edge();
			void setEndPoint(Node* node);			
			void setLabel(char c);			
			Node * getNode();			
			char  getLabel();
		

		};
	}
}
#endif