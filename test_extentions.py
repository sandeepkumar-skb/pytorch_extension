import torch
import plugins

x = torch.rand((3,4))
y = torch.rand((4,3))

z = plugins.matmul(x, y)
z = plugins.sigmoid(z)
print(z)
