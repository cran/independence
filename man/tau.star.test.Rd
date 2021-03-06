% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/independence.R
\name{tau.star.test}
\alias{tau.star.test}
\alias{taustar}
\alias{Bergsma-Dassios}
\alias{Yanagimoto-Bergsma-Dassios}
\title{The Bergsma--Dassios tau* independence test}
\usage{
tau.star.test(xs, ys, na.rm = TRUE, collisions = TRUE, precision = 1e-05)
}
\arguments{
\item{xs, ys}{Same-length numeric vectors, containing paired samples.}

\item{na.rm}{Logical: Should missing values, \code{NaN}, and \code{Inf} be removed?}

\item{collisions}{Logical: Warn of repeating values in \code{xs} or \code{ys}.}

\item{precision}{of p-value, between 0 and 1. Otherwise p-value=\code{NA}.}
}
\value{
A list, of class \code{"indtest"}:
\tabular{ll}{
\code{method} \tab
the test's name \cr
\code{n} \tab
number of data points used \cr
\code{Tn}/\code{Dn}/\code{Rn}/\dots{} \tab
the test statistic, measure of dependence \cr
\code{scaled} \tab
the test statistic rescaled for a standard null distribution \cr
\code{p.value} \tab
the asymptotic p-value, by TauStar::\code{\link[TauStar]{pHoeffInd}} \cr}
}
\description{
The function \code{tau.star.test} provides an
independence test for two continuous numeric variables,
that is consistent for all alternatives.
It is based on the Yanagimoto-Bergsma-Dassios coefficient,
which compares the frequencies of concordant and discordant
quadruples of data points.
The test statistic is efficiently computed in O(n log n) time,
following work of Even-Zohar and Leng.
}
\section{P-value}{

The null distribution of the test statistic was described by Hoeffding.
The p-value is approximated by calling the function
\code{\link[TauStar]{pHoeffInd}} from the package \code{TauStar} by
Luca Weihs.

By default, the p-value's \code{precision} parameter is set to \code{1e-5}.
It seems that better precision would cost a considerable amount of time,
especially for large values of the test statistic.
It is therefore recommended to modify this parameter only upon need.

In case that \code{TauStar} is unavailable, or to save time in repeated use,
set \code{precision = 1} to avoid computing p-values altogether.
The \code{scaled} test statistic may be used instead.
Its asymptotic distribution does not depend on any parameter.
Also the raw test statistic may be used, descriptively,
as a measure of dependence.
Only its accuracy depends on the sample size.
}

\section{Ties}{

This package currently assumes that the variables under consideration are
non-atomic, so that ties are not expected, other than by occasional effects of
numerical precision. Addressing ties rigorously is left for future versions.

The flag \code{collisions = TRUE} invokes checking for ties in \code{xs}
and in \code{ys}, and produces an appropriate warning if they exist.
The current implementation breaks such ties arbitrarily, not randomly.

By the averaging nature of the test statistic,
it seems that a handful of ties should not be of much concern.
In case of more than a handful of ties, our current advice
to the user is to break them uniformly at random beforehand.
}

\section{Big Data}{

The test statistic is computed in almost linear time, O(n log n),
given a sample of size n. Its computation involves integer arithmetics
of order n^4 or n^5, which should fit into an integer data type
supported by the compiler.

Most 64-bit compilers emulate 128-bit arithmetics.
Otherwise we use the standard 64-bit arithmetics.
Find the upper limits of your environment using
\enumerate{
\item \code{\link[independence]{max_taustar}()}
\item \code{\link[independence]{max_hoeffding}()}}

Another limitation is 2^31-1, the maximum size and value of
an integer vector in a 32-bit build of R.
This is only relevant for the tau star statistic in 128-bit mode,
which could otherwise afford about three times that size.
If your sample size falls in this range, try recompiling the
function \code{.\link{calc.taustar}}
according to the instructions in the cpp source file.
}

\examples{
## independent, $p.value is 0.2585027
set.seed(123)
tau.star.test(rnorm(10000),rnorm(10000))

## dependent, even though uncorrelated, $p.value is 0.000297492
set.seed(123)
tau.star.test(rnorm(10000,0,3001:13000), rnorm(10000,0,3001:13000))

}
\references{
Bergsma, Wicher; Dassios, Angelos. A consistent test of independence based
on a sign covariance related to Kendall's tau. \emph{Bernoulli} 20 (2014), no.
2, 1006--1028.
\cr\cr
Yanagimoto, Takemi. "On measures of association and a related problem."
Annals of the Institute of Statistical Mathematics 22.1 (1970): 57-63.
\cr\cr
Luca Weihs (2019). TauStar: Efficient Computation and Testing of the
Bergsma-Dassios Sign Covariance. R package version 1.1.4.
https://CRAN.R-project.org/package=TauStar
\cr\cr
Even-Zohar, Chaim, and Calvin Leng. "Counting Small Permutation Patterns."
arXiv preprint arXiv:1911.01414 (2019).
\cr\cr
Even-Zohar, Chaim. "independence: Fast Rank Tests."
arXiv preprint arXiv:2010.09712 (2020).
}
\seealso{
\code{\link{independence}},
\code{\link{hoeffding.D.test}},
\code{\link{hoeffding.refined.test}}
}
