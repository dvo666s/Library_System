#include "Person.h"

// constructor 1 ************************************ //
    
Person::Person(): name("") , password("") , email("") , age(0){}

// constructor 2 ************************************ //

Person::Person( std::string name , std::string password , std::string email , int age ) : name(name) , password(password) , email(email) , age(age){
    this -> name = name;
    this -> password = password;
    this -> email = email;
    this -> age = age;
}

// setter ************************************ //

void Person::setName( std::string name){ this -> name = name; }
void Person::setPassword( std::string password){ this -> password = password; }
void Person::setEmail( std::string email){ this -> email = email; }
void Person::setAge( int age){ this -> age = age; }

// getter ************************************ //

std::string Person::getName() const{ return name; }
std::string Person::getPassword() const { return password; }
std::string Person::getEmail() const { return email; }
int Person::getAge(){ return age; }

// Display ************************************ //

void Person::DisplayInfo(){
    std::cout << "* Name: " << name << std::endl;
    std::cout << "* Age: " << age << std::endl;
    std::cout << "* Email: " << email << std::endl;
    std::cout << "*****************************" << std::endl;
}

// Deconstructor ************************************ //

Person::~Person(){}