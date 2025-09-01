#include <iostream>
#include <vector>
#include <cmath>
#include "calling.h"

RK4 runge_kutta(float (*f_x)(float, float), float x0, float y0, float h, float xend){
    RK4 values;
    float x = x0;
    float y = y0;

    while(x <= xend){
        values.xvals.push_back(x);
        values.yvals.push_back(y);

        float k1 = h * f_x(x, y);
        float k2 = h * f_x(x + 0.5f*h, y + 0.5f*k1);
        float k3 = h * f_x(x + 0.5f*h, y + 0.5f*k2);
        float k4 = h * f_x(x + h, y + k3);

        y += (k1 + 2*k2 + 2*k3 + k4) / 6.0f;
        x += h;
    }

    return values;
}
