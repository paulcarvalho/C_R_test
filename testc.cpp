#include <Rcpp.h>
using namespace Rcpp;

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

// [[Rcpp::export]]
NumericVector timesTwo(NumericVector x) {
  return x * 2;
}

// [[Rcpp::export]]
NumericVector timesThree(NumericVector y) {
  return y * 3;
}

// [[Rcpp::export]]
double testSRR(NumericVector theta, int fecundity, int pop) {
  double r;
  r = (theta[0] * fecundity) / (1 + theta[1] * fecundity * pop);
  return r;
}

// [[Rcpp::export]]
double testIfStatement(int val) {
  double tmp;
  if (val <= 50) {
   tmp = val - 1;
  } else if (val > 50 && val < 100) {
   tmp = val + 1;
  } else {
   tmp = val;
  }
  return tmp;
}
