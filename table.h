/***********************************************************
Name: Justen Crockett
Assignment: 04
Purpose:
***********************************************************/
#ifndef TABLE_H
#define TABLE_H

#include <iostream>

#define TABLESIZE 10

using namespace std;

struct TableEntry{
    int id;
    bool used = false;
};

class Hashtable{
public:
    Hashtable();

    void dumpTable();
    int addEntry(int);

private:
    TableEntry *table;
    int count;

    int hashId(int);
    int resolveCollision(int);
};

#endif //TABLE_H
