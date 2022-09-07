# Determine value of π

Pi (π), the ratio of a circle’s circumference to its diameter, is an irrational, transcendental number that has intrigued mathematicians since ancient times. Archimedes (c. 287 BC – c. 212 BCE), Liu Hui (3rd century CE) and other early mathematicians used polygon approximation methods to calculate the value of π. Newton, Leibniz (Links to an external site.), and others used infinite series (sums and products) to arrive at better values. Modern computing has taken the task to the extreme, with the current record standing at 1015 decimal places. Since the circumference of the universe can be calculated to within the size of a hydrogen atom using 40 decimal places*, 1015 decimal places are clearly just for fun.

In this assignment, we will take a less mathematical approach and use brute force to approximate π. The figure to the right shows a quarter circle of radius 1 within a square of side length 1. The square is subdivided into smaller squares of size dx by dx. To calculate the area of the quarter circle we simply need to add up the areas of all the little squares that are inside the arc (more specifically, the squares whose lower left corners are at a distance of less than 1 from the center of the circle). Since the area of a full circle of radius 1 is equal to π (by definition, essentially), we can multiply our result by 4 to get our approximate value of π.

Write a stand-alone implementation in C++ for this approximation and use it to calculate your own value of π. The simulation should run itself several times, with dx = 0.001, 0.0001, and 0.00001 and compare the results (percent error perhaps). Feel free to embellish the capabilities if you feel the need, but remember that this first assignment is really just to get you going, so don’t overdo it. You are, however, expected to start using good programming techniques like modularity (functions), appropriate variable names, good comments, etc.

By the way, the first 100 decimal digits of π are 3.14159 26535 89793 23846 26433 83279 50288 41971 69399 37510 58209 74944 59230 78164 06286 20899 86280 34825 34211 70679.

https://www.jpl.nasa.gov/edu/news/2016/3/16/how-many-decimals-of-pi-do-we-really-need/

![image](https://user-images.githubusercontent.com/112819644/188941498-8f2d5f2c-9c2d-4a4d-9b2e-ed988dd18927.png)
