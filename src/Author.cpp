#include "Author.h"
#include "Person.h"

// Start

// static variable ************************************ //

    int Author::count = 0;
    
// constructor 1 ************************************ //

    Author::Author(){ 
        id = 0;
        ++count;
        id = count;
    }

// constructor 2 ************************************ //

    Author::Author( std::string name , int age, std::string password, std::string email ) : Person(name,password,email,age)
    {
        id = 0;
        ++count;
        id = count;
    }

// constructor 3 ************************************ //

    Author::Author( const Author &author ){
        name = author.name;
        age = author.age;
        password = author.password;
        email = author.email;
        id = author.id;
    }

// Equality Test ************************************ //

    bool Author::operator==(const Author& author) { 
        return ( name == author.name && email == author.email && age == author.age && id == author.id && password == author.password);
    }

// getter ************************************ //

    int Author::getId() { return id; }

// Display ************************************ //

    void Author::DisplayInfo(){
        std::cout << "\n*****************************" << std::endl;
        std::cout << "*         AUTHOR INFO       *" << std::endl;
        std::cout << "*****************************" << std::endl;
        std::cout << "* ID: " << id <<std::endl;
        Person::DisplayInfo();
    }

// Input Operator ************************************ //

    std::istream &operator >> ( std::istream& input, Author& author ){
        std::cout << "\nENTER THE AUTHOR INFORMATION IN THE OREDER" << std::endl;
        std::cout << "Name " << "Age " << "Email " << "Password ";
        std::cout << "(Space separated)" << std::endl;
        input >> author.name >> author.age >> author.email >> author.password;

        return input;
    }

// Output Operator ************************************ //

    std::ostream &operator << ( std::ostream &output, const Author& author ){
        output << "\n*****************************" << std::endl;
        output << "*         AUTHOR INFO       *" << std::endl;
        output << "*****************************" << std::endl;
        output << "* Name: " << author.name << std::endl;
        output << "* Age: " << author.age << std::endl;
        output << "* ID: " << author.id <<std::endl;
        output << "* Email: " << author.email << std::endl;
        output << "*****************************" << std::endl;

        return output;
    }

// Deconstructor ************************************ //

    Author::~Author(){}

// End
