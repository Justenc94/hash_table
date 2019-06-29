/***********************************************************
Name: Justen Crockett
Assignment: 04
Purpose:
***********************************************************/
#include "main.h"

int main() {

    //making test case parallel arrays to hold test data
    int ids[DATASIZE];
    string *data;
    data = new string[DATASIZE];

    //filling arrays with test node data
    make_data(ids, &data, DATASIZE);

    HashTable hashTable;

    cout << "Testing Main.cpp" << endl;
    for (int i = 0; i < TABLESIZE; i++) {
        cout << ids[i] << endl;
        cout << data[i] << endl;
    }


    hashTable.addEntry(1, "test");

    //hashTable.dumpTable();

    return 0;
}