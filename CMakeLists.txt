cmake_minimum_required(VERSION 3.22)
project(C_Assembler_Project C)

set(CMAKE_C_STANDARD 90)

add_executable(C_Assembler_Project main.c util_functions/file.c util_functions/file_handler.c util_functions/source_files_parser.c headers/file_parsing.h util_functions/validations.c)
