#include <iostream>
#include "queue.h"
using namespace std;

// Inisialisasi queue
void createQueue(Queue &Q)
{
    Q.head = -1;
    Q.tail = -1;
}

// Cek queue kosong
bool isEmpty(Queue Q)
{
    return (Q.head == -1 && Q.tail == -1);
}

// Cek queue penuh
bool isFull(Queue Q)
{
    return (Q.tail == MAX_QUEUE - 1);
}

// Enqueue (tambah data)
void enqueue(Queue &Q, infotype x)
{
    if (isFull(Q))
    {
        cout << "Queue penuh!" << endl;
        return;
    }

    if (isEmpty(Q))
    {
        Q.head = Q.tail = 0;
    }
    else
    {
        Q.tail++;
    }

    Q.data[Q.tail] = x;
}

// Dequeue (hapus data)
infotype dequeue(Queue &Q)
{
    if (isEmpty(Q))
    {
        cout << "Queue kosong!" << endl;
        return -1;
    }

    infotype x = Q.data[Q.head];

    if (Q.head == Q.tail)
    {
        Q.head = Q.tail = -1;
    }
    else
    {
        Q.head++;
    }

    return x;
}

// Tampilkan isi queue
void printInfo(Queue Q)
{
    cout << Q.head << "   " << Q.tail << "   ";

    if (isEmpty(Q))
    {
        cout << "empty queue" << endl;
        return;
    }

    for (int i = Q.head; i <= Q.tail; i++)
    {
        cout << Q.data[i] << " ";
    }
    cout << endl;
}
