# Linumiz Repository
Given tasks for the role.
## 1. Write a program which takes your/any name/string as command line argument and stores each character in a singly linked list node and prints it in reverse (from tail to head).
> This Program is Compiled using gcc POSIX Compliant Comiler so it will work on Linux without modifications. For windows it might require additional libraries.
![executed in gcc-POSIX Compatible](https://github.com/spi3ex/linumizrep/blob/master/Screenshot%202020-10-04%20at%201.34.02%20PM.png)
Problem Analysis:
- To Create a Linked List that Can Store ASCII Characters
- The arguments must be Provided through Commandline
- Reverse the linked list using Pointers
References: 
1. Book: Data Structures in C
2. Web: GeeksforGeeks.org, codeforwin.org, github.com

## 2. Write a shell script to find all the ELF file in a directory (recursively) and print their sizes in ascending order. Note: This is not the file with extension .elf, but the ELF file itself.
How I did it: `du -ah | grep -v "/$" | sort -h | tail -7. `
I used tail -7 to stop with 7 files as the command du gave a list of long files.
![executed in Zsh](https://github.com/spi3ex/linumizrep/blob/master/Screenshot%202020-09-07%20at%209.47.09%20PM.png)
Reference:
1. StackOverflow
