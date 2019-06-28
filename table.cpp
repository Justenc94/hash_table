/***********************************************************
Name: Justen Crockett
Assignment: 04
Purpose:
***********************************************************/
#include "table.h"

Hashtable::Hashtable(){
    count = 0;
    table = new TableEntry[TABLESIZE];
}

//PUBLIC METHODS

void Hashtable::dumpTable(){
    string show_used;
    int table_id;
    for (int i = 0; i < TABLESIZE; i++) {
        if(table[i].used){
            show_used = "Used";
            table_id = table[i].id;
        }else{
            show_used = "Not used";
            table_id = 0;
        }
        cout << "Postion: " << i << ": " << table_id << ": " << show_used << endl;
    }
}


int Hashtable::addEntry(int id){
    int position = hashId(id);
    int new_position;
    if(count < TABLESIZE){
        if(!table[position].used){
            table[position].id = id;
            table[position].used = true;
            count++;
            return position;
        }else{
            new_position = resolveCollision(position);
            table[new_position].id = id;
            table[new_position].used = true;
            count++;
            return new_position;
        }
    }else{
        return -1;
    }
}

//PRIVATE METHODS

int Hashtable::hashId(int temp_id){
    int position = temp_id % TABLESIZE;
    return position;
}

int Hashtable::resolveCollision(int temp_pos){
    while(table[temp_pos].used){
        temp_pos++;
        if(temp_pos >= TABLESIZE-1){
            temp_pos = 0;
        }
    }
    return temp_pos;
}
