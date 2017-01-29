# nice-utilities
Command line utilities based mainly on the Nice Things C library.

## Commands

* `cheader` -- Generates include directives for C programs.

## cheader

### Examples

Report the version.
`cheader --version`

Remember that the exit() function is from stdlib.h.
`cheader exit() stdlib`

Generate the include directive for the exit() function.
`cheader exit()`
`cheader exit # Implicitly adds () if first search fails.`


