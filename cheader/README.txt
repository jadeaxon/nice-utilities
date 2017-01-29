The cheader command generates include statements using the correct header file for a given function
or variable.

cheader uses a Berkeley DB database (~/.cheader/id2header.db) to remember identifier to header associations.  
By default it does not know anything; you have to add associations.  It does not try to parse C
header files to figure this out.

Here are some example invocations with expected output:
cheader exit() stdlib

cheader exit()
#include <stdlib.h>

cheader SIGINT signal

cheader SIGINT
#include <signal>.h

cheader --reverse signal
SIGINT
...

cheader printf() puts() stdio

# Must be only one arg for retrieve mode.
# If identifier isn't found, <identifier>() will be attempted.
cheader "puts exit" 
#include <stdio.h>
#include <stdlib.h>

