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
    int resolveCollision(int);
};

#endif //TABLE_H
