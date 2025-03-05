# C++ Module 06

This repository contains exercises for the C++ Module 06, focusing on scalar conversion, pointer serialization, and polymorphism.

## Casting in C++
In C++, static_cast, dynamic_cast, and reinterpret_cast are different types of casting operators that serve different purposes. Here is a brief explanation of each:

`static_cast`
+ Purpose: Performs a compile-time cast.
+ Usage: Used for conversions between related types, such as converting a pointer to a base class to a pointer to a derived class, or converting between numeric types.
+ Safety: It does not perform runtime checks, so it is not safe for downcasting (casting from a base class to a derived class) unless you are certain of the type.

`dynamic_cast`
+ Purpose: Performs a runtime cast that includes type checking.
+ Usage: Used for safe downcasting in an inheritance hierarchy. It requires the base class to have at least one virtual function.
+ Safety: It performs runtime checks and returns nullptr if the cast is invalid (when casting pointers) or throws std::bad_cast (when casting references).

`reinterpret_cast`
+ Purpose: Performs a low-level cast that reinterprets the bit pattern of the object.
+ Usage: Used for casting between unrelated types, such as converting a pointer to an integer or vice versa.
+ Safety: It is the most dangerous cast because it does not perform any type checking and can lead to undefined behavior if used incorrectly.

## Exercises

### **ex00: Scalar Converter**

In this exercise, we implement a `ScalarConverter` utility that converts scalar values (like `int`, `float`, `double`, or `char`) between different types.

**Key Concepts:**

1. Scalar values represent single numerical quantities.
2. Conversion between different scalar types.

**What is a scalar value?**
A scalar value is a single numerical value that represents a quantity, unlike vectors, arrays, or other complex data structures. Scalars are used in both mathematics and programming to describe single data points.

**Difference Between Scalar and Non-Scalar Values**

| Scalar Values | Non-Scalar Values |
| ------------- | ----------------- |
| Store a single value | Store multiple values |
| `int`, `double`, `char`, `bool` | Arrays, Vectors, Strings, Structs, Classes |
| Example: `42` | Example: `{1, 2, 3}` (Array) |
| Can be processed in a single operation | Often require iteration for processing |

**Example Usage:**
compile and run the file with the 2nd argument being the string you want to convert
```
./convert "42"
./convert "4.2f"
./convert "'a'"
./convert "nan"
```

### **ex01: Pointer Serialization**
This exercise teaches pointer serialization and deserialization using uintptr_t to safely convert pointers to integers and back.

**Key Concepts:**

1. Serialization: Converting an object or pointer into a storable or transmittable format.
2. Deserialization: Reconstructing the original object or pointer from the serialized format.
3. `uintptr_t`: An unsigned integer type guaranteed to be large enough to hold a pointer value.

**What is a Serialization?**
Serialization is the process of converting an object (or a pointer) into a format that can be stored or transmitted (in this case, an integer).
Deserialization is the process of reconstructing the original object (or pointer) from the serialized format.
In this exercise, we are not serializing the actual content of Data, just its memory address.
It's use case is in storing or transmitting pointers as Integers

**Example Usage:**

```
Data* data = new Data;
uintptr_t serialized = Serializer::serialize(data);
Data* deserialized = Serializer::deserialize(serialized);
```
### **ex02: Polymorphism**

This exercise focuses on polymorphism, dynamic type identification, and using C++ inheritance and virtual functions. It also introduces random object creation and working with references and pointers.

**Key Concepts:**
1. Polymorphism: The ability to present the same interface for different underlying forms (data types).
2. Dynamic type identification using dynamic_cast.

**Example Usage:**

```
Base* base = generate();
identify(base);
identify(*base);
```

## Usage
To compile and run the exercises, navigate to the respective exercise directory and use the provided Makefile.

```
cd ex00
make
./convert "42"

cd ../ex01
make
./ex01

cd ../ex02
make
./ex02
```
