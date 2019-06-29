/***********************************************************
Name: Justen Crockett
Assignment: 04
Purpose:
***********************************************************/
#include "table.h"

HashTable::HashTable(){
    count = 0;
    table = new List[TABLESIZE];
}

//PUBLIC METHODS

void HashTable::dumpTable(){
    List *temp_list;
    for (int i = 0; i < TABLESIZE; ++i) {
        temp_list = &table[i];
        cout << "=========================================" << endl;
        cout << "Table position " << (i+1) << " contents: " << endl;
        temp_list = &table[i];
        temp_list->printList(true);
        cout << "=========================================" << endl << endl;
    }
}


int HashTable::addEntry(int id, string data){
    int position = hashId(id);
    List *list_node;
    list_node = &table[position];
    list_node->addNode(id, data);
    count++;
}

//PRIVATE METHODS

int HashTable::hashId(int temp_id){
    int position = temp_id % TABLESIZE;
    return position;
}


/*int HashTable::resolveCollision(int temp_pos){
    while(table[temp_pos].used){
        temp_pos++;
        if(temp_pos >= TABLESIZE-1){
            temp_pos = 0;
        }
    }
    return temp_pos;
}*/
