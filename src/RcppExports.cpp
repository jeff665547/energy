// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// D_center
NumericMatrix D_center(NumericMatrix Dx);
RcppExport SEXP _energy_D_center(SEXP DxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Dx(DxSEXP);
    rcpp_result_gen = Rcpp::wrap(D_center(Dx));
    return rcpp_result_gen;
END_RCPP
}
// U_center
NumericMatrix U_center(NumericMatrix Dx);
RcppExport SEXP _energy_U_center(SEXP DxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Dx(DxSEXP);
    rcpp_result_gen = Rcpp::wrap(U_center(Dx));
    return rcpp_result_gen;
END_RCPP
}
// dcovU_stats
NumericVector dcovU_stats(NumericMatrix Dx, NumericMatrix Dy);
RcppExport SEXP _energy_dcovU_stats(SEXP DxSEXP, SEXP DySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Dx(DxSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Dy(DySEXP);
    rcpp_result_gen = Rcpp::wrap(dcovU_stats(Dx, Dy));
    return rcpp_result_gen;
END_RCPP
}
// mvnEstat
double mvnEstat(NumericMatrix y);
RcppExport SEXP _energy_mvnEstat(SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(mvnEstat(y));
    return rcpp_result_gen;
END_RCPP
}
// partial_dcor
NumericVector partial_dcor(NumericMatrix Dx, NumericMatrix Dy, NumericMatrix Dz);
RcppExport SEXP _energy_partial_dcor(SEXP DxSEXP, SEXP DySEXP, SEXP DzSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Dx(DxSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Dy(DySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Dz(DzSEXP);
    rcpp_result_gen = Rcpp::wrap(partial_dcor(Dx, Dy, Dz));
    return rcpp_result_gen;
END_RCPP
}
// partial_dcov
double partial_dcov(NumericMatrix Dx, NumericMatrix Dy, NumericMatrix Dz);
RcppExport SEXP _energy_partial_dcov(SEXP DxSEXP, SEXP DySEXP, SEXP DzSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Dx(DxSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Dy(DySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Dz(DzSEXP);
    rcpp_result_gen = Rcpp::wrap(partial_dcov(Dx, Dy, Dz));
    return rcpp_result_gen;
END_RCPP
}
// projection
NumericMatrix projection(NumericMatrix Dx, NumericMatrix Dz);
RcppExport SEXP _energy_projection(SEXP DxSEXP, SEXP DzSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Dx(DxSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Dz(DzSEXP);
    rcpp_result_gen = Rcpp::wrap(projection(Dx, Dz));
    return rcpp_result_gen;
END_RCPP
}
// U_product
double U_product(NumericMatrix U, NumericMatrix V);
RcppExport SEXP _energy_U_product(SEXP USEXP, SEXP VSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type U(USEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type V(VSEXP);
    rcpp_result_gen = Rcpp::wrap(U_product(U, V));
    return rcpp_result_gen;
END_RCPP
}