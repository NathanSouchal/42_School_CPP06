# C++ Module 06 — Casting & Type Identification

This repository contains **Module 06** of the 42 C++ Piscine.  
It focuses on **C++ type casting** — understanding how and when to use `static_cast`, `dynamic_cast`, `const_cast`, and `reinterpret_cast`, along with safe type identification using `dynamic_cast` and `typeid`.

---

## Objectives

- Learn about **C++ casting operators**
- Understand the difference between:
  - `static_cast`
  - `dynamic_cast`
  - `const_cast`
  - `reinterpret_cast`
- Use **RTTI (Run-Time Type Identification)** with `dynamic_cast`
- Identify object types at runtime using `typeid`
- Practice **downcasting** and **polymorphism-safe casting**

---

## Key Concepts

| Cast Type         | Purpose                                |
|-------------------|----------------------------------------|
| `static_cast`     | Compile-time checked conversions        |
| `dynamic_cast`    | Safe downcasting in polymorphic classes |
| `const_cast`      | Remove/add `const` or `volatile`       |
| `reinterpret_cast`| Low-level, unsafe conversion            |

⚠️ `reinterpret_cast` is **dangerous** and rarely used outside low-level systems code.
