# Library System — Progress

## Current progress
- Added `Person` as a base class for `User` and `Author`.
- Made `Book` contain an `Author` using Composition.
- Used `std::vector` to store users, books, and authors.
- Made adding a book optional for each user.
- Tested the program successfully with multiple users.

## Problem to solve
- Book and Author IDs are starting at `2` instead of `1`.
- I created temporary `Book` and `Author` objects before using `push_back()`.
- Object creation and copying may be affecting the ID counters.
- I temporarily used a negative ID to work around the problem.

## Next session
- Understand why the IDs are incremented more than once.
- Fix the ID logic without relying on a temporary workaround.
- Continue improving the project structure.


