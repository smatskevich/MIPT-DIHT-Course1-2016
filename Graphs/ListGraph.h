// Описание: Реализация IGraph массивом списков смежности.
#pragma once

#include "Graph.h"

using std::vector;

class CListGraph : public IGraph {
public:
	explicit CListGraph( int _verticesCount );

	virtual void AddEdge( int from, int to ) override;

	virtual int VerticesCount() const override { return verticesCount; }

	virtual void GetNextVertices( int vertex, std::vector<int>& vertices ) const override;
	virtual void GetPrevVertices( int vertex, std::vector<int>& vertices ) const override;

private:
	int verticesCount;
	vector<vector<int>> in; // Входящие ребра.
	vector<vector<int>> out; // Исходящие ребра.
};
