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



