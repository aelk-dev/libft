*This project has been created as part of the 42 curriculum by ael-hakk.*

# Libft

## Description

Libft is the first project of the 42 curriculum. Its goal is to recreate a collection of standard C library functions in order to understand how they work internally and become more familiar with the C programming language.

The project consists of implementing commonly used functions from the standard C library, as well as additional utility functions that are not part of the standard library.

The result is a custom static library called `libft.a`, which can be reused in future 42 projects.

Through this project, I learned to work with pointers, memory allocation, string manipulation, linked lists, and file descriptors. It also helped me improve my understanding of memory management and the importance of writing reliable and reusable code.

## Instructions

### Requirements

- A C compiler (`cc`).
- GNU Make.
- The `ar` utility to create the static library.

### Compilation

Clone the repository:

```bash
git clone git@vogsphere-v2.42belgium.be:vogsphere/intra-uuid-b31de006-08bd-40b3-a86e-c2990d77bc3b-7754224-ael-hakk
cd libft
```

Compile the library:

```bash
make
```

This generates the static library `libft.a` at the root of the repository.

### Makefile commands

| Command       | Description                                      |
| ------------- | ------------------------------------------------ |
| `make`        | Compiles the source files and creates `libft.a`. |
| `make clean`  | Removes all object files (`.o`).                 |
| `make fclean` | Removes object files and the library.            |
| `make re`     | Recompiles the entire library from scratch.      |

The project is compiled using the following flags:

```bash
-Wall -Wextra -Werror
```

### Using the library

To use Libft in another C project, include the header file:

```c
#include "libft.h"
```

Compile your program by linking it with the library:

```bash
cc main.c -L. -lft -I. -o program
```

Then execute it:

```bash
./program
```

## Library Contents

The library is organized into three groups of functions.

### Part 1 – Libc Functions

This part consists of recreating standard C library functions.

**Character checks and conversions**

| Function     | Description                                                    |
| ------------ | -------------------------------------------------------------- |
| `ft_isalpha` | Checks whether a character is alphabetic.                      |
| `ft_isdigit` | Checks whether a character is a digit.                         |
| `ft_isalnum` | Checks whether a character is alphanumeric.                    |
| `ft_isascii` | Checks whether a character belongs to the ASCII character set. |
| `ft_isprint` | Checks whether a character is printable.                       |
| `ft_tolower` | Converts an uppercase character to lowercase.                  |
| `ft_toupper` | Converts a lowercase character to uppercase.                   |

**Memory manipulation**

| Function     | Description                                              |
| ------------ | -------------------------------------------------------- |
| `ft_memset`  | Fills a memory area with a specified byte.               |
| `ft_bzero`   | Sets a memory area to zero.                              |
| `ft_memcpy`  | Copies a memory area.                                    |
| `ft_memmove` | Copies a memory area while handling overlapping regions. |
| `ft_memchr`  | Searches for a byte in a memory area.                    |
| `ft_memcmp`  | Compares two memory areas.                               |
| `ft_calloc`  | Allocates memory and initializes it to zero.             |

**String manipulation**

| Function     | Description                                                  |
| ------------ | ------------------------------------------------------------ |
| `ft_strlen`  | Calculates the length of a string.                           |
| `ft_strlcpy` | Copies a string with size limitation.                        |
| `ft_strlcat` | Concatenates strings with size limitation.                   |
| `ft_strchr`  | Finds the first occurrence of a character in a string.       |
| `ft_strrchr` | Finds the last occurrence of a character in a string.        |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_strnstr` | Searches for a substring within a limited length.            |
| `ft_strdup`  | Duplicates a string by allocating new memory.                |

**Conversion**

| Function  | Description                        |
| --------- | ---------------------------------- |
| `ft_atoi` | Converts a string into an integer. |

### Part 2 – Additional Functions

This part introduces functions that provide additional string manipulation and output capabilities.

**String manipulation**

| Function      | Description                                                                                       |
| ------------- | ------------------------------------------------------------------------------------------------- |
| `ft_substr`   | Creates a substring from a given string.                                                          |
| `ft_strjoin`  | Concatenates two strings into a newly allocated string.                                           |
| `ft_strtrim`  | Removes specified characters from the beginning and end of a string.                              |
| `ft_split`    | Splits a string into an array of strings using a delimiter.                                       |
| `ft_itoa`     | Converts an integer into a string.                                                                |
| `ft_strmapi`  | Creates a new string by applying a function to each character, using its index.                   |
| `ft_striteri` | Applies a function to each character of a string, using its index, modifying the original string. |

**Output functions**

| Function        | Description                                                           |
| --------------- | --------------------------------------------------------------------- |
| `ft_putchar_fd` | Writes a character to a specified file descriptor.                    |
| `ft_putstr_fd`  | Writes a string to a specified file descriptor.                       |
| `ft_putendl_fd` | Writes a string followed by a newline to a specified file descriptor. |
| `ft_putnbr_fd`  | Writes an integer to a specified file descriptor.                     |

### Part 3 – Linked Lists

This part introduces singly linked lists and operations for managing dynamic data structures.

Each node contains:

- `content`: a pointer to the data stored in the node.
- `next`: a pointer to the next node in the list.

The linked list structure is defined in `libft.h` using the `t_list` type.

**Linked list functions**

| Function          | Description                                                             |
| ----------------- | ----------------------------------------------------------------------- |
| `ft_lstnew`       | Creates a new list node.                                                |
| `ft_lstadd_front` | Adds a node at the beginning of the list.                               |
| `ft_lstadd_back`  | Adds a node at the end of the list.                                     |
| `ft_lstsize`      | Counts the number of nodes in the list.                                 |
| `ft_lstlast`      | Returns the last node of the list.                                      |
| `ft_lstdelone`    | Deletes one node and frees its content using a given deletion function. |
| `ft_lstclear`     | Deletes and frees an entire list.                                       |
| `ft_lstiter`      | Applies a function to the content of each node.                         |
| `ft_lstmap`       | Creates a new list by applying a function to each node's content.       |

## Resources

The following resources were used during the development of this project:

### Documentation

- **Linux man pages:** Used as the main reference for understanding the behavior and expected functionality of standard C library functions, particularly during Part 1.
- **42 Libft subject:** Used to understand the project requirements, function prototypes, restrictions, and expected behavior.

### Peer Learning

For Parts 2 and 3, when I had difficulties understanding how a function worked or what it was supposed to do, I first discussed the problem with my peers.

These discussions helped me understand different approaches and improve my problem-solving skills.

### AI Usage

AI tools were used exclusively as a learning and explanatory resource.

When I still had difficulties understanding a concept or a specific part of a function, even after discussing it with my peers, I used AI to ask for explanations.

The purpose was to clarify concepts, understand how certain mechanisms worked, and strengthen my own reasoning.

AI was not used as a substitute for understanding or as a source of ready-made solutions.

AI was also used to help reformulate and improve the wording and structure of this README.

### Testing and Debugging

Throughout the project, I created temporary `main.c` programs to test individual functions and check their behavior.

I also used **GDB (GNU Debugger)** to investigate problems, follow program execution, and identify potential errors.

These tests helped me verify my implementations and better understand how the functions behave in different situations.

---

**Project:** Libft

**Language:** C

**Library:** `libft.a`

**Compiler:** `cc`

**Build system:** Makefile

