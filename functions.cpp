/***********************************************************
Name: Justen Crockett
Assignment: 04
Purpose:
***********************************************************/
#include "functions.h"

void make_data(DataNode *temp_data, string file_name, int size){
    ifstream data_file;
    data_file.open(file_name);

    string id_string;
    string data_string;

    for (int i = 0; i < size; i++) {
        getline(data_file, id_string, ',');
        getline(data_file, data_string, '\n');
        temp_data[i].id = stoi(id_string);
        temp_data[i].data = data_string;
    }
}

int get_filesize(string file_name){
    ifstream data_file;
    data_file.open(file_name);

    int size = 0;
    string data_string;

    //sets the size of the data to how many lines there are in the csv file passed to function
    while (getline(data_file, data_string, '\n')){
        ++size;
    }
    data_file.close();
    return size;
}


int check_file(int arg_count, char **file_name){
    fstream temp_file;
    if(arg_count < 1){
        return -1;
    }else{
        for (int i = 0; i < arg_count; i++) {
            temp_file.open(file_name[i]);
            if(temp_file.good()){
                return i;
            }
        }
        return -1;
    }
}
