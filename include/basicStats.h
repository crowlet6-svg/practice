/**
 * @file basicStats.h
 * @author Crowlet6@ut.utm.edu
 * @brief 
 * @version 0.1
 * @date 2026-04-25
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#ifndef BASICSTATS_H
#define BASICSTATS_H

#include <vector>

class BasicStats {
public:
     double average(const std::vector<int>& data);
     int topBottom(const std::vector<int>& data, int& min, int& max);
     double median(std::vector<int> data); 
private:
    std::vector<int> data;
    int sum;
    double avg;
    int High;
    int Low;
};

#endif