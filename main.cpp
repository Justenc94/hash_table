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
    cout << "Adding data to table..." << endl;
    if(file_position != -1){
        make_data(data_array, argv[file_position]);
        for (int i = 0; i < DATASIZE; ++i) {
            hashTable.addEntry(data_array[i].id, data_array[i].data);
        }
    }else{
        cout << "Error: No file name passed into command line" <<  endl;
    }
    cout << "Data was added to table." << endl << endl;


    //****************************************  printing whole table    ****************************************

    cout << "Printing whole table to show data was added..." << endl;
    if(file_position != -1){
        hashTable.dumpTable();
    }else{
        cout << "Error: No file name passed into command line, nothing to display." <<  endl;
    }

    cout << "Entry num: " << hashTable.getNumberOfEntries() << endl << endl;


    //****************************************  testing get value on full table  ****************************************

    auto *temp_node = new DataNode;

    cout << "Testing get value method..." << endl << endl;
    for (int i = 0; i < 5; i++) {
        *temp_node = hashTable.getValue(data_array[i].id, *temp_node);
        cout << "Printing ID for get node test: " << endl;
        cout << temp_node->id << endl;
        cout << "Printing Data for get node test: " << endl;
        cout << temp_node->data << endl << endl;
    }
    cout << "*****  Testing get value completed *****" << endl << endl;


    //****************************************   Testing contain method    ****************************************

    //searches table and returns true or false if the table contains an id
    cout << "Testing contains method..." << endl;
    for (int i = 0; i < 5; i++) {
        if(hashTable.contains(data_array[i].id)){
            cout << "Table DOES contain: " << data_array[i].id << endl;
        }else{
            cout << "Table does NOT contain: " << data_array[i].id << endl << endl;
        }
        cout << "*****  Testing contains complete  *****" << endl << endl;
    }

    //testing contains with WRONG ids passed to it
    cout << "Testing contains method with WRONG ids..." << endl;
    for (int i = 0; i < 5; i++) {
        if(hashTable.contains(data_array[i].id)-1){
            cout << "Table DOES contain: " << data_array[i].id << endl;
        }else{
            cout << "Table does NOT contain: " << data_array[i].id-1 << endl << endl;
        }
        cout << "*****  Testing contains complete  *****" << endl << endl;
    }


    //****************************************   Testing isEmpty method    ****************************************

    cout << "Testing isEmpty method..." << endl;
    if(hashTable.isEmpty()){
        cout << "Table is empty" << endl << endl;
    }else{
        cout << "Table is NOT empty" << endl << endl;
    }


    //****************************************   Testing remove entry    ****************************************

    cout << "Testing remove entry..." << endl;
    if(file_position != -1) {
        for (int j = 0; j < 4; ++j) {
            hashTable.removeEntry(data_array[j].id);
        }
        hashTable.dumpTable();
        cout << "Entry num: " << hashTable.getNumberOfEntries() << endl << endl;
    }else{
        cout << "Error: No file name passed into command line, nothing to remove." <<  endl;
    }


    //****************************************   Testing clear table    ****************************************

    cout << "Testing clear table..." << endl << endl;
    hashTable.clearTable();
    cout << "Printing cleared table." << endl << endl;
    hashTable.dumpTable();
    cout << "Entry num: " << hashTable.getNumberOfEntries() << endl << endl;


    //****************************************   Testing isEmpty method    ****************************************

    cout << "Testing isEmpty method..." << endl;
    if(hashTable.isEmpty()){
        cout << "Table is empty" << endl << endl;
    }else{
        cout << "Table is NOT empty" << endl << endl;
    }

    return 0;
}