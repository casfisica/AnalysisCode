#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>

/*
 * A class to read data from a csv file.
 */
class CSVReader
{
    std::string fileName;
    std::string delimeter;
 
public:
    CSVReader(std::string filename, std::string delm = ",") :
        fileName(filename), delimeter(delm)
    { }
 
    static std::vector<std::string> SplitString(std::string _sring,std::string _delimiter);
    // Function to fetch data from a CSV File
    std::vector<std::vector<std::string> > getData();
    
};

std::vector<std::string> CSVReader::SplitString(std::string _sring,std::string _delimiter){
    std::vector<std::string> Vec;
    size_t last = 0; 
    size_t nexti = 0; 
    while ((nexti = _sring.find(_delimiter, last)) != string::npos) { 
        //cout << _sring.substr(last, nexti-last) << endl; 
        Vec.push_back(_sring.substr(last, nexti-last));
        last = nexti + _delimiter.length();
    } 
    //cout << s.substr(last) << endl;
    Vec.push_back(_sring.substr(last));
    //cout << s << endl;
    return Vec;
}

std::vector<std::vector<std::string> > CSVReader::getData(){
    std::ifstream file(fileName);
    std::vector<std::vector<std::string> > dataList;
    std::string line = "";
    // Iterate through each line and split the content using delimeter
    while (getline(file, line)){
        std::vector<std::string> vec;
        vec = SplitString(line,delimeter);
        dataList.push_back(vec);
    }
    // Close the File
    file.close();

return dataList;
}


int CVSReader(void){
return 0; 
}