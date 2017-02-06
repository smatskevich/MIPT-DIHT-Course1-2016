#include "ListGraph.h"

int main()
{
	CListGraph g( 5 );
	g.AddEdge( 1, 2 );
	g.AddEdge( 1, 0 );
	g.AddEdge( 0, 2 );
	g.AddEdge( 2, 3 );
	g.AddEdge( 3, 2 );
	g.AddEdge( 3, 4 );

	vector<int> in2;
	g.GetPrevVertices( 2, in2 );
	return 0;
}