#include <iostream>
using namespace std;


class Node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    //Constructor for the node Class
    Node()
    {
        leftchild = nullptr; // Initialize left child to null
        rightchild = nullptr; // Initialize right child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; //Inisialisasi ROOT ke NULL
    }

    void insert()   //membuat fungsi insert
    {
        int x; 
        cout << "Masukkan Nilai: ";
        cin >> x;

        // Step 1: Allocate memory for the new node
        Node *newNode = new Node();

        // Step 2: Assign value to the data field of new node
        newNode->info = x;

        // Step 3: Make the left and right child of the new node point ot NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        
    }
}

 
