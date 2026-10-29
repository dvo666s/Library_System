# Library System

A simple console-based Library Management System written in C++.

This project was built to practice Object-Oriented Programming concepts.

## Features

- User management
- Book management with optional Author
- Rating system for books
- Inheritance (`Person` → `User` / `Author`)
- Composition (`Book` contains an `Author`)
- Operator overloading (`<<`, `>>`, `==`, `=`)
- Uses `std::vector` for dynamic storage

## Project Structure

Library_System/
├── include/          # Header files
│   ├── Person.h
│   ├── User.h
│   ├── Author.h
│   ├── Book.h
│   └── Run.h
├── src/              # Source files
│   ├── Person.cpp
│   ├── User.cpp
│   ├── Author.cpp
│   └── Book.cpp
├── service/
│   └── Run.cpp       # Main logic
├── Main.cpp
└── CMakeLists.txt


## How to Build & Run

### Requirements
- C++ compiler (g++ or clang)
- CMake

### Steps

```bash
mkdir build
cd build
cmake ..
cmake --build .
./Main

Alternative (without CMake)

g++ -Iinclude Main.cpp src/*.cpp service/Run.cpp -o Library
./Library

Notes

This project is incomplete. It was used as practice while learning C++ and OOP.

----

## Current progress
- Added `Person` as a base class for `User` and `Author`.
- Made `Book` contain an `Author` using Composition.
- Used `std::vector` to store users, books, and authors.
- Made adding a book optional for each user.
- Tested the program successfully with multiple users.
- Removed the ID member from `Author`.
- Added custom assignment operators (`operator=`) for `User` and `Author` to control ID copying during assignment.
- Added a check to determine whether a book has an author.
- Added comments to improve code organization.
- Improved the project structure.

## Next session
- Continue developing the library system.
- Identify and implement the next improvements.


