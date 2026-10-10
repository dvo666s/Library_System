#include "User.h"

// Start

// static variable ************************************ //

    int User::count = 0;
    
// constructor 1 ************************************ //

    User::User() : name(" ") , age(0) , password(" ") , email(" "){ 
        id = 0;
        ++count;
        id = count;
    }

// constructor 2 ************************************ //

    User::User( std::string name , int age, std::string password, std::string email ) : name(name) , age(age) , password(password) , email(email) 
    {
        this -> name = name;
        this -> age = age;
        this -> password = password;
        this -> email = email;
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

// ************************************ //

    bool User::operator == ( const User& user ){ 
        return ( name == user.name && email == user.email && age == user.age && id == user.id && password == user.password);
    }

// setter ************************************ //

    void User::setName ( std::string name ) { this -> name = name; }
    void User::setPassword ( std::string password ) { this -> password = password; }
    void User::setEmail ( std::string email ) { this -> email = email; }
    // void User::setAge ( int age ) { this -> age = age; }
    void User::setId ( int id ) { this -> id = id; }

// getter ************************************ //

    std::string User::getName() const { return name; }
    std::string User::getPassword() const { return password; }
    std::string User::getEmail() const { return email; }
    int User::getAge() { return age; }
    int User::getId() { return id; }

// Display ************************************ //

    void User::DisplayInfo(){
        std::cout << "\n*****************************" << std::endl;
        std::cout << "*         USER INFO         *" << std::endl;
        std::cout << "*****************************" << std::endl;
        std::cout << "* Name: " << name << std::endl;
        std::cout << "* Age: " << age << std::endl;
        std::cout << "* ID: " << id <<std::endl;
        std::cout << "* Email: " << email << std::endl;
        std::cout << "*****************************" << std::endl;
    }

// Input Operator ************************************ //

    std::istream &operator >> ( std::istream &input, User &user ){
        std::cout << "\nENTER THE USER INFORMATION IN THE OREDER" << std::endl;
        std::cout << "Name " << "Age " << "Email " << "Password ";
        std::cout << "(Space separated)" << std::endl;
        input >> user.name >> user.age >> user.email >> user.password;

        return input;
    }

// Output Operator ************************************ //

    std::ostream &operator << ( std::ostream &output, const User& user ){
        output << "\n*****************************" << std::endl;
        output << "*         USER INFO         *" << std::endl;
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
