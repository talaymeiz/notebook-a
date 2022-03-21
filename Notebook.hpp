#include <string>
#include <iostream>
#include<bits/stdc++.h> 
#include "Direction.hpp"

#ifndef MY_HHEDER
#define MY_HHEDER

using namespace std;

namespace ariel{

    class Notebook{
        private:
            // std::map<int, std::string> noteb;//std::map<int, int[100]> pag
            int m;
        public:
            Notebook();
            void write(int page, int row, int column, Direction dir, std::string str);
            string read (int page, int row, int column, Direction dir , int length);
            void erase (int page, int row, int column, Direction dir, int length);
            void show (int page);
    };
}

#endif