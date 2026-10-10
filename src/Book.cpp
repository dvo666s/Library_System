#include "Book.h"

// Start

// static variable ************************************ //

    int Book::count = 0;

// constructor 1 ************************************ //

    Book::Book( ) : title(" ") , isbn("") , category(" ") , averageRating(0.0) , numRate(0) , sumRates(0.0) , key(' '){
        id = 0;
        count++;
        id = count;
        User author;
    }

// constructor 2 ************************************ //

    Book::Book( std::string title , std::string isbn , std::string category , char key ){
        this -> title = title;
        this -> isbn = isbn;
        this -> category = category;
        this -> key = key;
        id = 0;
        count++;
        id = count;
        User author;
        numRate = 0;
        sumRates = 0.0;
    }

// constructor 3 ************************************ //

    Book::Book( const Book& book ){
            title = book.title;
            isbn = book.isbn;
            category = book.category;
            averageRating = book.averageRating;
            id = book.id;
            author = book.author;
            numRate = book.numRate;
            sumRates = book.sumRates;
            key = book.key;
        }

// Equality Test ************************************ //

    bool Book::operator == ( const Book& book ){
    return (title == book.title && isbn == book.isbn && category == book.category && averageRating == book.averageRating && author == book.author);
    }

// setter ************************************ //

    void Book::setTitle( std::string title ){ this -> title = title; }
    void Book::setISBN( std::string isbn ) { this -> isbn = isbn; }
    // void Book::setId( int id ) { this -> id = id; }
    void Book::setCategory( std::string category ) { this -> category = category; }
    void Book::setAuthor( const User &user ){ 
        std::cout << "IS BOOK HAS AUTHOR | Y - y \"Yes\" OR N - n\"NO\" ";
        std::cin >> key;
        if( key == 'Y' || key == 'y'){
        author = user;
    }
    } 

// getter ************************************ //

    std::string Book::getTitle() const { return title; }
    std::string Book::getISBN() const { return isbn; }
    int Book::getId() const { return id; }
    std::string Book::getCategory() const { return category; }
    User Book::getAuthor() const {
        return author;
    }   

// Book Rate ************************************ //
    void Book::rateBook( double rating ){
        // try{
        
            if( rating > 0 && rating <= 5){
                ++numRate;
                sumRates += rating;
                averageRating = sumRates / numRate;
            // } else throw std::exception();
            }else {
                std::cerr << "\n*********************************************" << std::endl;
                std::cerr << "* !! YOU PUT ( " << rating << " ) AND THAT IS NOT ACCEPTED *" << std::endl;
                std::cerr << "*********************************************\n" << std::endl;
            } 
            
        // }

        // catch(...){
            // std::cerr << "\n*********************************************" << std::endl;
            // std::cerr << "* !! YOU PUT ( " << rating << " ) AND THAT IS NOT ACCEPTED *" << std::endl;
            // std::cerr << "*********************************************\n" << std::endl;
        // }
    }

// Input Operator ************************************ //

    std::istream &operator >> ( std::istream &input, Book& book){
        std::cout << "\nENTER THE BOOK INFORMATION IN THE OREDER" << std::endl;
        std::cout << "Title " << "Isbn " << "Category(Space separated) " << std::endl;
        input >> book.title >> book.isbn >> book.category;
        return input;
    }

// Output Operator ************************************ //

    std::ostream &operator<<( std::ostream& output, const Book& book){
        output << "\n*****************************" << std::endl;
        output << "*         BOOK INFO         *" << std::endl;
        output << "*****************************" << std::endl;
        output << "* Title: " << book.title << std::endl;
        output << "* isbn: " << book.isbn << std::endl;
        output << "* category: " << book.category << std::endl;
        output << "* Book Rate: " << book.averageRating << std::endl;
        output << "* ID: " << book.id <<std::endl;        
        output << "*****************************" << std::endl;
        // If book have author print auther
        if( book.key == 'Y' || book.key == 'y'){
            output << book.author;
        }else output << "THIS BOOK HAS NO AUTHOR" << std::endl;

    return output;
    }

        Book::~Book(){}

// End