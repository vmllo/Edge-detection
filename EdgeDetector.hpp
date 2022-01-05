#ifndef EDGEDECTION_HPP        
#define EDGEDECTION_HPP        
                     
class ED                        
{                              
    public:                    
        int getDivider();   
        int getTemplate(int tempBool, int i);     
        float distanceformula();    
        int getEdge(int tempBool);  
        ED();     
                               
    private:                   
        float divider;
        float rawPicture;
        int Xtemplate[9] = {-1,0,1,-2,0,2,-1,0,1};
        int Ytemplate[9] = {1,1,1,0,0,0,1,0,-1};
                     
};                   
                     
#endif               