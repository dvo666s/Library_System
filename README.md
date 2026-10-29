# Library System

A console-based Library Management System developed in C++ as a practice project while learning Object-Oriented Programming (OOP).

This project represents my practical experience with designing classes, implementing relationships between objects, and applying core C++ concepts in a multi-file application.

## Project Status

**Completed learning project.**

This repository represents the state of the project at the end of my Object-Oriented Programming practice. It was built to apply C++ concepts in a practical project and is not intended to be a production-ready library management system.

## Features

- Create and manage multiple user objects.
- Add books and associate them with authors.
- Rate books on a scale from 1 to 5.
- Display user and book information through console output.

## Concepts Practiced

### Object-Oriented Programming

- **Classes and Objects:** Modeling people, users, authors, and books.
- **Inheritance:** Using `Person` as a base class for `User` and `Author`.
- **Composition:** Representing the relationship between a book and its author.
- **Encapsulation:** Organizing data and providing access through getters and setters.
- **Constructors and Copy Constructors:** Initializing and copying objects.
- **Static Members:** Practicing shared class-level data and ID counters.

### C++ Features

- **Operator Overloading:** Implementing custom behavior for operators such as `<<`, `>>`, `==`, and `=`.
- **STL Containers:** Using `std::vector` to store collections of objects.
- **Header and Source Files:** Separating class declarations from their implementations.
- **CMake and Ninja:** Using a build-system workflow to organize and compile a multi-file C++ project.

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
├── Main.cpp          # Entry point
├── CMakeLists.txt
└── .gitignore
```

## Build Instructions

### Requirements

- A C++ compiler
- CMake 4.3.0 or later, as specified in `CMakeLists.txt`
- Ninja

### 1. Clone the repository

```bash
git clone https://github.com/dvo666s/Library_System.git
cd Library_System
```

### 2. Configure the project

```bash
mkdir build
cd build
cmake -G Ninja ..
```

### 3. Build the executable

```bash
ninja all
```

### 4. Run the program

```bash
./Main
```

The build and run commands describe the intended workflow; successful execution depends on the current source compiling correctly in your environment.

## Purpose

The main goal of this project was to move beyond learning C++ syntax and practice applying OOP concepts in a small, structured application.

It served as a learning exercise in class design, object relationships, constructors, operator overloading, and basic project organization.

This repository is a record of that learning stage rather than an actively maintained application.
