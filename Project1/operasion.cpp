#include <iostream>
#include <string>
# include <vector>

std::pair <double,double> discriminant(int a, int b, int c) {
    double D_root;
    double x1;
    double x2;
    if (a == 0) {
        return {0.0,0.0};
    }
    D_root = sqrt(b * b - 4 * c * a);
    if (D_root == 0) {
        x1 = x2 = -b / (2 * a);
        return {x1, x2 };
    } else {}
    if (D_root < 0) {
        return {0.0,0.0};
    } else {}
    if (D_root > 0) {
        x1 = (-b + D_root) / (2 * a);
        x2 = (-b - D_root) / (2 * a);
        return { x1, x2 };
    } else {}
}
