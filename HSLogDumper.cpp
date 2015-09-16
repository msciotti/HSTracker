//
//  main.cpp
//  HSTracker
//
//  Created by Mason Sciotti on 9/14/15.
//  Copyright (c) 2015 Mason Sciotti. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(void){
    string line;
    ifstream rawdata;
    ofstream newdata("new_log.txt");
    rawdata.open("output_log.txt");
    
    while (!rawdata.eof()){
        getline(rawdata,line);
        if (line.find("[Zone]") != string::npos)
            newdata << line;
    }
    
    newdata.close();
    return 0;
}