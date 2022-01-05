#include "EdgeDetector.hpp"                                       
#include "stdio.h"                                                
#include <vector>                                                 
#include <fstream>                                                
#include <iostream>                                               
#include <string>                                                 
                                                                  
   std::vector<int> readText(std::string inputName){              
   std::fstream newfile;                                          
   newfile.open(inputName, std::ios::in);                         
   std::vector<int> vn;                                           
   if(newfile.is_open()){                                         
       std::string tp;                                            
       while(getline(newfile,tp)){                                                                         
            vn.push_back(stoi(tp));                               
       }                                                          
       newfile.close();                                           
   }                                                              
   return vn;                                                     
}                                                                 
void stuff(std::vector<int> vn)                                   
{                                                                 
   for(auto i = vn.begin();i != vn.end();i++){                    
        if(*i == 1 || *i == 8 || *i == 9){                        
                                                                  
        } else {                                                  
            vn.erase(i);                                          
            i--;                                                  
        }                                                         
    }                                                             
    int size = vn.size();                                         
    printf("%d\n",size);                                          
    for(int i = 0; i < vn.size();i++) {                           
       printf("%d ",vn[i]);                                       
    }                                                             
}                                                                 
int main(){                                                       
    stuff(readText("Stuff.txt"));                        
                                                         
    return 0;                                            
}                                                        
                                                         
                                         