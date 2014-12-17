gsl-complex-js
==============

complex numbers for JS via GNU Scientific Library. The original C code was transpiled to JS via *emscripten*. 

## Installation

Via npm:
```
npm install gsl-complex
```

To use it inside node:
```
var complex = require("gsl-complex");
```

## API

See [https://www.gnu.org/software/gsl/manual/html_node/Complex-Numbers.html](https://www.gnu.org/software/gsl/manual/html_node/Complex-Numbers.html) for a description of the following functions. The prefix `gsl_complex_` was removed from the original function definitions. For example, while in C you would call `gsl_complex_abs()` to retrieve the magnitude of the complex number, the function is exported simply as `abs()`. 

Example:
```
var x = complex.rect(3,2);
complex.abs(x);
```

Output:
```
3.605551275463989
```

### Complex numbers

| Function  | Parameters | Description |
| ------------- | ----- | ----------- |
| rect | (real, imag) | creates a complex number, real+i*imag |
| polar | (r, theta) | creates a complex number in polar form, r e^(i theta) |

Two following getter and setter functions have been defined for the complex number object:

| Function  | Parameters | Description |
| ------------- | ----- | ----------- |
| get_real |  | retrieves the real part  |
| get_imag | | retrieves the imaginary part |
| set_real | x | sets the real part equal to x |
| set_imag | y  | sets the imaginary part equal to y |

### Properties of complex numbers

| Function        |
| ------------- | 
| arg |
| abs |
| abs2 |
| logabs |

### Complex arithmetic operators  

| Function        |
| ------------- | 
| add |
| sub |
| mul |
| div |
| add_real |
| sub_real |
| mul_real |
| div_real |
| add_imag |
| sub_imag |
| mul_imag |
| div_imag |
| conjugate |
| inverse |
| negative |

### Elementary Complex Functions 

| Function        |
| ------------- | 
| sqrt |
| sqrt_real |
| pow |
| pow_real |
| exp |
| log |
| log10 |
| log_b |
| conjugate |
| inverse |
| negative |

### Complex Trigonometric Functions 

| Function        |
| ------------- | 
| sin |
| cos |
| sec |
| csc |
| tan |
| cot |

### Inverse Complex Trigonometric Functions

| Function        |
| ------------- | 
| arcsin |
| arcsin_real |
| arccos |
| arccos_real |
| arcsec |
| arcsec_real |
| arccsc |
| arccsc_real |
| arctan |
| arccot |

### Complex Hyperbolic Functions 


| Function        |
| ------------- | 
| sinh |
| cosh |
| sech |
| csch |
| tanh |
| coth |
| arcsinh |
| arccosh |
| arccosh_real |
| arcsech |
| arccsch |
| arctanh |
| arctanh_real |
| arccoth |
