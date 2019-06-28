/***********************************************************
Name: Justen Crockett
Assignment: 04
Purpose:
***********************************************************/
#include "main.h"

int main() {
    cout << "Hello, World!" << endl;

    HashTable hashTable;

    hashTable.addEntry(1, "test");
    hashTable.addEntry(2, "test");
    hashTable.addEntry(3, "test");
    hashTable.addEntry(4, "test");
    hashTable.addEntry(5, "test");
    hashTable.addEntry(55, "test");
    hashTable.addEntry(17, "test");
    hashTable.addEntry(518, "test");



    hashTable.dumpTable();

    return 0;
}