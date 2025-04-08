#include <iostream>
#include "Sales_item.h"
/*Write a program that reads several
transactions and counts how many transactions occur for
each ISBN.
*/
int main() {

Sales_item item1, total, wow;

if (std::cin >> item1) {
    int cnt = 1;
    while(std::cin >> total) {
        if(item1.isbn()==total.isbn()) {
            item1+=wow; 
            cnt++;
        }
        else {
            std::cout << "You made " << cnt << " purchases of " << item1.isbn() << std::endl; 
            item1 = total;
            cnt = 1;
        }
        
    }
    std::cout << "You made " << cnt << " purchases of " << item1.isbn() << std::endl;
} 

    return 0;
}
