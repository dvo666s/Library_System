#include "User.h"
#include "Person.h"

// Start

// static variable ************************************ //

    int User::count = 0;
    
// constructor 1 ************************************ //

    User::User(){ 
        id = 0;
        ++count;
        id = count;
    }

// constructor 2 ************************************ //

    User::User( std::string name , int age, std::string password, std::string email ) : Person(name,password,email , age)
    {
        id = 0;
        ++count;
        id = count;
    }

// constructor 3 ************************************ //

    User::User( const User &user ){
        name = user.name;
        age = user.age;
        password = user.password;
        email = user.email;
        id = user.id;
    }

// Equality operator ************************************ //

    void User::operator=(const User& user){
        name = user.name;
        age = user.age;
        password = user.password;
        email = user.email;        
    }


// Equality Test ************************************ //

    bool User::operator == ( const User& user ){ 
        return ( name == user.name && email == user.email && age == user.age && id == user.id && password == user.password);
    }

// getter ************************************ //

    int User::getId() { return id; }

// Display ************************************ //

    void User::DisplayInfo(){
        std::cout << "\n*****************************" << std::endl;
        std::cout << "*         USER "<< id <<" INFO       *" << std::endl;
        std::cout << "*****************************" << std::endl;
        std::cout << "* ID: " << id <<std::endl;
        Person::DisplayInfo();
    }

// Input Operator ************************************ //

    std::istream &operator >> ( std::istream &input, User &user ){
        std::cout << "\n========================================\n";
        std::cout << "ENTER THE USER INFORMATION IN THE OREDER" << std::endl;
        std::cout << "Name " << "Age " << "Email " << "Password ";
        input >> user.name >> user.age >> user.email >> user.password;

        return input;
    }

// Output Operator ************************************ //

    std::ostream &operator << ( std::ostream &output, const User& user ){
        output << "\n*****************************" << std::endl;
        output << "*         USER "<< user.id <<" INFO       *" << std::endl;
        output << "*****************************" << std::endl;
        output << "* Name: " << user.name << std::endl;
        output << "* Age: " << user.age << std::endl;
        output << "* ID: " << user.id <<std::endl;
        output << "* Email: " << user.email << std::endl;
        output << "*****************************" << std::endl;

        return output;
    }

// Deconstructor ************************************ //

    User::~User(){}

// End
