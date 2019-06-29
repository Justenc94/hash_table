/***********************************************************
Name: Justen Crockett
Assignment: 04
Purpose:
***********************************************************/
#include "functions.h"

void make_data(DataNode *temp_data){
    ifstream data_file;
    data_file.open("data.csv");

    string id_string;
    string data_string;

    for (int i = 0; i < DATASIZE; i++) {
        getline(data_file, id_string, ',');
        getline(data_file, data_string, '\n');
        temp_data[i].id = stoi(id_string);
        temp_data[i].data = data_string;
    }
}

