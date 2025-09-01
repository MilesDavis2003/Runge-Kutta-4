# 🚀 Runge–Kutta ODE Solver in C++ (with Plotting)

This repository provides a **C++ implementation of the 4th-order Runge–Kutta (RK4) algorithm** for solving ordinary differential equations (ODEs).  
It includes optional graphing support via **[matplotlib-cpp](https://github.com/lava/matplotlib-cpp)**, a lightweight C++ wrapper for Python’s `matplotlib`.

---

## 📖 Overview

The RK4 method is a powerful **numerical technique** for approximating solutions to initial value problems of the form:

$$
\frac{dy}{dx} = f(x, y), \quad y(x_0) = y_0
$$

This project:
- Implements a reusable RK4 solver in C++.  
- Allows you to pass any function \( f(x, y) \).  
- Returns computed \((x, y)\) values.  
- (Optional) Plots the solution using `matplotlib-cpp`.  

---

## ⚙️ Requirements

- **C++11 or later** (tested with `g++` and `clang++`)  
- **Python 3.x** installed  
- Python packages:  
  ```bash
  pip install matplotlib numpy
