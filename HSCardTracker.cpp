//
//  HSCardTracker.cpp
//  HSTracker
//
//  Created by Mason Sciotti on 9/14/15.
//  Copyright (c) 2015 Mason Sciotti. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <queue>
#include <string>
#include <fstream>
#include "CardTracker.h"

using namespace std;

int main(void){
    queue<Card> myPlays, opponentPlays;
    ifstream rawData;
    ofstream newData;
    
    createLog(rawData,newData);
    // createHistory(newData, myPlays,opponentPlays);
    // readHistory(myPlays,opponentPlays);
    
    
    return 0;
}
