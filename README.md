gsl-complex-js
==============

complex numbers for JS via GNU Scientic Library. The original C code was transpiled to JS via *emscripten*. 

## Installation

```
npm install gsl-complex
```

```
var complex = require("gsl-complex");
```

## API

### Complex numbers

| Function  | Parameters | Description |
| ------------- | ----- | ----------- |
| rect | (real, imag) | creates a complex number, real+i*imag |
| polar | (r, theta) | creates a complex number in polar form, r e^(i theta) |

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
