# nice-utilities
Command line utilities based mainly on the Nice Things C library.

## Commands

* `cheader` -- Generates include directives for C programs.

## cheader

### Examples

Report the version.<br>
`cheader --version`

Remember that the exit() function is from stdlib.h.<br>
`cheader exit() stdlib`

Generate the include directive for the exit() function.<br>
`cheader exit()`<br>
`cheader exit # Implicitly adds () if first search fails.`


