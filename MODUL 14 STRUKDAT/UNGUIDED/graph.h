// AGUNG RAMADHAN
// 103112430060

#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
using namespace std;

typedef char infoGraph;
typedef struct elmNode *adrNode;
typedef struct elmEdge *adrEdge;

struct elmEdge
{
    adrNode Node;
    adrEdge NextEdge;
};

struct elmNode
{
    infoGraph info;
    int visited;
    adrEdge firstEdge;
    adrNode Next;
};

struct Graph
{
    adrNode first;
};

// Prosedur & fungsi
void CreateGraph(Graph &G);
adrNode InsertNode(Graph &G, infoGraph x);
void ConnectNode(Graph &G, adrNode P, adrNode Q);
void PrintInfoGraph(Graph G);

// Traversal
void PrintDFS(Graph &G, adrNode N);
void PrintBFS(Graph G, adrNode N);

#endif
