/***********************************************************
Name: Justen Crockett
Assignment: 04
Purpose:
***********************************************************/
#include "main.h"

int main() {

    //making test case parallel arrays to hold test data
    DataNode *data_array;
    data_array = new DataNode[DATASIZE];

    //filling arrays with test node data
    make_data(data_array);

    HashTable hashTable;

    for (int i = 0; i < DATASIZE; ++i) {
        hashTable.addEntry(data_array[i].id, data_array[i].data);
    }

    hashTable.dumpTable();

    return 0;
}