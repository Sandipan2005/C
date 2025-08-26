# C-Basic-150: Comprehensive C Programming Problems Collection

This repository contains solutions to 150 fundamental C programming problems designed to strengthen your understanding of C language concepts. Each problem is carefully crafted to cover essential programming topics from basic input/output operations to complex data manipulation.

## 📋 Table of Contents

- [About](#about)
- [Featured Problems](#featured-problems)
- [Problem Categories](#problem-categories)
- [Getting Started](#getting-started)
- [How to Use](#how-to-use)
- [Compilation Instructions](#compilation-instructions)
- [Repository Structure](#repository-structure)
- [Author](#author)

## 🎯 About

This collection serves as a comprehensive practice resource for C programming beginners and intermediate learners. The problems progress from simple output formatting to more complex algorithmic challenges, making it perfect for:

- Students learning C programming
- Developers preparing for technical interviews
- Anyone looking to strengthen their C programming fundamentals

## 🌟 Featured Problems

Here are some of the specific problems included in this collection:

### **Problem 1: Personal Information Display**
```
Name   : Sandipan Majumder
DOB    : March 01, 2005
Mobile : 91-**********
```

### **Problem 2: C Version Detection**
Display the C version being used (C18 standard)

### **Problem 3: Pattern Printing - Block Letters**
Create block letters 'F' and 'C' using ASCII characters:
```
######
#
#
#####
#
#
#
   ######  
 ##      ##
#
#
#
#
#
 ##      ##
   ######  
```

### **Problem 4: String Manipulation**
Reverse character sequences ('X', 'M', 'L' → 'L', 'M', 'X')

### **Problem 5: Rectangle Calculations**
- Compute perimeter and area of a rectangle
- Height: 7 inches, Width: 5 inches
- Output: Perimeter = 24 inches, Area = 35 square inches

### **Problem 6: Circle Calculations**
- Compute perimeter and area of a circle with user input radius
- Uses mathematical constant PI (3.14159265359)
- Interactive input for radius value

### **Problem 7: Multiple Data Types**
Display operations with various C data types:
- `int`, `long`, `short`, `float`, `double`, `char`, `unsigned long`
- Demonstrates type casting and arithmetic operations

### **Problem 8: Integer Addition**
- Input two integers from user
- Calculate and display their sum
- Example: 25 + 38 = 63

## 📚 Problem Categories

The 150 problems cover various essential C programming concepts:

- **Basic I/O Operations**: Print statements, user input, formatted output
- **Data Types & Variables**: Integer, float, char, arrays, type casting
- **Arithmetic Operations**: Mathematical calculations, conversions
- **Control Structures**: Loops, conditionals, switch statements
- **Functions**: User-defined functions, recursion
- **Arrays & Strings**: Array manipulation, string operations
- **Pointers**: Basic pointer operations and memory management
- **Pattern Printing**: ASCII art and pattern designs
- **Mathematical Problems**: Geometry calculations, number theory
- **Interactive Programs**: User input validation and processing

## 🚀 Getting Started

### Prerequisites
- C compiler (GCC recommended)
- Text editor or IDE (Code::Blocks, Dev-C++, VS Code, etc.)
- Basic understanding of C programming syntax

### Quick Start
1. Clone this repository:
   ```bash
   git clone <repository-url>
   cd C-Basic-150
   ```

2. Open `C-Basic-150.c` in your preferred editor

3. Uncomment the specific problem you want to run

4. Compile and execute (see [Compilation Instructions](#compilation-instructions))

## 💻 How to Use

Each problem in `C-Basic-150.c` is:
- **Commented out by default** - Uncomment the problem you want to run
- **Well-documented** - Includes problem statement and expected output
- **Self-contained** - Can be run independently
- **Tested** - Verified solutions with sample inputs/outputs

### Running a Specific Problem:
1. Open `C-Basic-150.c`
2. Find the problem you want to solve (they're numbered 1-150)
3. Uncomment the code block for that problem
4. Comment out any other active problems
5. Compile and run

### Example: Running Problem 1 (Personal Information)
```c
#include<stdio.h>
int main(){
    printf("Name   : Sandipan Majumder\n");
    printf("DOB    : March 01, 2005\n");
    printf("Mobile : 91-**********\n");
    return 0;
}
```

## 🔧 Compilation Instructions

### Using GCC (Command Line):
```bash
gcc C-Basic-150.c -o C-Basic-150
./C-Basic-150
```

### Using GCC with Math Library (for mathematical problems):
```bash
gcc C-Basic-150.c -lm -o C-Basic-150
./C-Basic-150
```

### Using IDE:
- **Code::Blocks**: Open file → Build → Run
- **Dev-C++**: Open file → Execute → Compile & Run
- **Visual Studio Code**: Use C/C++ extension and configure build tasks

## 📁 Repository Structure

```
C-Basic-150/
│
├── C-Basic-150.c          # Main source file with all 150 problems
├── README.md              # This documentation file
└── .gitignore            # Git ignore file (not uploaded to repository)
```

**Note**: Only `C-Basic-150.c` and `README.md` are tracked in the repository. Executable files (`.exe`) and other generated files are ignored.

## 🎓 Learning Path

**Recommended progression:**
1. Start with **Problem 1** (Personal Information) - Basic printf usage
2. Move to **Problem 2** (C Version) - Preprocessor directives
3. Try **Problem 3** (Pattern Printing) - Multiple printf statements
4. Practice **Problem 4** (Character Manipulation) - Variable operations
5. Solve **Problems 5-6** (Geometry) - Mathematical calculations and user input
6. Work on **Problem 7** (Data Types) - Understanding different variable types
7. Continue with remaining problems in sequence

## 🔍 Problem Format

Each problem follows this structure:
```c
// Problem Number. Problem Title
//
// Problem Description
// Expected Output Example
//
// #include statements and solution code (commented out)
```

## 📊 Current Progress

This repository contains solutions for:
- ✅ Problems 1-8+ implemented and tested
- 📝 Clear problem statements and expected outputs
- 🔧 Working code solutions (commented for easy selection)
- 📖 Comprehensive documentation

## 👨‍💻 Author

**Sandipan Majumder**
- Date of Birth: March 01, 2005
- Contact: 91-**********
- Learning journey in C programming
- Committed to mastering fundamental programming concepts

## 📜 License

This project is created for educational purposes. Feel free to use it for learning and teaching C programming concepts.

---

**Happy Coding! 🚀**

*Remember: The best way to learn programming is by writing code. Don't just read the solutions - type them out, understand them, and experiment with variations!*
