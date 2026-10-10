#pragma once
#include "Author.h"

// Start

class Book{

    private:
        std::string title;
        std::string isbn;
        int id;
        std::string category;
        double averageRating;
        double sumRates;
        int numRate;
        Author author;
        char authorCheck;

    public:

// static variable ************************************ //

        static int count;

// constructor 1 ************************************ //

        Book();

// constructor 2 ************************************ //

        Book( std::string , std::string , std::string );

// constructor 3 ************************************ //

        Book( const Book& );

// Equality Test ************************************ //

        bool operator == ( const Book& );

// setter ************************************ //

        void setTitle( std::string );
        void setISBN( std::string );
        // void setId( int );
        void setCategory( std::string );
        void setAuthor( const Author& );

// getter ************************************ //

        std::string getTitle() const;
        std::string getISBN() const;
        int getId() const;
        std::string getCategory() const;
        Author getAuthor() const;

        void rateBook(double );

// Input Operator ************************************ //

        friend std::istream &operator>>( std::istream& ,  Book& );

// Output Operator ************************************ //

        friend std::ostream &operator<<( std::ostream& , const Book& );

// Disconstructor ************************************ //

        ~Book();

};

// End