// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// ngram_generator
std::vector<std::string> ngram_generator(std::string sentence, unsigned int n);
RcppExport SEXP Narrative_ngram_generator(SEXP sentenceSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type sentence(sentenceSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    __result = Rcpp::wrap(ngram_generator(sentence, n));
    return __result;
END_RCPP
}
// tdm_creator
std::map<std::string, int> tdm_creator(std::vector<std::string> ngrams);
RcppExport SEXP Narrative_tdm_creator(SEXP ngramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type ngrams(ngramsSEXP);
    __result = Rcpp::wrap(tdm_creator(ngrams));
    return __result;
END_RCPP
}
// tdm_generator
Rcpp::DataFrame tdm_generator(std::vector<std::string> documents, int n);
RcppExport SEXP Narrative_tdm_generator(SEXP documentsSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type documents(documentsSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(tdm_generator(documents, n));
    return __result;
END_RCPP
}
