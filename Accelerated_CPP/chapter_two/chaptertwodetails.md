# Expressions:
C++ inherits a rich set of operators from C, several of which we have already used. In addition, as we've already seen with the input and output operators, C++ programs can extend the core language by defining what it means to apply built-in operators to objects of class type. Correctly understanding complicated expressions is a fundamental prerequisite to effective programming in C++. Understanding such expressions requires understanding.

+ How the operands group, which is controlled by the precedence and associativity of the operators used in the expression

+ How the operands will be converted to other types, if at all

+ The order in which the operands are evaluated

Different operators have different precedence. Most operators are left-associative, but the assignment and conditional operators, and the operators that take a single argument, are right-associative. We list the most common operators here-regardless of whether we've used them in this chapter. We've ordered them by precedence from highest to lowest, with a double line separating groupings with the same precedence.

insert table of operators

There is usually no guarantee as to the order in which an expression's operands are evaluated. Accordingly, it is important to avoid writing a single expression in which one operand depends on the value of another operand.

Operands will be converted to the appropriate type when possible. Numeric operands in expressions or relational expressions are converted by the *usual arithmetic conversions*. Basically, the usual arithmetic conversions attempt to preserve precision. Smaller types are converted to larger types, and signed types are converted to unsigned. Arithmetic values may be converted to bool: A value of 0 is considered false; any other value is true. Operands of class type are converted as specified by the type. We'll see in Chapter 12 how to control such conversions.


# Types:

# Half open ranges

# Condition:

# Statements: 