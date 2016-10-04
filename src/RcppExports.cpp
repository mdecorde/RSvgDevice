// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// svglite_
bool svglite_(std::string file, std::string bg, double width, double height, double pointsize, bool standalone);
RcppExport SEXP svglite_svglite_(SEXP fileSEXP, SEXP bgSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP pointsizeSEXP, SEXP standaloneSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type bg(bgSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    Rcpp::traits::input_parameter< double >::type pointsize(pointsizeSEXP);
    Rcpp::traits::input_parameter< bool >::type standalone(standaloneSEXP);
    rcpp_result_gen = Rcpp::wrap(svglite_(file, bg, width, height, pointsize, standalone));
    return rcpp_result_gen;
END_RCPP
}
// svgstring_
Rcpp::XPtr<std::stringstream> svgstring_(Rcpp::Environment env, std::string bg, double width, double height, double pointsize, bool standalone);
RcppExport SEXP svglite_svgstring_(SEXP envSEXP, SEXP bgSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP pointsizeSEXP, SEXP standaloneSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type env(envSEXP);
    Rcpp::traits::input_parameter< std::string >::type bg(bgSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    Rcpp::traits::input_parameter< double >::type pointsize(pointsizeSEXP);
    Rcpp::traits::input_parameter< bool >::type standalone(standaloneSEXP);
    rcpp_result_gen = Rcpp::wrap(svgstring_(env, bg, width, height, pointsize, standalone));
    return rcpp_result_gen;
END_RCPP
}
// get_svg_content
std::string get_svg_content(Rcpp::XPtr<std::stringstream> p);
RcppExport SEXP svglite_get_svg_content(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<std::stringstream> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(get_svg_content(p));
    return rcpp_result_gen;
END_RCPP
}
