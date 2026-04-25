/**
 * @file extractFile.cpp
 * @author Crowlet6@ut.utm.edu
 * @brief 
 * @version 0.1
 * @date 2026-04-25
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include "extractFile.h"
#include <ostream>
#include <algorithm>

std::vector<int> ExtractFile::extractSend(std::fstream& writeTo, std::string fileName, std::ostream& os) {
    writeTo.open(fileName, std::ios::in);
    std::vector<int> data;
    std::string line;
    os << "Reading data from file: " << fileName << std::endl;
        if(!writeTo){
            os << "Error opening file: " << fileName << std::endl;
            return data; // Return an empty vector if the file cannot be opened
        }
        while(std::getline(writeTo, line)) {
        if (!line.empty()) {  // Also skip empty lines just in case
            data.push_back(std::stoi(line));
        }
        
    }
    sort(data.begin(), data.end());
    writeTo.close();
    return data;
}