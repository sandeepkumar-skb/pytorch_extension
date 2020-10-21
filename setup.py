from setuptools import setup, Extension
from torch.utils import cpp_extension

setup(name='cpp_extensions',
      ext_modules=[
          cpp_extension.CppExtension('plugins', 
                                    ['bindings.cpp']
                                    )
          ],
      cmdclass={'build_ext': cpp_extension.BuildExtension}
    )
