# Project Name 

This is a repository of various C programs and algorithms including Binary Search Tree, Doubly Linked List, Bubble Sort, Linear Search and others.


## Software Requirements

- GCC compiler, version 9.3.0 and above

For Mac:
- Xcode command line tools

For Windows: 
- MinGW

- There is no other external dependency required to run these programs.

## Instructions for setup and running
Please follow the below steps to setup the environments on your system:

### Mac:
```
#Install Xcode command line tools that includes GCC
xcode-select --install

# Verify installation
gcc --version
```

### Windows:
```
#Download MinGW from https://osdn.net/projects/mingw/releases/
#Follow the installer instructions
#Add C:\MinGW\bin to your PATH

#Verify installation, open PowerShell or Command Prompt and type
gcc --version
```

To run a specific C program, navigate to the directory containing the C file in terminal (Mac) or command prompt (Windows) and use the following commands:

```
#Compile the code
gcc your_file_name.c -o output_file_name

#Run the program
./output_file_name
```

Replace "your_file_name.c" with the name of the C file you want to run and "output_file_name" can be any name you choose for the executable file that will be created after compilation.

Please note that these are simple C programs that run on the console, thus no specific configuration is needed for specific environments.

These programs do not need any specific database setup.

### CI/CD Process

If there are any steps for Continuous Deployment (CI/CD) it would involve setting up the environment, which depends upon the platform such as Azure Pipelines, Jenkins, GitLab and others. As of now, there is no CI/CD pipeline setup for this project.