#include "Person.h"
#include "User.h"
#include "Book.h"
#include "Author.h"
#include "Run.h"

#include <vector>
// #include <algorithm>

void runLibrary(){

    User u1;
    Author a4;
    Book b1;
    b1.setAuthor(a4);
    Book b2 = b1;
    std::cout << b2 << std::endl;
    User u2;
    std::cout << u2 << std::endl;

    // int userSizes = 0;
    // Author addAuthor;
    // Book addBook;
    // char runAuthorCheck = ' ';
    // int authorAndBookSize = 0;
    // double Rate = 0;
    // std::cout << "HOW MANY USERS: ";
    // std::cin >> userSizes;
    // std::vector <User> Users(userSizes);
    // std::vector <Book> Books;
    // std::vector <Author> Authors;


    // for(int i = 0; i < userSizes; ++i){
    //     std::cin >> Users.at(i);

    //     std::cout << "ADD BOOK | Y - y \"Yes\" OR N - n\"NO\" ";
    //     std::cin >> runAuthorCheck;
    //     if( runAuthorCheck == 'Y' || runAuthorCheck == 'y'){
            
    //         Books.push_back(addBook);
    //         std::cin >> Books.at(authorAndBookSize);

    //         Authors.push_back(addAuthor);
    //         std::cin >> Authors.at(authorAndBookSize);
            
    //         Books.at(authorAndBookSize).setAuthor(Authors.at(authorAndBookSize));

    //         std::cout << Users.at(i).getName() << " RATE OUR BOOK FROM 1 TO 5 STAR: ";
    //         std::cin >> Rate;
    //         Books.at(authorAndBookSize).rateBook(Rate);

    //         ++authorAndBookSize;
    //     }

    // }

    // std::cout << "////////////////////////////" << std::endl;

    // for(int i = 0; i < authorAndBookSize; ++i ){
    //     std::cout << Books.at(i) << std::endl;
    //     // std::cout << Users.at(i) << std::endl;
    // }

    // std::cout << "////////////////////////////" << std::endl;

    // for( int i = 0; i < userSizes; ++i ){
    //     std::cout << Users.at(i);
    // }
}  
