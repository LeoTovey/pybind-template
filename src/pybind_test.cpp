#include "pybind_test.h"

Eigen::Vector2d Add(const Eigen::Vector2d& a, const Eigen::Vector2d& b)
{
    return a + b;
}
