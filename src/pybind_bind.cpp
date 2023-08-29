#include "pybind_test.h"
#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>


namespace py = pybind11;

PYBIND11_MODULE(pybind_example, m)
{
    m.doc() = "pybind11 example plugin";
    m.def("Add", &Add);

}