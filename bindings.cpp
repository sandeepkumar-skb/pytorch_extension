#include <torch/extension.h>
#include "cpp_sigmoid.cpp"
#include "cpp_matmul.cpp"

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
  m.def("sigmoid", &d_sigmoid, "wrapper for pytorch sigmoid");
  m.def("matmul", &d_matmul, "wrapper for pytorch sigmoid");
}
