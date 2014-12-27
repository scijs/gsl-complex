#include <emscripten/bind.h>
#include <gsl/gsl_complex.h>
#include <gsl/gsl_complex_math.h>

using namespace emscripten;

double gsl_complex_get_real(gsl_complex& z){
  return z.dat[0];
}

double gsl_complex_get_imag(gsl_complex& z){
  return z.dat[1];
}

void gsl_complex_set_real(gsl_complex& z, double val){
  z.dat[0] = val;
}

void gsl_complex_set_imag(gsl_complex& z, double val){
  z.dat[1] = val;
}

EMSCRIPTEN_BINDINGS(my_module) {

  class_<gsl_complex>("gsl_complex")
    .function("get_real",&gsl_complex_get_real)
    .function("get_imag",&gsl_complex_get_imag)
    .function("set_real",&gsl_complex_set_real)
    .function("set_imag",&gsl_complex_set_imag);

  function("polar",&gsl_complex_polar);
  function("rect",&gsl_complex_rect);

  function("arg", &gsl_complex_arg);
  function("abs", &gsl_complex_abs);
  function("abs2", &gsl_complex_abs2);
  function("logabs", &gsl_complex_logabs);

  /* Complex arithmetic operators */

  function("add", &gsl_complex_add);
  function("sub", &gsl_complex_sub);
  function("mul", &gsl_complex_mul);
  function("div", &gsl_complex_div);

  function("add_real",&gsl_complex_add_real);
  function("sub_real",&gsl_complex_sub_real);
  function("mul_real",&gsl_complex_mul_real);
  function("div_real",&gsl_complex_div_real);

  function("add_imag",&gsl_complex_add_imag);
  function("sub_imag",&gsl_complex_sub_imag);
  function("mul_imag",&gsl_complex_mul_imag);
  function("div_imag",&gsl_complex_div_imag);

  function("conjugate",&gsl_complex_conjugate);
  function("inverse",&gsl_complex_inverse);
  function("negative",&gsl_complex_negative);

  /* Elementary Complex Functions */

  function("sqrt",&gsl_complex_sqrt);
  function("sqrt_real",&gsl_complex_sqrt);
  function("pow",&gsl_complex_pow);
  function("pow_real",&gsl_complex_pow_real);

  function("exp",&gsl_complex_exp);
  function("log",&gsl_complex_log);
  function("log10",&gsl_complex_log10);
  function("log_b",&gsl_complex_log_b);

  /* Complex Trigonometric Functions */

  function("sin",&gsl_complex_sin);
  function("cos",&gsl_complex_cos);
  function("sec",&gsl_complex_sec);
  function("csc",&gsl_complex_csc);
  function("tan",&gsl_complex_tan);
  function("cot",&gsl_complex_cot);

  /* Inverse Complex Trigonometric Functions */

  function("arcsin",&gsl_complex_arcsin);
  function("arcsin_real",&gsl_complex_arcsin_real);
  function("arccos",&gsl_complex_arccos);
  function("arccos_real",&gsl_complex_arccos_real);
  function("arcsec",&gsl_complex_arcsec);
  function("arcsec_real",&gsl_complex_arcsec_real);
  function("arccsc",&gsl_complex_arccsc);
  function("arccsc_real",&gsl_complex_arccsc_real);
  function("arctan",&gsl_complex_arctan);
  function("arccot",&gsl_complex_arccot);

  /* Complex Hyperbolic Functions */

  function("sinh",&gsl_complex_sinh);
  function("cosh",&gsl_complex_cosh);
  function("sech",&gsl_complex_sech);
  function("csch",&gsl_complex_csch);
  function("tanh",&gsl_complex_tanh);
  function("coth",&gsl_complex_coth);

  function("arcsinh",&gsl_complex_arcsinh);
  function("arccosh",&gsl_complex_arccosh);
  function("arccosh_real",&gsl_complex_arccosh_real);
  function("arcsech",&gsl_complex_arcsech);
  function("arccsch",&gsl_complex_arccsch);
  function("arctanh",&gsl_complex_arctanh);
  function("arctanh_real",&gsl_complex_arctanh_real);
  function("arccoth",&gsl_complex_arccoth);
}
