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
    HashTable();

    void dumpTable();
    int addEntry(int, string);


private:
    List *table;
    int count;

    int hashId(int);
};

#endif //TABLE_H
