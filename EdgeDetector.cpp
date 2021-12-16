#include "EdgeDetector.hpp"           
#include "stdio.h"           
#include <cmath>    
#define  prtf(A)  printf("%d", A)                 
ED::ED(){
                            
}                                     
int ED::getDivider(){                                    
     return divider;                     
}                           
int ED::getTemplate(int tempBool, int i){
     int returnArr = (tempBool) ? Xtemplate[i] : Ytemplate[i];
     return returnArr;      
}                           
int ED::getEdge(int tempBool){
     int G;                 
     for(int i = 0; i < 9;i++)
     {                      
         G = getTemplate(tempBool,i); 
     }                      
     return G;              
}                           
float ED::distanceformula(){
      return sqrt(pow(getEdge(1),2))+(pow(getEdge(0),2));
}                           
