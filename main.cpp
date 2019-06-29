/***********************************************************
Name: Justen Crockett
Assignment: 04
Purpose:
***********************************************************/
#include "main.h"

int main(int argc, char** argv) {

    //creates table object
    HashTable hashTable;

    //making DataNode array to hold data
    DataNode *data_array;
    data_array = new DataNode[DATASIZE];

    //checks files name passed from terminal
    int file_position = check_file(argc, argv);

    //filling arrays with test node data
    if(file_position != -1){
        make_data(data_array, argv[file_position]);
        for (int i = 0; i < DATASIZE; ++i) {
            hashTable.addEntry(data_array[i].id, data_array[i].data);
        }
    }else{
        cout << "Error: No file name passed into command line" <<  endl;
    }

    //printing whole table
    if(file_position != -1){
        hashTable.dumpTable();
    }else{
        cout << "Error: No file name passed into command line, nothing to display." <<  endl;
    }

    cout << "Entry num: " << hashTable.getNumberOfEntries() << endl;

    cout << "Testing remove entry..." << endl;
    if(file_position != -1) {
        for (int j = 0; j < 4; ++j) {
            hashTable.removeEntry(data_array[j].id);
        }
        hashTable.dumpTable();
        cout << "Entry num: " << hashTable.getNumberOfEntries() << endl;
    }else{
        cout << "Error: No file name passed into command line, nothing to remove." <<  endl;
    };

    cout << "Testing clear table..." << endl;
    hashTable.clearTable();
    hashTable.dumpTable();
    cout << "Entry num: " << hashTable.getNumberOfEntries() << endl;

    return 0;
}