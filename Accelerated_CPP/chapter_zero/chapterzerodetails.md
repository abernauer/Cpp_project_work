# Program structure :
C++ programs are **free form**, meaning spaces are only required when they keep adjacent symbols from running together. New lines are treated as just another kind of space. Programs are normally indented to improve readability.

There are three entities which are not free-form:

+ string literals characters enclosed in double quotes; may not span lines
+ ``` #include name``` must appear on a line by themselves except for comments
+ ``` // comments``` // followed by anything; ends at the end of the current line

Multi line comments have the following form ``` /* */```.

# Types
define data structures and operations on those data structures. C++ has two kinds of types those built into the language, such as _int_, and those defined outside the core language, such as _std::ostream_.

# Namespaces
are a mechanism for grouping related names. Names from the standard library are defined in the namespace _std_.


# String literals
begin and end with double quotes ("); each string literal must appear entirely on one line of the program.

+ ```\n ``` newline character
+ ```\t ``` tab character
+ ```\b``` backspace character
+ ```\"``` treats this symbol as part of the string rather than as the string terminator
+ ```\'``` same meaning as ' in string literals, for consistency with character literals
+ ```\\``` includes a \ in the string, treating the next character as an ordinary character

# Definitions and headers:
Every name in that a C++ program uses must have a corresponding definition. The STL defines its names in headers which are accessable through ``` #include ```.
Names must be defined before they are used i.e. they must follow a ```#include```. The ```<iostream>``` header defines the library's input-output facilites.