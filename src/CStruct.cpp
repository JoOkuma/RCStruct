//
// Created by jordao on 23/02/18.
//

#include "CStruct.h"

// -- private functions --
CStruct* _createCStruct(void){
    CStruct* ptr = (CStruct*) malloc(sizeof (*ptr));
    return ptr;
}

void _destroyCStruct(CStruct *ptr){
    free(ptr);
}

// -- public functions --
SEXP createCStruct(SEXP a, SEXP b){

    xptr ptr = xptr( _createCStruct(), true);
    ptr->A = Rf_asReal(a);
    ptr->B = Rf_asReal(b);

    return ptr;
}

SEXP updateCStruct(SEXP obj, SEXP a, SEXP b){

    xptr ptr(obj);
    xptr out = xptr( _createCStruct(), true);
    out->A = (Rf_isReal(a)) ? Rf_asReal(a) : ptr->A;
    out->B = (Rf_isReal(b)) ? Rf_asReal(b) : ptr->B;
    return out;
}

void showCStruct(SEXP obj){
    xptr ptr(obj);
    printf("A: %lf\nB: %lf\n", ptr->A, ptr->B);
}

SEXP addCStruct(SEXP obj1, SEXP obj2){

    xptr ptr1(obj1);
    xptr ptr2(obj2);
    xptr out = xptr( _createCStruct(), true);
    out->A = ptr1->A + ptr2->A;
    out->B = ptr1->B + ptr2->B;
    return out;
}

SEXP subCStruct(SEXP obj1, SEXP obj2){

    xptr ptr1(obj1);
    xptr ptr2(obj2);
    xptr out = xptr( _createCStruct(), true);
    out->A = ptr1->A - ptr2->A;
    out->B = ptr1->B - ptr2->B;
    return out;
}

SEXP eqCStruct(SEXP obj1, SEXP obj2){
    xptr ptr1(obj1);
    xptr ptr2(obj2);
    return Rf_ScalarLogical((ptr1->A == ptr2->A) && (ptr1->B == ptr2->B));
}

SEXP difCStruct(SEXP obj1, SEXP obj2){
    xptr ptr1(obj1);
    xptr ptr2(obj2);
    return Rf_ScalarLogical((ptr1->A != ptr2->A) || (ptr1->B != ptr2->B));
}
