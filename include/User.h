#pragma once
#include <iostream>
#include <string.h>

class User{
    private:
        std::string name;
        std::string password;
        std::string email;
        int age;
        int id;
    
    public:
        static int count;
        
        User();
        User( std::string , int , std::string , std::string );
        User( const User& );
        
        bool operator == ( const User& );

// setter

        void setName( std::string );
        void setPassword( std::string );
        void setEmail( std::string );
        
        // void setAge( int );
        void setId( int );

// getter

        std::string getName() const;
        std::string getPassword() const;
        std::string getEmail() const;

        int getAge();
        int getId();

// // // // // 

        void DisplayInfo();

        friend std::ostream &operator << (std::ostream &, const User& );
        friend std::istream &operator >> (std::istream &, User& );

        ~User();
};