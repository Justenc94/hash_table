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
    }
}

void make_data(int *ids, string **data, int data_size){
    ifstream data_file;
    data_file.open("data.csv");
    string id_string;
    string data_string;
    for (int i = 0; i < DATASIZE; i++) {
        getline(data_file, id_string, ',');
        getline(data_file, data_string, '\n');
        ids[i] = stoi(id_string);
        data[i] = &data_string;
        cout << ids[i] << endl;
        cout << *data[i] << endl;
    }
}

