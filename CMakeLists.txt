cmake_minimum_required(VERSION 4.3.0)
project( Library )

add_executable(Main

Main.cpp
src/User.cpp
src/Book.cpp
src/Person.cpp
src/Author.cpp
service/Run.cpp

)

target_include_directories(Main PUBLIC include/)
