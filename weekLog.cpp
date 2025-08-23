//This code computes the weekky log display function with week 
#include <iostream>
#include <fstream>
#include "head.hpp"

void weekLog(int session_counter){
    if (session_counter==7){ // weekly report generates only after completing 7 days or a week
        std::cout<<"The weekly report is ready .....\n";
        std::ifstream file("expense_log.txt");
        if(file.is_open()){
            std::string line;
            while(std::getline(file,line)){      //to print content from the text file to the console.
                std::cout<<line<<std::endl;
            }
            file.close();
        } else{
            std::cout<<"UNABLE to open the file.\n";
        }
    }
    else{
        std::cout<<"The week is NOT over yet. "<<7-session_counter<<" log days left !!\n"; //logic statement in case the user requests week log before a week is completed
    }
}