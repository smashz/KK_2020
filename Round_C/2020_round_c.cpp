#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

int t = 0; // iterations

int n = 0; // sessions

int m = 0; // minutes

int w = 0; // number of workouts

int k = 0; // aditional workouts

int k_int = 0; // k interger

int diff = 0; // diffrence

int max = 0; // max diffrence

int min = 0; // min diffrence

std::vector<int> session_time_final(n + k);
std::vector<int> session_time_logs(n);
std::vector<int> k_integers(k);
std::vector<int> k_pos(k);

void diff_finder(int tc){ // tc starts at 1


    // find the diffrence in final vector between i and i + 1 , and keep checking until end of array
    // save the  current highest diffrence and comapre against next diffrence
    // will be run after at end of k_func loop
    

   if(tc >= 2){
            
         
              
    for(int i = 1; i <= session_time_final.size(); i++)     

        diff = abs(session_time_final[i - 2] - session_time_final[i - 1]); 


        //for(int j = 0; j <= k - 2; j++){
        std::cout << "Diff: " << diff << std::endl;
        //};
   };



    
};

void k_func(){ // load array of added values

    int v_size = session_time_logs.size(); 

   
    // current array value - second value / 2 + the first
    for(int i = 1; i <= k; i++){
            std::cout << session_time_final.size() << "<<<<<<<<" << '\n';
            if(v_size > 2){

            
        
            int *pCurrent = &session_time_logs[i + 1];
            int *pPrev = &session_time_logs[i];

            

            
            k_int = (std::round(*pCurrent + *pPrev)/2.0);
        
            k_integers.push_back(k_int);

            auto k_currentPos = std::find(session_time_logs.begin(), session_time_logs.end(), session_time_logs[i + i]);
        
            int index = k_currentPos - session_time_logs.begin(); // convert pos find to int

            k_pos.push_back(index + 1);

            session_time_final.insert(session_time_final.begin() + (k_pos[i - 1] - 1), k_integers[i - 1]);
            
            // make for loop to 

            //int current_diff abs(session_time_final[k_pos[i]] - session_time_final[k_pos[i] - 1]);
            
            diff_finder(i);

            }else if(v_size > 2){
                session_time_final.insert(session_time_final.begin(), session_time_logs[i - 2]);
            }

            

        //check if 
         

        //session_time_logs.insert(session_time_logs.begin() + (v_size - k_int), k_int);

        

        //log k positions to be inserted another vector to insert all at once


        

        std::cout << "k_int: " << k_integers[i - 1] << '\n';
        
    }
    
    
};





void print(){

    std::cout << "session_time_logs ";

    for(int i = 0; i < session_time_logs.size(); i++){

        std::cout << session_time_logs[i];
        std::cout << ", ";
    }

    std::cout << '\n';

    std::cout << "session_time_final ";

    for(int j = 0; j < session_time_final.size(); j++){

        std::cout << session_time_final[j];
        std::cout << ", ";
    }
    
    std::cout << '\n';

    std::cout << "k_pos ";

    for(int k = 0; k < k_pos.size(); k++){

        std::cout << k_pos[k];
        std::cout << ", ";
    }
    
    std::cout << '\n';

}

void cls(){
    system("clear");
};



void run(){

    //Input

    std::cin >> t;
    std::cin >> n >> k;
    
    
    std::cout << std::endl;

    cls();
    
    //Input

    std::cout << t << '\n';
    std::cout << n << ' ' << k << '\n';
    
    
    for(int tc = 1; tc <= t; tc++){ 
          
        //while(tc<=t){

            
            //session_time_final.insert(session_time_final.begin() + (session_time_final.size()), session_time_logs[tc - 1]);

            
       // }
        
        m = (m + n);
        

        session_time_logs.push_back(m);
        
        session_time_final.insert(session_time_final.begin() + (session_time_final.size()), session_time_logs[tc - 1]);
        
        //diff_finder(tc);

    }




    // Output

    

    //

    //test 
    std::cout << '\n' << "Max: " << max << std::endl;
    std::cout << "Min: " << min << std::endl;
    
    



    // Output


    //


    //std::cout << "Case #" << tc << ": " << min_diff << std::endl;



    


};


int main(){

    std::cout << "\n";
    
    run();
    k_func();
    print();

    
    
    


    
    // make sure every iteration difficulty increaces (if not add k), always keep at lowest 
    //difficulty while adding 

    



    return 0;
};
