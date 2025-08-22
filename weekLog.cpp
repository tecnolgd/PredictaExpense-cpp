#include <iostream>
#include <fstream>
#include "head.hpp"

void weekLog(int session_counter){
    if (session_counter==7){
        std::cout<<"The weekly report is ready .....\n";
        std::ifstream file("expense_log.txt");
        if(file.is_open()){
            std::string line;
            while(std::getline(file,line)){      //to print content from the text file to the console.
                std::cout<<line<<std::endl;

            }
            file.close();
        } else{
            std::cout<<"Unable to open the file.\n";
        }
    }
    else{
        std::cout<<"The week is not over yet. "<<7-session_counter<<" log days left !!\n";
    }

}