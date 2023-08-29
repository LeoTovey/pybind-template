import pybind_example
import numpy as np

b = np.array([1.0, 2.0])
a = np.array([1.0, 2.0])
print(pybind_example.Add(a, b))
