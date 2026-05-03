# Memory Playground (C++)

Memory Playground is a hands-on C++ project designed to explore how memory actually behaves at a low level.

Instead of just learning theory, this project demonstrates real-world memory behavior through interactive examples.

## What it covers

- Stack vs Heap memory layout
- Dangling pointers (use-after-free)
- Memory reuse by allocator
- Null pointer dereferencing (segmentation fault)
- Undefined behavior in C++

## Why this project?

Most developers write code without understanding how memory works underneath.  
This project focuses on exposing those hidden behaviors through simple, controlled experiments.

## Key Learning

- Memory is not automatically cleared after deletion
- Dangling pointers can silently cause bugs
- Allocated memory can be reused immediately
- OS enforces memory protection (segmentation faults)

## How to Run

```bash
g++ main.cpp
./a.out

> Built as part of learning low-level systems and memory management in C++