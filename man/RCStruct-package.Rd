\name{RCStruct-package}
\alias{RCStruct-package}
\alias{RCStruct}
\docType{package}
\title{
 RCStruct
}
\description{
  Package created for Google Summer of Code 2018 SymEngine.R test.
}
\details{
  A C language struct with two variables, A and B, of type double wrapped to a R package.
}
\author{
  Jordao Bragantini, jordao.bragantini@gmail.com
}
\references{
  https://cran.r-project.org/web/packages/Rcpp/vignettes/Rcpp-package.pdf
  https://www.rdocumentation.org/packages/Rcpp/versions/0.12.15/topics/Rcpp.package.skeleton
  https://www.rdocumentation.org/packages/Rcpp/versions/0.12.15/topics/compileAttributes
}
% Optionally other standard keywords, one per line,
% from the file KEYWORDS in the R documentation.
\keyword{ C struct }
\examples{
    library(RCStruct)
    var1 = createCStruct()
    var1
    # A: 0.000000
    # B: 0.000000
    var2 = createCStruct(1, 2.5)
    var2
    # A: 1.000000
    # B: 2.500000
    var1 + var2
    # A: 1.000000
    # B: 2.500000
    var1 = updateCStruct(var1, -0.5, 3.0)
    var2 == var1
    # [1] FALSE
    var2 - var1
    # A: 1.500000
    # B: -0.500000
}
