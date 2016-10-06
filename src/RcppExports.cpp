// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cpt_trend
IntegerVector cpt_trend(NumericVector x, NumericVector y, int Q, long minseglen, double penalty);
RcppExport SEXP techchart_cpt_trend(SEXP xSEXP, SEXP ySEXP, SEXP QSEXP, SEXP minseglenSEXP, SEXP penaltySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type Q(QSEXP);
    Rcpp::traits::input_parameter< long >::type minseglen(minseglenSEXP);
    Rcpp::traits::input_parameter< double >::type penalty(penaltySEXP);
    __result = Rcpp::wrap(cpt_trend(x, y, Q, minseglen, penalty));
    return __result;
END_RCPP
}
// houghtransform
DataFrame houghtransform(NumericVector x1, NumericVector y1, int flag, NumericVector rbucket, NumericVector abucket, int s);
RcppExport SEXP techchart_houghtransform(SEXP x1SEXP, SEXP y1SEXP, SEXP flagSEXP, SEXP rbucketSEXP, SEXP abucketSEXP, SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< int >::type flag(flagSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rbucket(rbucketSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type abucket(abucketSEXP);
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    __result = Rcpp::wrap(houghtransform(x1, y1, flag, rbucket, abucket, s));
    return __result;
END_RCPP
}
// timesTwo
NumericVector timesTwo(NumericVector x);
RcppExport SEXP techchart_timesTwo(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    __result = Rcpp::wrap(timesTwo(x));
    return __result;
END_RCPP
}
// findminima
IntegerMatrix findminima(NumericVector xmin, NumericVector xmax, NumericVector threshold);
RcppExport SEXP techchart_findminima(SEXP xminSEXP, SEXP xmaxSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type threshold(thresholdSEXP);
    __result = Rcpp::wrap(findminima(xmin, xmax, threshold));
    return __result;
END_RCPP
}
// findmaxima
IntegerMatrix findmaxima(NumericVector xmin, NumericVector xmax, NumericVector threshold);
RcppExport SEXP techchart_findmaxima(SEXP xminSEXP, SEXP xmaxSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type threshold(thresholdSEXP);
    __result = Rcpp::wrap(findmaxima(xmin, xmax, threshold));
    return __result;
END_RCPP
}
// sortoptimaposition
IntegerVector sortoptimaposition(IntegerVector pos, IntegerVector sign, NumericVector value);
RcppExport SEXP techchart_sortoptimaposition(SEXP posSEXP, SEXP signSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type pos(posSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sign(signSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type value(valueSEXP);
    __result = Rcpp::wrap(sortoptimaposition(pos, sign, value));
    return __result;
END_RCPP
}
// sortoptimasign
IntegerVector sortoptimasign(IntegerVector pos, IntegerVector sign, NumericVector value);
RcppExport SEXP techchart_sortoptimasign(SEXP posSEXP, SEXP signSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type pos(posSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sign(signSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type value(valueSEXP);
    __result = Rcpp::wrap(sortoptimasign(pos, sign, value));
    return __result;
END_RCPP
}
// checkoptimasign
bool checkoptimasign(IntegerVector sign);
RcppExport SEXP techchart_checkoptimasign(SEXP signSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type sign(signSEXP);
    __result = Rcpp::wrap(checkoptimasign(sign));
    return __result;
END_RCPP
}
// checkoptimapos
bool checkoptimapos(IntegerVector pos);
RcppExport SEXP techchart_checkoptimapos(SEXP posSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type pos(posSEXP);
    __result = Rcpp::wrap(checkoptimapos(pos));
    return __result;
END_RCPP
}
