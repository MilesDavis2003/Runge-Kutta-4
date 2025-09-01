#ifndef CALC_H
#define CALC_H
#include <vector>

// Structure to hold the results of the Runge-Kutta integration.
// Stores the x-values and their corresponding y-values.
struct RK4{
    std::vector<float> xvals;
    std::vector<float> yvals;
};

// Function prototype for the 4th-order Runge-Kutta solver.
//
// Parameters:
//   func  - pointer to the function f(x, y) defining the ODE dy/dx = f(x, y)
//   x0    - initial x value
//   y0    - initial y value (corresponding to x0)
//   h     - step size
//   xend  - endpoint of integration
//
// Returns:
//   RK4Result containing vectors of x and y values.

RK4 runge_kutta(float (*f_x)(float, float), float x0, float y0, float h, float xend);

#endif
