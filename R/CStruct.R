# Title     : CStruct S4 Class
# Objective : TODO
# Created by: jookuma
# Created on: 25/02/18

# -- CStruct class --
setClass("CStruct", contains = "externalptr")

# -- public methods --
setMethod("show", "CStruct",
          function(object){
              .showCStruct(as(object, "externalptr"))
              invisible()
          })

setMethod("+", c(e1 = "CStruct", e2 = "CStruct"),
            function(e1, e2){
                new("CStruct", .addCStruct(as(e1, "externalptr"),
                                           as(e2, "externalptr")))
            })

setMethod("-", c(e1 = "CStruct", e2 = "CStruct"),
            function(e1, e2){
                new("CStruct", .subCStruct(as(e1, "externalptr"),
                                           as(e2, "externalptr")))
            })

setMethod("==", c(e1 = "CStruct", e2 = "CStruct"),
            function(e1, e2){
                .eqCStruct(as(e1, "externalptr"),
                           as(e2, "externalptr"))
            })

setMethod("!=", c(e1 = "CStruct", e2 = "CStruct"),
            function(e1, e2){
                .difCStruct(as(e1, "externalptr"),
                            as(e2, "externalptr"))
            })

# -- public functions --
updateCStruct <- function(object, a, b){
    new("CStruct", .updateCStruct(as(object, "externalptr"), a, b))
}

createCStruct <-  function(A = 0, B = 0){
    new("CStruct", .createCStruct(A, B))
}
