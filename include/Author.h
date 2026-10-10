#pragma once
#include "Person.h"

class Author : public Person {
    private:

        int id;
    
    public:
        static int count;
        
        Author();
        Author( std::string , int , std::string , std::string );
        Author( const Author& );
        
        bool operator == ( const Author& );

// getter

        int getId();

// // // // // 

        void DisplayInfo();

        friend std::ostream &operator << (std::ostream &, const Author& );
        friend std::istream &operator >> (std::istream &, Author& );

        ~Author();
};