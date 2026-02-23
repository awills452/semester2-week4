
/*
Name: anthony wills
Student ID:201961071
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {
    // defining buffer
    char buffer[50] = "";  // Enough space for max 10 args * (4 chars + '-') + null terminator
    
    // process command line dats
    // start from i=1 to skip the program name
    for (int i = 1; i < argc; i++) {
        strcat(buffer, argv[i]);                          // adding current argument to buffer
        
        // addding -
        if (i < argc - 1) {
            strcat(buffer, "-");
        }
    }

    printf("%s\n", buffer);

    return 0;
}