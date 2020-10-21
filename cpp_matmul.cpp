#include <torch/extension.h>

torch::Tensor d_matmul(torch::Tensor x, torch::Tensor y){
    auto s = torch::matmul(x, y);
    return s;
}
