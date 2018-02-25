### R C Struct

This sample was created for Google Summer of Code 2018 to SymEngine.R package.

### Installation

```
R CMD INSTALL <path to RCStruct>
```

### Example

```
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
```