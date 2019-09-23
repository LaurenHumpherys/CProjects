cmake_minimum_required(VERSION 3.12)

# Set the title of your project and language
project(myExe C)

# Set the version of the C language standard you will be using
set(CMAKE_C_STANDARD 99)

# Turn on helpful compiler warnings
set(CMAKE_C_FLAGS "-Wall -Werror") # all warnings are on and treated as errors
set(CMAKE_C_FLAGS "-Wall")

# Set the source directory, the place where your main.c and
# other files are located
set(SDIR C:/Users/C22Lauren.Humpherys/CLionProjects/CProjects/Labs/Lesson14/)

# List all files that are required to compile your project
set(SOURCE_FILES
        ${SDIR}lab14main.c
        ${SDIR}lab14functs.c
        ${SDIR}lab14functs.h
        ${SDIR}lab14fbFuncts.c
        ${SDIR}lab14fbFuncts.h)

# Tell cmake the name of your executable and what source files to
# build from
add_executable(lab14 ${SOURCE_FILES} )

#cmake_minimum_required(VERSION 3.12)
project(Lab14)

#set(CMAKE_CXX_STANDARD 14)

#add_executable(PEX/PEX1/pex1.c PEX/PEX1/pex1.h)