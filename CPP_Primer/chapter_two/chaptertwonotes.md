# Chapter 2 Variables and Basic Types

_Types_ determine the meaning of the data and operations in our programs.

```c++

i = i + j;

```

The meaning of the of even as simple a statement as above. Depends on the types of i and j. If i and j are Sales_item objects this statement adds the components of these two objects.


# 2.1 Primitive Built-in Types

C++ defines a set of primitive types that include the arithmetic types and a special type named *void* . The arithmetic types represent characters, integers, boolean values and floating-point numbers. The void type has no associateed values and can be used in only a few circumstances, most commonly as the return type for functions that do not return a value.

## 2.1.1 Arithmetic Types

The arithmetic types are divided into two categories: *integral types* (which include character and boolean types and floating-point types.

The size of-- that is, the number of bit in-- the arithmetic types varies across machines. However, compilers are allowed to use larger sizes for these types. Because the number of bits varies, the largest(or smallest) value that a type can represent also varies.

| Type        |              Meaning              | Minimum Size          |
|-------------|:---------------------------------:|-----------------------|
| bool        |              boolean              | NA                    |
| char        |             character             | 8 bits                |
| wchar_t     |           wide character          | 16 bits               |
| char16_t    |         Unicode character         | 16 bits               |
| char32_t    |         Unicode character         | 32 bits               |
| short       |           short integer           | 16 bits               |
| int         |              integer              | 16 bits               |
| long        |            long integer           | 32 bits               |
| long long   |            long integer           | 64 bits               |
| float       |  single-precision floating-point  | 6 significant digits  |
| double      |  double-precision floating-point  | 10 significant digits |
| long double | extended-precision floating-point | 10 significant digits |


There are several character types, most of which exist to support internationalization. The basic character type is _char_. A _char_ is guaranteed to be big enough to hold numeric values corresponding to the characters in the machine's basic character set. That is, a _char_ is the same size as a single machine byte.

The remaining character types--wchar_t, char16_t, and char32_t-- are used for extended character sets. Th wchar_t type is guaranteed to be large enough to hold any character in the machine's largest extennded character set.

The remaining integral types represent integer values of(potentially) different sizes. The language guarantees that an int will be at least as large as short, a long at least as large as an int, and long long at least as large as long.

## Signed and Unsigned Types

Except for _bool_ and the extended character types, the integral types may be _signed_ or _unsigned_ . A signed type represents negative or positive numbers (including zero); an unsigned type represents only values greater than or equal to zero.

The types _int_, _short_, _long_, and _long long_ are all signed. We obtain the corresponding unsigned type by adding _unsigned_ to the type, such as _unsigned long_. The type _unsigned int_ may be abbreviated as _unsigned_.

## Advice on type selection

+ Use an unsigned type when you know that the values cannot be negative.

+ Use int for integer arithmetic, short is usually too small and, in practice, long often has the same size as int. If your data values are larger than the minimum guaranteed size of an int, then use long long.

+ Do not use plain char or bool in arithmetic expressions. Use them only to hold characters or truth values. Computations using char are especially problematic because char is signed on some machines and unsigned on others. If you need a tiny integer, explicitly specify either signed char or unsigned char.

+ Use double for floating-point computations; float usually does not have enough precision, and the cost of double-precision calculations versus single-precision is negligible. In fact, on some machines, double-precision operations are faster than single. The precision offered by long double usually is unnecessary and often entails considerable run-time cost.