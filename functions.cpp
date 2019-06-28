/***********************************************************
Name: Justen Crockett
Assignment: 04
Purpose:
***********************************************************/
#include "functions.h"


void read_csv(){
    ifstream data_file;
    data_file.open("data.csv");
    string temp_id;
    string temp_data;
    while(data_file.good()){
        getline(data_file, temp_id, ',');
        getline(data_file, temp_data, ',');
        cout << temp_id << endl;
        cout << temp_data << endl;
    }

    if(!data_file.is_open()){
        cout << "File not open" << endl;
    } else{
        cout << "File is open" << endl;
        getline(data_file, temp_data, ',');
        cout << temp_data << endl;
    }
}

void make_data(int *ids, string **data, int data_size){
    ifstream data_file;
    data_file.open("data.csv");
    string id_string;
    int temp_id;
    string temp_data;
    for (int i = 0; i < DATASIZE; i++) {
        while(data_file.good()) {
            getline(data_file, id_string, ',');
            cout << id_string << endl;
            getline(data_file, temp_data, ',');
            cout << temp_data << endl;
        }
    }
}

