#include "Notebook.hpp"
#include "Direction.hpp"
using ariel::Direction;

#include <iostream>
#include <stdexcept>
using namespace std;


namespace ariel{

Notebook::Notebook(){
    // std::map<std::string, int> m;
    // this->noteb= m;
    this->m=5;
}
void Notebook::write(int page, int row, int column, Direction dir, std::string str){
    // if (row<1 || col<1 || row%2==0 || col%2==0){
    //     throw std::domain_error("Erorr!");
    // }
}
string Notebook::read (int page, int row, int column, Direction dir , int length){
    return "null";
}
void Notebook::erase (int page, int row, int column, Direction dir, int length){

}
void Notebook::show (int page){

}
}