#include <fstream>
#include <iostream>
#include "head.hpp"

int logCounter(){
    std::ifstream log_file("counter.txt");
    int count=0;
    if(log_file.is_open()){
        log_file>>count;
        log_file.close();
    }
    return count;

}