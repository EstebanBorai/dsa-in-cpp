# learn-cpp
> 🤓 Learning C++

## Motivation
Learn C++ programming language fundamentals.

## Running Locally
### Requirements
- g++ compiler
- make tool installed

### Running simple programs:
Simple programs run in a single file.
For example the `hello-world.cpp`.

```bash
# step into a source directory
cd learn-cpp/

# compile the source file using g++ compiler
g++ hello-world.cpp

# run the output file
./a.out

# Expect "Welcome to C++!" to be printed in your terminal
```

### Running complex programs:
```bash
# step into sample "3.11 - 3.13"
cd learn-cpp/htp/ch03/3.11\ -\ 3.13/

# run the make command
make

# Expected output:
# g++ -Wall -g -c GradeBook.cpp
# g++ -Wall -g -c main.cpp
# g++ -Wall -g -o main.out GradeBook.o main.o

# run the compiled program
./main.out
```

## Contributions
Suggestions and improvements are welcome to this repository.
