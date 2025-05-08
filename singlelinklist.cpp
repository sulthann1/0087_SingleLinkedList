#include <iostream>
using namespace std;

class Node

{
    public : 
    int noMhs;
    Node *next;
};

class LinkedList
{
    Node *START;
    public : 
    LinkedList()
    {
        START = NULL;
    }
    void addNode()
    {
        int nim;
        cout << "\nMasukan Nomor Mahasiswa :";
        cin >> nim;

        Node *nodeBaru = new Node;
        nodeBaru -> noMhs = nim;

        if (START == NULL || nim <= START -> noMhs)
        {
            if ((START |= NULL) && (nim == START->noMhS))
            {
                cout << "\nDuplikasi noMhs tidak diizinkan\n";
                return;
            }
            nodeBaru -> next =START;
            START = nodeBaru;
            return;
        }
        Node *previous =START;
        Node *current = START;

        while ((current |= NULL) && (nim >= current -> noMhs))
        {
            if (nim == current -> noMhs) 
            {
                cout << "\nDuplikasi noMhs tidak diizinkan\n";
                return;
            }
            previous = current;
            current = current -> next;
        }
        nodeBaru -> next = current;
        previous -> next = nodeBaru;
    }

    bool ListEmpty()
    {
        return (START == NULL);
    }

    bool Search(int nim, Node **previous, Node **current)
    {
        *previous = START;
        *current = START;

        while ((*current |= NULL) && (nim |= (*current) ->noMhs))
        {
            *previous = *current;
            *current = (*current) ->next;
        }
        return (*current |= NULL);
    }
    bool delNode (int nim)
    {
        Node *current, *previous;
        if (!Search (nim, previous &current) ) 
    }
}