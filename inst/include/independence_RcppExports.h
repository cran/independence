// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_independence_RCPPEXPORTS_H_GEN_
#define RCPP_independence_RCPPEXPORTS_H_GEN_

#include <Rcpp.h>

namespace independence {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("independence", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("independence", "_independence_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in independence");
            }
        }
    }

    inline double max_taustar() {
        typedef SEXP(*Ptr_max_taustar)();
        static Ptr_max_taustar p_max_taustar = NULL;
        if (p_max_taustar == NULL) {
            validateSignature("double(*max_taustar)()");
            p_max_taustar = (Ptr_max_taustar)R_GetCCallable("independence", "_independence_max_taustar");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_max_taustar();
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double max_hoeffding() {
        typedef SEXP(*Ptr_max_hoeffding)();
        static Ptr_max_hoeffding p_max_hoeffding = NULL;
        if (p_max_hoeffding == NULL) {
            validateSignature("double(*max_hoeffding)()");
            p_max_hoeffding = (Ptr_max_hoeffding)R_GetCCallable("independence", "_independence_max_hoeffding");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_max_hoeffding();
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double _calc_taustar(const std::vector<unsigned long>& perm) {
        typedef SEXP(*Ptr__calc_taustar)(SEXP);
        static Ptr__calc_taustar p__calc_taustar = NULL;
        if (p__calc_taustar == NULL) {
            validateSignature("double(*_calc_taustar)(const std::vector<unsigned long>&)");
            p__calc_taustar = (Ptr__calc_taustar)R_GetCCallable("independence", "_independence__calc_taustar");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p__calc_taustar(Shield<SEXP>(Rcpp::wrap(perm)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double _calc_hoeffding(const std::vector<unsigned long>& perm) {
        typedef SEXP(*Ptr__calc_hoeffding)(SEXP);
        static Ptr__calc_hoeffding p__calc_hoeffding = NULL;
        if (p__calc_hoeffding == NULL) {
            validateSignature("double(*_calc_hoeffding)(const std::vector<unsigned long>&)");
            p__calc_hoeffding = (Ptr__calc_hoeffding)R_GetCCallable("independence", "_independence__calc_hoeffding");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p__calc_hoeffding(Shield<SEXP>(Rcpp::wrap(perm)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double _calc_refined(const std::vector<unsigned long>& perm) {
        typedef SEXP(*Ptr__calc_refined)(SEXP);
        static Ptr__calc_refined p__calc_refined = NULL;
        if (p__calc_refined == NULL) {
            validateSignature("double(*_calc_refined)(const std::vector<unsigned long>&)");
            p__calc_refined = (Ptr__calc_refined)R_GetCCallable("independence", "_independence__calc_refined");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p__calc_refined(Shield<SEXP>(Rcpp::wrap(perm)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

}

#endif // RCPP_independence_RCPPEXPORTS_H_GEN_