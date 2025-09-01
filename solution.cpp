#include <iostream>
#include "calling.h"

// Example function f(x, y) = x + y
// Represents the ODE: dy/dx = x + y
float func(float x, float y) {
    return x + y;
}

int main() {
    // Solve ODE with initial condition y(0) = 1
    // Using step size h = 0.1 from x = 0 to x = 1
    auto sol = runge_kutta(func, 0.0f, 1.0f, 0.1f, 1.0f);

    // Print results to console
    for (size_t i = 0; i < sol.xvals.size(); i++) {
        std::cout << "x = " << sol.xvals[i]
                  << ", y = " << sol.yvals[i] << "\n";
    }

    // Plot Solution using Matplotlibcpp
    plt::plot(sol.xvals, sol.yvals);
    plt::xlabel("x");
    plt::ylabel("y");
    plt::title("Runge-Kutta ODE Solution");
    plt::show();
    return 0;
}
