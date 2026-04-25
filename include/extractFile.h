/**
 * @file extractFile.h
 * @author Crowlet6@ut.utm.edu
 * @brief 
 * @version 0.1
 * @date 2026-04-25
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#ifndef EXTRACTFILE_H
#define EXTRACTFILE_H

#include <fstream>
#include <vector>

class ExtractFile {
public:
    std::vector<int> extractSend(std::fstream& writeTo, std::string fileName, std::ostream& os);
};

#endif