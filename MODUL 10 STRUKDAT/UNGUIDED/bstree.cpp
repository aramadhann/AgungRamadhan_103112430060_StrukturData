#include "bstree.h"

address alokasi(infotype x)
{
    address P = new Node;
    P->info = x;
    P->left = NULL;
    P->right = NULL;
    return P;
}

void insertNode(address &root, infotype x)
{
    if (root == NULL)
    {
        root = alokasi(x);
    }
    else if (x < root->info)
    {
        insertNode(root->left, x);
    }
    else if (x > root->info)
    {
        insertNode(root->right, x);
    }
}

address findNode(infotype x, address root)
{
    if (root == NULL || root->info == x)
    {
        return root;
    }
    else if (x < root->info)
    {
        return findNode(x, root->left);
    }
    else
    {
        return findNode(x, root->right);
    }
}

void inOrder(address root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->info << " - ";
        inOrder(root->right);
    }
}

void preOrder(address root)
{
    if (root != NULL)
    {
        cout << root->info << " - ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(address root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->info << " - ";
    }
}

int hitungNode(address root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + hitungNode(root->left) + hitungNode(root->right);
}

int hitungTotal(address root)
{
    if (root == NULL)
    {
        return 0;
    }
    return root->info + hitungTotal(root->left) + hitungTotal(root->right);
}

int hitungKedalaman(address root, int start)
{
    if (root == NULL)
    {
        return start;
    }
    int kiri = hitungKedalaman(root->left, start + 1);
    int kanan = hitungKedalaman(root->right, start + 1);
    return (kiri > kanan) ? kiri : kanan;
}
