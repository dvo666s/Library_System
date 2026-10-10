#include "User.h"
#include "Book.h"
#include "Run.h"

#include <vector>
// #include <algorithm>

void runLibrary(){
    int sizes = 0;
    double Rate = 0;
    std::cout << "HOW MANY BOOKS AND USERS: ";
    std::cin >> sizes;
    std::vector <User> Users(sizes);
    std::vector <Book> Books(sizes);

    for(int i = 0; i < sizes; ++i){
        std::cin >> Users.at(i);
        std::cin >> Books.at(i);
        // IF Book has Author
        Books.at(i).setAuthor(Users.at(i));

        std::cout << "RATE OUR BOOK FROM 1 TO 5 STAR: ";
        std::cin >> Rate;
        Books.at(i).rateBook(Rate);
    }
    
    std::cout << "////////////////////////////" << std::endl;

    for(int i = 0; i < sizes; ++i ){
        std::cout << Books.at(i) << std::endl;
        // std::cout << Users.at(i) << std::endl;
    }

    std::cout << "////////////////////////////" << std::endl;
    
    for( int i = 0; i < sizes; ++i ){
        std::cout << Users.at(i);
    }
}