#!/bin/sh

export DIR="$(pwd)"
export GSL=$DIR/gsl-js

cd $GSL

emconfigure ./configure
emmake make

cd $DIR

emcc -O3 gsl-js/complex/*.o --bind complex.cpp -I./gsl-js --memory-init-file 0 -o complex.js

echo "JS build finished"
