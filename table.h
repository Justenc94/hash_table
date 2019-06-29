/***********************************************************
Name: Justen Crockett
Assignment: 04
Purpose:
***********************************************************/
#ifndef TABLE_H
#define TABLE_H

#include "list.h"
#include <iostream>

#define TABLESIZE 19
#define DATASIZE 20
#define BUFFER_SIZE 36

using namespace std;

struct TableEntry{
    int id;
    bool used = false;
};

class HashTable{
public:
    //constructor and destructor
    HashTable();
    ~HashTable();

    //public methods
    bool addEntry(int, string);
    bool removeEntry(int);
    int getNumberOfEntries();

    void dumpTable();

private:
    //private variables
    List *table;
    int count;

    //private methods
    int hashId(int);
};

#endif //TABLE_H
