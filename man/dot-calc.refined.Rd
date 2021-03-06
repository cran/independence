% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{.calc.refined}
\alias{.calc.refined}
\title{Compute the refined Hoeffding statistic}
\usage{
.calc.refined(perm)
}
\arguments{
\item{perm}{An integer vector containing exactly 0,1,...,n-1 in any order.

    The validity of the input is not checked by this function.}
}
\value{
The refined Hoeffding statistic of \code{perm}.

    The normalization is such that \emph{-1/180 <= R <= 1/90}.

    The return value -1.0 indicates an error.
}
\description{
This is an internal CPP function, used by the R function
\code{\link{hoeffding.refined.test}}.
}
\details{
Given (X1,Y1),...,(Xn,Yn), the refined Hoeffding statistic Rn only depends
on the permutation P that satisfies rank Yi = P[rank Xi].
This function computes Rn given P in O(n log n) time.
}
\examples{

.calc.refined(0:4)
## [1] 0.01111111

.calc.refined(c(0,3,2,1,4))
## [1] -0.005555556

set.seed(397)
.calc.refined(order(runif(1000))-1) * 36
## [1] 0.004414034
}
