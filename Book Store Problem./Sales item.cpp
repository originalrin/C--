#include<iostream>
#include "Sales_item.h"
/*Write a program that reads several
transactions for the same ISBN. Write the sum of all the
transactions that were read.*/ 
int main() {

    Sales_item book;
    Sales_item total;
    
    std::cin >> total;
    while(std::cin >> book) {
        if(total == book) {
            total+=book; 
        }
    }
std::cout << total;
//sigma rin 

return 0;

}