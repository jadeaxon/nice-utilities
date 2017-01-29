// The point of this program is to make it easy to generate include directives for C programs when
// you can't remember which header files some function or variable is declared in.
// 
// I'm sure various IDEs and other programs already do this.  Generally, I'm not using an IDE for C
// development.  Beyond that a quick web search did not find a command to do this, so I decided to
// write this myself in C for practice since I've been learning C in order to understand firmware
// development.

// #include <nt_string_db.h> // StringDatabase
#include <stdio.h> // puts()
#include <stdlib.h> // exit()


// Manages database of C header file/identifier associations.
int main(int argc, char** argv) {
	puts("cheader version 0.0.0");
	puts("This version basically does nothing.");
	exit(0);

} // main(...)


