![42School Legacy Photo](https://photos.fife.usercontent.google.com/pw/AP1GczOT_mMA_RNe_Gq1PkCwR3o6Kl8SK3OV-OPtMptjrCs3mMcu9LycmNKeKQ=w1219-h1624-s-no-gm?authuser=0)

# My C, Kernel study legacy from 42Seoul

This repository contains a collection of C programming practice scripts, inspired by the 42 La Piscine curriculum. Each file demonstrates a specific C language concept or system programming technique, ranging from basic input/output to more advanced topics like string manipulation, control flow, and operator precedence.

## What You'll Find Here

- **Input/Output:** Reading and formatting user input, printing results (`scanf`, `printf`).
- **Arithmetic & Operators:** Integer and floating-point arithmetic, modular arithmetic, relational and logical operators, operator precedence.
- **Control Flow:** Conditional statements (`if`, `else if`, `else`, `switch`), loops.
- **String Handling:** Character arrays, string functions (`strlen`, `strncmp`), string formatting.
- **Bitwise and Boolean Logic:** Exploring how C handles boolean expressions and bitwise operations.
- **Pointers:** Pointer declaration, assignment, dereferencing, pointer arithmetic, and function arguments.
- **Structures:** Defining and using structs to group data.
- **System/Kernel Concepts:** (If any files cover system calls, memory management, or kernel-level operations, they will be listed here.)

## File Overview

- `upc.c`, `upc-one-digit.c`: Practice with formatted input and check digit calculation.
- `windspeed.c`: Categorizing wind speeds using conditional logic.
- `string-prac.c`: String comparison and manipulation.
- `section_4_2.c`, `section_4_2_9.c`, `section_4_3_11.c`: Operator precedence, boolean logic, and arithmetic.
- `score-if.c`: Grading logic with nested if-else.
- `scanf-int-float-seq.c`, `scanf-int-float-seq2.c`: Mixed input types and order.
- `space-distinguish.c`: Handling input with spaces and delimiters.
- `product-info-enter.c`: Structured input and formatted output.
- `tel_area_code.c`: Using `switch` for mapping codes to names.
- `several-int-float.c`, `several-int-float2.c`: Variable declaration and output.
- `single-expression.c`: Ternary operator and expression evaluation.
- `stars.c`: Output formatting for patterns.
- `three-digits-reverse.c`: Integer manipulation and digit extraction.
- `two-digits-english.c`: Mapping numbers to English words.
- `time24-to-12.c`: Time conversion and formatted output.

### io/
- `date-display.c`: Reading and displaying a date in a different format. (Input/output, scanf/printf formatting)

### pointer/
- `more-pointer.c`: Swapping two integers using pointers. (Pointers, function arguments, dereferencing)
- `pointing-to-same-address.c`: Printing the address of a variable. (Address-of operator, pointers)
- `address-void.c`: Using pointers and dereferencing (undefined behavior example). (Pointers, uninitialized pointers)
- `array-pointer.c`: Array and pointer relationships in C. (Arrays, pointers, pointer arithmetic)
- `address-print.c`: Assigning and dereferencing pointers. (Pointers, address-of, dereferencing)
- `address-print2.c`: Pointer assignment, dereferencing, and memory addresses. (Pointers, address-of, memory addresses)

#### pointer/create-pointer/
- `create-pointer.c`: Creating and assigning pointers. (Pointer assignment, address-of operator)

### structure/
- `example.c`: Using structures to store and print data. (Struct definition, member access)

### sum/
- `add-two-numbs.c`: Adding two numbers input by the user. (Integer input, arithmetic)

## How I Studied and Practiced

I practiced C programming by writing small, focused programs for each concept. For each topic, I:
- Wrote a minimal program to demonstrate the concept.
- Compiled and ran the program to observe its behavior.
- Experimented with variations and edge cases.
- Added comments to explain the purpose and key concepts in each file.

This hands-on approach helped me build a strong foundation in C, covering input/output, arithmetic, control flow, pointers, structures, and more.

## How to Use

Each `.c` file is standalone and can be compiled with `gcc`:

```sh
gcc filename.c -o filename
./filename
```

---

This repository is a great resource for anyone looking to strengthen their understanding of C programming fundamentals, operator behavior, and input/output handling. Each file is commented to explain its purpose and the concepts it demonstrates. 
