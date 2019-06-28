/***********************************************************
Name: Justen Crockett
Assignment: 04
Purpose:
***********************************************************/
#include "main.h"

int main() {

    //making test case parallel arrays to hold test data
    int ids[DATASIZE];
    string *data[DATASIZE];

    //filling arrays with test node data
    make_data(ids, data, DATASIZE);


    HashTable hashTable;

    hashTable.addEntry(1, "test");

    //hashTable.dumpTable();

    return 0;
}