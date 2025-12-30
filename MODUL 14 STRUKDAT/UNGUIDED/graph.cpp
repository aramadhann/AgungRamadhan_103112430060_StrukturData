// AGUNG RAMADHAN
// 103112430060

#include "graph.h"
#include <queue>

void CreateGraph(Graph &G)
{
    G.first = NULL;
}

adrNode InsertNode(Graph &G, infoGraph x)
{
    adrNode P = new elmNode;
    P->info = x;
    P->visited = 0;
    P->firstEdge = NULL;
    P->Next = NULL;

    if (G.first == NULL)
    {
        G.first = P;
    }
    else
    {
        adrNode Q = G.first;
        while (Q->Next != NULL)
        {
            Q = Q->Next;
        }
        Q->Next = P;
    }
    return P;
}

void ConnectNode(Graph &G, adrNode P, adrNode Q)
{
    // P -> Q
    adrEdge E1 = new elmEdge;
    E1->Node = Q;
    E1->NextEdge = P->firstEdge;
    P->firstEdge = E1;

    // Q -> P (tidak berarah)
    adrEdge E2 = new elmEdge;
    E2->Node = P;
    E2->NextEdge = Q->firstEdge;
    Q->firstEdge = E2;
}

void PrintInfoGraph(Graph G)
{
    adrNode P = G.first;
    while (P != NULL)
    {
        cout << P->info << " : ";
        adrEdge E = P->firstEdge;
        while (E != NULL)
        {
            cout << E->Node->info << " ";
            E = E->NextEdge;
        }
        cout << endl;
        P = P->Next;
    }
}

// ================= DFS =================
void PrintDFS(Graph &G, adrNode N)
{
    if (N == NULL || N->visited == 1)
        return;

    cout << N->info << " ";
    N->visited = 1;

    adrEdge E = N->firstEdge;
    while (E != NULL)
    {
        PrintDFS(G, E->Node);
        E = E->NextEdge;
    }
}

// ================= BFS =================
void PrintBFS(Graph G, adrNode N)
{
    queue<adrNode> Q;
    N->visited = 1;
    Q.push(N);

    while (!Q.empty())
    {
        adrNode P = Q.front();
        Q.pop();
        cout << P->info << " ";

        adrEdge E = P->firstEdge;
        while (E != NULL)
        {
            if (E->Node->visited == 0)
            {
                E->Node->visited = 1;
                Q.push(E->Node);
            }
            E = E->NextEdge;
        }
    }
}
