# Test Prodigybuild

This repository is a part of the ProdigyBuild project that maintains large number of C algorithms dedicated to achieve different functionalities or/and complete specific tasks. Everyone is encouraged to contribute including beginners. The repository currently supports Linux OS only.

Here are the steps to set up the environment:

## Windows Setup

1. Download and Install [MinGW](https://osdn.net/projects/mingw/)
2. Set the Environment Variables
3. Install the make utility through MinGW Installation Manager
4. You may need to restart your computer

## Mac Setup

1. GCC Compiler is already pre-installed
2. Install XCode which provides make utility

## Linux Setup

1. GCC Compiler and make utility are pre-installed on most Linux distributions

## Setup Steps

Clone the repository using git clone:
```Bash
$ git clone https://github.com/user/repo.git
$ cd algorithms
```
To compile with a makefile:
```Bash
$ make
```
To compile without a makefile:
```Bash
$ gcc -o <filename_without_extension>
```
For instance, to compile binsearch.c, use:
```Bash
gcc -o binsearch
```
and you should now have an executable named `binsearch`.

## Contributing

Please refer to the contributing guidelines in 'c/algorithms/CONTRIBUTING.md'.

## Testing
Please refer to the CI/CD pipeline for deployment steps.

## Database Tools

Not any database tools are required for this repository as of now.