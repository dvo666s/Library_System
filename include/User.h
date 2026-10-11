#pragma once
#include "Person.h"

class User : public Person {
    private:

        int id;
    
    public:
// static variable ************************************ //

        static int count;
        
// constructor 1 ************************************ //

        User();

// constructor 2 ************************************ //

        User( std::string , int , std::string , std::string );
     
// constructor 3 ************************************ //

        User( const User& );
        
// getter ************************************ //

        int getId();

// Equality Test ************************************ //

        bool operator == ( const User& );

// Equality Operator ************************************ //

        void operator=(const User&);

// Input Operator ************************************ //

        friend std::istream &operator >> (std::istream &, User& );

// Output Operator ************************************ //

        friend std::ostream &operator << (std::ostream &, const User& );

void DisplayInfo();

        ~User();
};