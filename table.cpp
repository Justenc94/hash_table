/***********************************************************
Name: Justen Crockett
Assignment: 04
Purpose:
***********************************************************/
#include "table.h"

//constructor and destructor
HashTable::HashTable(){
    count = 0;
    table = new List[TABLESIZE];
}

HashTable::~HashTable() {}

//PUBLIC METHODS

bool HashTable::addEntry(int id, string data){
    int position = hashId(id);
    List *list_node;
    list_node = &table[position];
    list_node->addNode(id, data);
    count++;
}

bool HashTable::removeEntry(int id){
    int position = hashId(id);
    table[position].deleteNode(id);
    count--;
}

int HashTable::getNumberOfEntries(){
    return count;
}

DataNode HashTable::getValue(int id, DataNode temp_node){
    int position = hashId(id);
    table[position].getNode(id, &temp_node);
    return temp_node;
}

bool HashTable::contains(int id){
    int position = hashId(id);
    DataNode temp_node;
    if(table[position].getNode(id, &temp_node)){
        return true;
    }else{
        return false;
    }

}

void HashTable::dumpTable(){
    List *temp_list;
    for (int i = 0; i < TABLESIZE; ++i) {
        temp_list = &table[i];
        cout << "=========================================" << endl;
        cout << "\tTable position " << (i+1) << " contents" << endl;
        cout << "=========================================" << endl;
        temp_list = &table[i];
        temp_list->printList(true);
        cout << "=========================================" << endl << endl;
    }
}

void HashTable::clearTable(){
    for (int i = 0; i < DATASIZE-1; ++i) {
        table[i].clear();
    }
    count = 0;
}

//PRIVATE METHODS

int HashTable::hashId(int temp_id){
    int position = temp_id % TABLESIZE;
    return position;
}
