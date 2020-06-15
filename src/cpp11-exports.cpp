// Generated by cpp11: do not edit by hand

#include "cpp11/declarations.hpp"


// devSVG.cpp
bool svglite_(std::string file, std::string bg, double width, double height, double pointsize, bool standalone, cpp11::list aliases, cpp11::strings id);
extern "C" SEXP _svglite_svglite_(SEXP file, SEXP bg, SEXP width, SEXP height, SEXP pointsize, SEXP standalone, SEXP aliases, SEXP id) {
  BEGIN_CPP11
    return cpp11::as_sexp(svglite_(cpp11::unmove(cpp11::as_cpp<std::string>(file)), cpp11::unmove(cpp11::as_cpp<std::string>(bg)), cpp11::unmove(cpp11::as_cpp<double>(width)), cpp11::unmove(cpp11::as_cpp<double>(height)), cpp11::unmove(cpp11::as_cpp<double>(pointsize)), cpp11::unmove(cpp11::as_cpp<bool>(standalone)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(aliases)), cpp11::unmove(cpp11::as_cpp<cpp11::strings>(id))));
  END_CPP11
}
// devSVG.cpp
cpp11::external_pointer<std::stringstream> svgstring_(cpp11::environment env, std::string bg, double width, double height, double pointsize, bool standalone, cpp11::list aliases, cpp11::strings id);
extern "C" SEXP _svglite_svgstring_(SEXP env, SEXP bg, SEXP width, SEXP height, SEXP pointsize, SEXP standalone, SEXP aliases, SEXP id) {
  BEGIN_CPP11
    return cpp11::as_sexp(svgstring_(cpp11::unmove(cpp11::as_cpp<cpp11::environment>(env)), cpp11::unmove(cpp11::as_cpp<std::string>(bg)), cpp11::unmove(cpp11::as_cpp<double>(width)), cpp11::unmove(cpp11::as_cpp<double>(height)), cpp11::unmove(cpp11::as_cpp<double>(pointsize)), cpp11::unmove(cpp11::as_cpp<bool>(standalone)), cpp11::unmove(cpp11::as_cpp<cpp11::list>(aliases)), cpp11::unmove(cpp11::as_cpp<cpp11::strings>(id))));
  END_CPP11
}
// devSVG.cpp
std::string get_svg_content(cpp11::external_pointer<std::stringstream> p);
extern "C" SEXP _svglite_get_svg_content(SEXP p) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_svg_content(cpp11::unmove(cpp11::as_cpp<cpp11::external_pointer<std::stringstream>>(p))));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _svglite_get_svg_content(SEXP);
extern SEXP _svglite_svglite_(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _svglite_svgstring_(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_svglite_get_svg_content", (DL_FUNC) &_svglite_get_svg_content, 1},
    {"_svglite_svglite_",        (DL_FUNC) &_svglite_svglite_,        8},
    {"_svglite_svgstring_",      (DL_FUNC) &_svglite_svgstring_,      8},
    {NULL, NULL, 0}
};
}



extern "C" void R_init_svglite(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  
}

