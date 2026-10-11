#pragma once
#include "Person.h"

class Author : public Person {
    public:
// static variable ************************************ //

        static int count;
        
// constructor 1 ************************************ //

        Author();

// constructor 2 ************************************ //

        Author( std::string , int , std::string , std::string );

// constructor 3 ************************************ //

        Author( const Author& );
        
// Equality Test ************************************ //

        bool operator == ( const Author& );

// Equality Operator ************************************ //

        void operator=(const Author& );

// Input Operator ************************************ //
        
        friend std::istream &operator >> (std::istream &, Author& );

// Output Operator ************************************ //

        friend std::ostream &operator << (std::ostream &, const Author& );

// Display ************************************ //

        void DisplayInfo();

// Disconstructor ************************************ //

        ~Author();
};