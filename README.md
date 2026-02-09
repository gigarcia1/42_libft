*This project has been created as part of the 42 curriculum by gigarcia.*

# Libft

## Description
**Libft** is the first project in the 42 curriculum. The goal of this project is to create a custom C library by purselves, re-implementing standard functions (like `memcpy`, `strchr`, etc.) and creating new ones that will be essential for future projects. Essentially, making the tools with which we'll work from now on.

We learn about the original behavior of the standard C library functions, and later on jump to managing heap memory (mlloc/free) and handle possible leaks. In the later part of the project, there's an introduction to linked lists and how to manipulate them, refining our understanding and use of pointers.

##  Instructions

### How to Compile
The project includes a `Makefile` that handles compilation automatically.

1.  **Clone the repository:**
    ```bash
    git clone git@vogsphere-v2.42madrid.com:vogsphere/intra-uuid-31c2296a-50e4-4cbd-bbfa-ef2ad7efa23a-7217606-gigarcia
    cd libft
    ```

2.  **Compilation:**
    To compile, run:
    ```bash
    make
    ```
    This will generate the `libft.a` file.

4.  **Cleaning up:**
    * `make clean`: Removes object files (`.o`).
    * `make fclean`: Removes object files and the `libft.a` binary.
    * `make re`: Performs a full re-compilation.

### Usage
To use `libft` in your own C projects:
1.  Include the header in your source files: `#include "libft.h"`
2.  Compile your project linking the library:
    ```bash
    cc my_program.c -L. -lft -o my_program
    ```

##  Resources

This project was built using the following educational resources, focusing on deep understanding of all concepts.

### Technical Concepts
* **Memory & Overlap:** *[C Language: Making memmove()](https://marmota.medium.com/c-language-making-memmove-def8792bb8d5)* – Essential for distinguishing between `memcpy` and `memmove`.
* **Pointers & Structures:**
    * *[Structure Pointers in C](https://www.geeksforgeeks.org/c/structure-pointer-in-c/)* – Helped in visualizing how to point to nodes in the linked list.
    * *[Function Argument and Return Values](https://www.geeksforgeeks.org/c/c-function-argument-return-values/)*.
* **Function Pointers:** *[Passing a Function as a Parameter](https://jraleman.medium.com/c-programming-language-passing-a-function-as-a-parameter-90d52fe842ea)* – Critical for implementing `ft_striteri` and `ft_lstmap`.
* **Official Docs:** *GNU Man Pages* (accessed via terminal `man`) were the source of truth for all standard function prototypes.

### Video Tutorials
* **Linked Lists:** *[¡Aprende Paso a Paso Como Usar Listas Enlazadas!](https://www.youtube.com/watch?v=qk67wS7WYxo)* – A clear guide on node logic.
* **Data Structures:** *[Aprende a usar Pilas y Colas](https://www.youtube.com/watch?v=x8pLMgtRXY0)* – Conceptual understanding of linear data structures.

### AI Usage & Ethics

* **Role**: AI was used exclusively as a **pedagogical mentor**.

    It guided my reasoning through complex tasks before I began coding. We explored the "why" behind memory management, such as the logic required to handle overlaps in `memmove` vs `memcpy`.

    It helped me learn effective control practices and how to design robust test scenarios to avoid common pitfalls.

    **NO direct answers or code were requested or generated**. Every line of code in this repository is an original implementation based on my own reasoning, ensuring I can fully explain my work during peer evaluations.
