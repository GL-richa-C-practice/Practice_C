/*Commmand line arguments*/

#include<stdio.h>
// argc -  for the argument count is an integer value that specifies the number of argements typed o the command line
// argv - for the argument vector is an array of character pointers (strings)
int main (int argc, char *argv[])
{
    int noOfarguments = argc;
    char *arg1 = argv[0];
    char *arg2 = argv[1];
    printf("No of arguments: %d", noOfarguments);
    printf("arg_1: %s", arg1);
    printf("arg_2: %s", arg2);
    
    return 0;
}