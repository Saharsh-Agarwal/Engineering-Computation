/*
Saharsh Agarwal (CMU ID - saharsh2)
Engineering Computation - Assignment 1
Approximating the vaue of pi by counting area of squares in a quarter-circle
Submission - 6th Sept, 2022
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>

using namespace std;

int main()
{
    double dx[] = {0.001, 0.0001, 0.00001};
    double ans[3] = {};
    double pc[3] = {};
    double pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
    for (int i = 0; i < sizeof(dx) / sizeof(dx[0]); i++)
    {
        int count = 1 / dx[i];
        int r = count - 1;
        int c = 0;
        while (c < count)
        {
            //cout << r << "," << c << endl;
            double dist = pow((pow(r * dx[i], 2) + pow(c * dx[i], 2)), 0.5);
            if (dist < 1)
            {
                ans[i] += (r + 1) * dx[i] * dx[i];
                c++; // shifts column
            }
            else
            {
                r -= 1; //moves down the rows
            }
        }
        ans[i] *= 4;
        pc[i] = 100 * ((ans[i] - pi) / pi);
        cout << "For dx = " << dx[i] << " the value of pi is : " << ans[i] << endl;
        cout << "The error percentage for this is : " << pc[i] << endl;
        cout << endl;
    }
}
