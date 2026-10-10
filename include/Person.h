#pragma once
#include <iostream>
#include <string.h>

class Person{
    protected:
        std::string name;
        std::string password;
        std::string email;
        int age;
    
    public:
        Person();
        Person( std::string , std::string , std::string , int );

        bool operator == ( const Person& );

        // setter

        void setName( std::string );
        void setPassword( std::string );
        void setEmail( std::string );
        void setAge( int );

// getter

        std::string getName() const;
        std::string getPassword() const;
        std::string getEmail() const;

        int getAge();

// // // // // 

        void DisplayInfo();

        ~Person();
};