#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

/**
 * @brief Extracts the numbers from a number file.
 * 
 * @param writeTo 
 * @param fileName 
 * @return std::vector<int> 
 */

std::vector<int> extractSend(std::fstream& writeTo, std::string fileName);

int main(){
    std::fstream file;
    std::vector<int> data;

    std::cout << "Enter the name of the file to read from: ";
    std::string fileName;
    std::cin >> fileName;
    data = extractSend(file, fileName);

    if(data.empty()){
        return 1;
    }
    std::cout << "Data read from file:" << std::endl;

    average(data);

    topBottom(data);

    median(data);




    return 0;
}

std::vector<int> extractSend(std::fstream& writeTo, std::string fileName) {
    writeTo.open(fileName, std::ios::in);
    std::vector<int> data;
    std::string line;
    std::cout << "Reading data from file: " << fileName << std::endl;
        if(!writeTo){
            std::cerr << "Error opening file: " << fileName << std::endl;
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

void average(std::vector<int>& data){
    std::cout << "------Avg------" << std::endl;
    int64_t sum = 0;

    for(int i = 0; i < data.size(); i++){
        sum += data[i];
    }
    int Average = sum / data.size();
    std::cout << "Average: " << Average << std::endl;
}

void topBottom(std::vector<int>& data){
    std::cout << "------High/Low------" << std::endl;


    std::cout << "High : " << data[data.size() - 1] << std::endl;
    std::cout << "Low : " << data[0] << std::endl;
}

void median(std::vector<int>& data){
    std::cout << "------Median------" << std::endl;

    if((data.size()) % 2 == 0){

    int firstNum = data.size() / 2;
    int secondNum = (data.size() / 2) + 1;

    int median = (data[firstNum - 1] + data[secondNum - 1]) / 2;


    std::cout << median << std::endl;
    }else{
        int median = (data.size() + 1) / 2;
        std::cout << data[median - 1] << std::endl;
    }

}