#include <iostream>
#include <vector>
#include <cmath>
#include "calling.h"

RK4 runge_kutta(float (*f_x)(float, float), float x0, float y0, float h, float xend){
    float x = x0;  // Current x value
    float y = y0;  // Current y value

    RK4 values; // Store computed (x, y) values

    // Iterate until we reach (or exceed) the endpoint
    while(x <= xend){
        // Save current values
        values.xvals.push_back(x);
        values.yvals.push_back(y);

        // Compute slopes for RK4
        float k1 = h * f_x(x, y);
        float k2 = h * f_x(x + 0.5f*h, y + 0.5f*k1);
        float k3 = h * f_x(x + 0.5f*h, y + 0.5f*k2);
        float k4 = h * f_x(x + h, y + k3);

        // Update y using weighted average of slopes
        y += (k1 + 2*k2 + 2*k3 + k4) / 6.0f;
        x += h; // Move to the next step
    }
    return values; // Return all computed points
}
