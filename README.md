# Library System

A simple console-based Library Management System built with C++.

This project was developed as a practical exercise in Object-Oriented Programming (OOP), focusing on classes, relationships between objects, and operator overloading.

## Features

- Create multiple users.
- Add books and associate them with authors.
- Rate books on a scale of 1 to 5.
- Display user and book information.

## OOP Concepts

- **Inheritance:** `Person` is the base class for `User` and `Author`.
- **Composition:** A `Book` contains an `Author` object.
- **Encapsulation:** Data is managed using access modifiers, getters, and setters.
- **Operator Overloading:** Custom behavior for operators such as `<<`, `>>`, `==`, and `=`.
- **Static Members:** Used for ID counters.

## Project Structure

```text
Library_System/
├── include/          # Header files
│   ├── Person.h
│   ├── User.h
│   ├── Author.h
│   ├── Book.h
│   └── Run.h
├── src/              # Class implementations
│   ├── Person.cpp
│   ├── User.cpp
│   ├── Author.cpp
│   └── Book.cpp
├── service/
│   └── Run.cpp       # Main program logic
├── Main.cpp          # Program entry point
├── CMakeLists.txt
└── .gitignore
```

## Requirements

- A C++ compiler.
- CMake 4.3.0 or a compatible version satisfying the project's configuration.
- Ninja build system.
- Git (to clone the repository).

## Build and Run

### 1. Clone the repository

```bash
git clone https://github.com/dvo666s/Library_System.git
cd Library_System
```

### 2. Configure the project

```bash
cmake -S . -B build -G Ninja
```

### 3. Build the executable

```bash
cmake --build build
```

### 4. Run the program

```bash
./build/Main
```

## Learning Goals

This project helped me practice:

- Designing classes and defining responsibilities.
- Applying inheritance and composition.
- Separating declarations from implementations.
- Working with overloaded operators.
- Organizing a multi-file C++ project using CMake and Ninja.

## License

No license has been specified yet.
