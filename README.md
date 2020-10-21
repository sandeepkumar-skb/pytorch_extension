This is a quick reference for adding multiple Pytorch Extentions.

Here are 2 extensions -
1. cpp_sigmoid.cpp - wrapper for pytorch sigmoid
2. cpp_matmul.cpp - wrapper for pytorch matmul

The binding is registered in `bindings.cpp` 

Torch utils extensions are used to build the extension. `cpp_extensions` library is built
which has `plugins` module which can be imported from python and can be used.

To build and generate the extensions, run the following
`python setup.py install`


