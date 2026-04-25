/**
 * @file basicStats.cpp
 * @author Crowlet6@ut.utm.edu
 * @brief 
 * @version 0.1
 * @date 2026-04-25
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include "basicStats.h"
#include <algorithm>
#include <vector>
#include <numeric>

BasicStats::BasicStats() : sum(0), avg(0.0), High(0), Low(0) {}

double BasicStats::average(const std::vector<int>& data) {
    if (data.empty()) {
        return 0.0; // Return 0 for empty data to avoid division by zero
    }
    sum = std::accumulate(data.begin(), data.end(), 0);
    avg = static_cast<double>(sum) / data.size();
    return avg;
}

int BasicStats::topBottom(const std::vector<int>& data, int& min, int& max) {
    if (data.empty()) {
        min = max = 0; // Set min and max to 0 for empty data
        return -1; // Indicate an error
    }
    min = *std::min_element(data.begin(), data.end());
    max = *std::max_element(data.begin(), data.end());
    return 0; // Indicate success
}