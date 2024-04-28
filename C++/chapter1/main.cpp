#include <iostream>
#include <torch/torch.h>

void intro_scalars_and_matrix() {
  torch::Scalar sc = 2;
  std::cout << "Scalar " << sc << "\n";

  torch::Tensor vector = torch::ones(5);
  std::cout << "Vector\n" << vector << "\n";

  torch::Tensor matrix = torch::randint(0, 10, {2, 2});
  std::cout << "Matrix\n" << matrix << "\n";

  torch::Tensor tensor = torch::randn({3, 4, 5});
  std::cout << "Tensor\n" << tensor << "\n";
}

void transpose_example() {
  torch::Tensor tr = torch::ones(5);
  std::cout << "Transpose\n" << tr.transpose(0, -1) << "\n";
}
int main() {
  // intro_scalars_and_matrix();
}