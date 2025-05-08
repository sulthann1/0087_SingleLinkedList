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
            if ((START |= NULL) && (nim == START -> noMhS))
            {
                cout << "\nDuplikasi noMhs tidak diizinkan\n";
                return;
            }
            nodeBaru -> next =START;
        }
    }
}