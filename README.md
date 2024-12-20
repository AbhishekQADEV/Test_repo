# Test Prodigybuild

This repository contains different types of algorithms implemented in C language. It is designed in a way to encourage beginners to contribute to open source. Alongside the algorithms, this repository includes structure to design your own binary trees, doubly linked lists and also certain utility features like keyloggers.

## Environment Setup Steps

1. Install language: Install C language on your system. Above mentioned algorithms have been implemented using C.
   **FOR MAC:**
   - The easiest way to install C compiler on your machine is to use 'xcode-select'. Run the following command in your terminal:
   ```c
   xcode-select --install
   ```
   Make sure the installation is successfully completed by running:
   ```c
   gcc --version
   ```
   **FOR WINDOWS:**
   - The easiest way to install C compiler is by installing MinGW. Run the following command in your terminal:
   ```c
   choco install mingw
   ```
   Make sure the installation is successfully completed by running:
   ```c
   gcc --version
   ```

2. Clone and navigate to the repo
   ```c
   git clone https://github.com/user/repo.git
   cd c/algorithms
   ```

   (replace 'user' and 'repo' with appropriate github username and repo name)

3. For testing any of the C scripts, compile the script using gcc.
   ```c
   gcc <path_to_C_script> -o output_file
   ```
   Then, to run the compiled file:
   ```c
   ./output_file
   ```

## Running tests locally
Some of the C scripts in this repo take command line arguments. Check the specific script to determine what arguments need to be passed while scripting.


## CI/CD Pipeline

This project does not currently have a defined CI/CD pipeline. In order to setup a pipeline refer to the instructions specific to your CI/CD tool like Jenkins, TravisCI, CircleCI etc.


## Contributing

Please ensure to comply with the rules mentioned in the `CONTRIBUTING.md` file.

Preferably, test your code before running it. This will help to maintain the code quality for this project.