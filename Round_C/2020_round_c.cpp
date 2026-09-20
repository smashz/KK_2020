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

int _Diff = 0; // Difficulty

std::vector<int> session_time_final(n + k);
std::vector<int> session_time_logs(n);
std::vector<int> k_integers(k);
std::vector<int> k_pos(k);

void diff_finder(int i){ // int position, last item of array not used.

        auto diff = abs(session_time_final[i] - session_time_final[i + 1]); 

        int *cDiff = &diff;

        int maxDiff_ = 0;

        if(*cDiff > maxDiff_){
            maxDiff_ = *cDiff;
            _Diff = maxDiff_;
        }

};

void print(){

    for(int j = 0; j < session_time_final.size(); j++){

        std::cout << session_time_final[j];
        std::cout << ", ";
    }

    std::cout << '\n';
    
}

void k_func(){ // array scribarru

    int v_size = session_time_logs.size(); 
    
    for(int i = 1; i <= k; i++){
            
            if(v_size > 2){

        
            int *pCurrent = &session_time_logs[i + 1];
            int *pPrev = &session_time_logs[i];

            
            k_int = (std::round(*pCurrent + *pPrev)/2.0);
        
            k_integers.push_back(k_int);

            auto k_currentPos = std::find(session_time_logs.begin(), session_time_logs.end(), session_time_logs[i + i]);
        
            int index = k_currentPos - session_time_logs.begin(); // convert pos find to int

            k_pos.push_back(index + 1);

            session_time_final.insert(session_time_final.begin() + (k_pos[i - 1] - 1), k_integers[i - 1]);
            

            }else if(v_size > 2){
                session_time_final.insert(session_time_final.begin(), session_time_logs[i - 2]);
            }
        
    }

    // Print List
    print();
    
    // Find Diff
    for(int i = 0; i < (session_time_final.size() - 1); i++){
        diff_finder(i);
    }

    std::cout << '\n' << "Diff: " << _Diff << std::endl;

    
};


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
    
    
    // Generate Lists

    for(int tc = 1; tc <= t; tc++){ 
        
        m = (m + n);
        

        session_time_logs.push_back(m);
        
        session_time_final.insert(session_time_final.begin() + (session_time_final.size()), session_time_logs[tc - 1]);
        

    }

};


int main(){

    std::cout << "\n";
    
    run();
    k_func();
    

    return 0;
};
