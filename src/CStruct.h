//
// Created by jordao on 23/02/18.
//

#ifndef R_EXT_CSTRUCT_H
#define R_EXT_CSTRUCT_H

#include <Rcpp.h>
#include <stdlib.h>
#include <stdio.h>

using namespace Rcpp;

typedef struct {
    double A;
    double B;
} CStruct;

CStruct* _createCStruct(void);

void _destroyCStruct(CStruct *ptr);

typedef Rcpp::XPtr<CStruct, Rcpp::PreserveStorage, _destroyCStruct> xptr;

// [[Rcpp::export(".createCStruct")]]
SEXP createCStruct(SEXP a, SEXP b);

// [[Rcpp::export(".updateCStruct")]]
SEXP updateCStruct(SEXP obj, SEXP a, SEXP b);

// [[Rcpp::export(".showCStruct")]]
void showCStruct(SEXP obj);

// [[Rcpp::export(".addCStruct")]]
SEXP addCStruct(SEXP obj1, SEXP obj2);

// [[Rcpp::export(".subCStruct")]]
SEXP subCStruct(SEXP obj1, SEXP obj2);

// [[Rcpp::export(".eqCStruct")]]
SEXP eqCStruct(SEXP obj1, SEXP obj2);

// [[Rcpp::export(".difCStruct")]]
SEXP difCStruct(SEXP obj1, SEXP obj2);

#endif //R_EXT_CSTRUCT_H
