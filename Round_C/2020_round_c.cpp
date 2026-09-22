#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>

int t = 0; // iterations

int n = 0; // sessions

int m = 0; // minutes

int w = 0; // number of workouts

int k = 0; // aditional workouts

int k_int = 0; // k interger

int _Diff = 0; // Difficulty

// Input File
std::ifstream file("test_sets/ts1_input.txt");

std::vector<int> n_inputs(t);
std::vector<int> k_inputs(t);

std::vector<int> session_time_final(n + k);
std::vector<int> session_time_logs(n);
std::vector<int> k_integers(k);
std::vector<int> k_pos(k);

// function to take inputs and test sets from test sets

void _sortSet()
{
    // skip first line
    // Take Input from second Line
    // Create List for current Time List
    // Repeat Until End of File

    if (!file.is_open())
    {
        std::cout << "Failed to load Input file" << '\n';
        return;
    }

    // Count lines from test set
    int totalLines = 0;
    std::string line;

    while (std::getline(file, line))
    { // std::getline its like a (for loop) everytime it runs goes to next line, returns true/false

        ++totalLines;
    }

    file.clear();  // clear EOF flag
    file.seekg(0); // rewind to start

    // std::cout << totalLines << '\n';

    file >> t;

    std::cout << t << '\n';

    if (!(file >> n))
    {

        std::cout << "Failed to load n\n";

        return;
    }

    //
    file.clear();             // clear EOF flag
    file.seekg(0);            // rewind to start
    std::getline(file, line); // read line to skip one
    file >> n;                // first value

    file.clear();  // clear EOF flag
    file.seekg(0); // rewind to start

    // std::cout << j_pos << '\n';

    // find n's inputs
    for (int a = 0; a < t; ++a)
    {
        std::getline(file, line); // read line to skip one
        std::streampos j_pos = file.tellg();

        for (int j = 0; j < 2; j++)
        {
            // file.clear();
            file.seekg(j_pos);
            file >> n;

            std::getline(file, line); // read line to skip one
        }
        n_inputs.insert(n_inputs.begin() + n_inputs.size(), n);

        //std::cout << n_inputs[a] << '/';

        
    }

    file.clear();
    file.seekg(0);

    // find k's inputs
    for (int b = 0; b < t; ++b)
    {
        std::getline(file, line); // read line to skip one
        
        std::streampos z_pos = file.tellg();

        for (int z = 0; z < 3; z++)
        {
            // file.clear();
            file.seekg(z_pos);
            file >> k;
            file >> k;

            std::getline(file, line); // read line to skip one
        }
        k_inputs.insert(k_inputs.begin() + k_inputs.size(), k);

        //std::cout << k_inputs[b] << '/';

        std::cout << k << "/";
    }
};

void diff_finder(int i)
{ // int position, last item of array not used.

    auto diff = abs(session_time_final[i] - session_time_final[i + 1]);

    int *cDiff = &diff;

    int maxDiff_ = 0;

    if (*cDiff > maxDiff_)
    {
        maxDiff_ = *cDiff;
        _Diff = maxDiff_;
    }
};

void print()
{

    for (int j = 0; j < session_time_final.size(); j++)
    {

        std::cout << session_time_final[j];
        if (j != session_time_final.size() - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << '\n';
}

void k_func()
{ // array scribarru

    int v_size = session_time_logs.size();

    for (int i = 1; i <= k; i++)
    {

        if (v_size > 2)
        {

            int *pCurrent = &session_time_logs[i + 1];
            int *pPrev = &session_time_logs[i];

            k_int = (std::round(*pCurrent + *pPrev) / 2.0);

            k_integers.push_back(k_int);

            auto k_currentPos = std::find(session_time_logs.begin(), session_time_logs.end(), session_time_logs[i + i]);

            int index = k_currentPos - session_time_logs.begin(); // convert pos find to int

            k_pos.push_back(index + 1);

            session_time_final.insert(session_time_final.begin() + (k_pos[i - 1] - 1), k_integers[i - 1]);

            // make so if k amount is jot reached by final list rerun k_func where it is called
        }
        else if (v_size > 2)
        {
            session_time_final.insert(session_time_final.begin(), session_time_logs[i - 2]);
        }
    }

    // Print List
    print();

    // Find Diff
    for (int i = 0; i < (session_time_final.size() - 1); i++)
    {
        diff_finder(i);
    }

    // check if the

    std::cout << '\n'
              << "Difficulty: " << _Diff << std::endl;
};

void cls()
{
    system("clear");
};

void run()
{

    // Input

    // std::cin >> t;
    //  for(int i = 100; t < i; ++t){}

    std::cin >> n >> k;

    std::cout << std::endl;

    cls();

    // Input

    std::cout << '\n'
              << t << '\n';
    std::cout << n << ' ' << k << '\n';

    // Generate Lists

    for (int tc = 1; tc <= n; tc++)
    {

        // m = (m + n);

        // session_time_logs.push_back(m);

        session_time_final.insert(session_time_final.begin() + (session_time_final.size()), session_time_logs[tc - 1]);
    }

    k_func();
};

int main()
{

    std::cout << "\n";
    _sortSet();
    // run();

    return 0;
};