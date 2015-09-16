//
//  CardTracker.h
//  HSTracker
//
//  Created by Mason Sciotti on 9/14/15.
//  Copyright (c) 2015 Mason Sciotti. All rights reserved.
//

#ifndef HSTracker_Header_h
#define HSTracker_Header_h

#include <string>
#include <fstream>
#include <iostream>
#include <queue>
using namespace std;

struct Card {
    string name;
};

void createLog(ifstream &rawData, ofstream &newData){
    string line;
    rawData.open("/Users/masonsciotti/Google Drive/C++ Projects/output_log.txt");
    if (!rawData.is_open())
        cout << "Error\n";
    newData.open("/Users/masonsciotti/Google Drive/C++ Projects/scanned_log.txt");
    
    while (!rawData.eof()){
        getline(rawData,line);
        if (line.find("[Zone]") != string::npos)
            newData << line;
    }
    
    rawData.close();
    newData.close();
}

void createHistory(ofstream newData, queue<Card> &myPlays, queue<Card> &opponentPlays){}

void readHistory(queue<Card> myPlays, queue<Card> opponentPlays){}


#endif
