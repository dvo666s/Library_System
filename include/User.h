#pragma once
#include "Person.h"

class User : public Person {
    private:

        int id;
    
    public:
        static int count;
        
        User();
        User( std::string , int , std::string , std::string );
        User( const User& );
        
        bool operator == ( const User& );


// getter

        int getId();

// // // // // 

        void DisplayInfo();

        friend std::ostream &operator << (std::ostream &, const User& );
        friend std::istream &operator >> (std::istream &, User& );

        ~User();
};