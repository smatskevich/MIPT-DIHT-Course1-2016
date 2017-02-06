#include "ListGraph.h"

#include <algorithm>
#include <assert.h>

CListGraph::CListGraph( int _verticesCount ) :
	verticesCount( _verticesCount ),
	in( verticesCount ),
	out( verticesCount )
{
}

void CListGraph::AddEdge( int from, int to )
{
	assert( from >= 0 && from < verticesCount );
	assert( to >= 0 && to < verticesCount );
	assert( from != to );
	// Проверим, что ребро еще не добавлено.
	assert( std::find( in[to].begin(), in[to].end(), from ) == in[to].end() );

	in[to].push_back( from );
	out[from].push_back( to );
}

void CListGraph::GetNextVertices( int vertex, std::vector<int>& vertices ) const
{
	vertices = out[vertex];
}

void CListGraph::GetPrevVertices( int vertex, std::vector<int>& vertices ) const
{
	vertices = in[vertex];
}
