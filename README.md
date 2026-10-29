# Library System

A simple console-based Library Management System written in **C++**.

Built as practice while learning Object-Oriented Programming.

## What it does

- Create multiple users
- Optionally add books with authors
- Rate books (1–5)
- Display user and book information

## OOP Concepts Used

- **Inheritance**: `Person` → `User` / `Author`
- **Composition**: `Book` contains an `Author`
- **Operator Overloading**: `<<`, `>>`, `==`, `=`
- **Encapsulation**: private/protected members + getters/setters
- **Static members**: ID counters

## Project Structure

Library_System/
├── include/          # Headers
│   ├── Person.h
│   ├── User.h
│   ├── Author.h
│   ├── Book.h
│   └── Run.h
├── src/              # Implementations
│   ├── Person.cpp
│   ├── User.cpp
│   ├── Author.cpp
│   └── Book.cpp
├── service/
│   └── Run.cpp       # Main program logic
├── Main.cpp
├── CMakeLists.txt
└── .gitignore
