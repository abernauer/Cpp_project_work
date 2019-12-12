# Types:

**char** Built-in type that holds ordinary characters as defined by the implementation.

**wchar_t** Built-in type intended to hold "wide characters," which are big enough to hold characters for languages such as Japanese.


# The string type
is defined in the standard header <string>. An object of type **string**. An object of type  string contains a sequence of zero or more characters. If n is an integer, c is a char, is is an input stream, and os is an output stream, then string operations include

std::string s; Defines s as a variable of type std::string that is initially empty.

std::string t = s; Defines a t as a variable of type std::string that initially contains a copy of the characters in s, where s can be either a string or a string literal.

os << s Writes the characters contained in s. without any formatting changes, on the output stream denoted by os. The result of the expression is os.

is >> s Reads and discards characters from the stream denoted by is until encountering a character that is not whitespace. Then reads successive characters from is into s, overwriting whatever value s might have had, until the next character would be whitespace. The result is is.

s + t The result of this expression is an std::string that contains a copy of the characters in s followed by a copy of the characters in t. Either s or t, but not both, may be a string literal or a value of type char.

s.size() The number of characters in s. 

# Variables
can be defined in one of three ways:

```c++

std::string hello = "Hello"; // define the variable with an explicit value

std::string stars(100, '*'); // construct the variable
                             // according to its type and the given expressions

std::string name;            // define the variable with an implicit initialization
                             // which depends on its type
			     
```
Variables defined inside a pair of curly braces are local variables, which exist only while executing the part of the program within the braces. When the implementation reaches the }, it destroys the variables, and returns any memory that they occupied to the system.

Defining a variable as **const** promises that the variable's value will not change during its lifetime. Such a variable must be initialized as part of its definition, because there is no way to do so later.

# Input:
Executing std::cin >> v discards any whitespace characters in the standard input stream, then reads from the standard input into variable v. It returns std::cin, which has type istream, in order to allow chained input operations.



