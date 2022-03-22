// Copyright 2021 Gamergenic.  See full copyright notice in Spice.h.
// Author: chucknoble@gamergenic.com | https://www.gamergenic.com
// 
// Project page:   https://www.gamergenic.com/project/maxq/
// Documentation:  https://maxq.gamergenic.com/
// GitHub:         https://github.com/Gamergenic1/MaxQ/ 

#include "UE5HostDefs.h"
#include "SpiceHostDefs.h"

#include "Spice.h"
#include "SpiceTypes.h"

#include "gtest/gtest.h"

TEST(FSDimensionlessStateVectorTest, DefaultConstruction_IsInitialized) {
    FSDimensionlessStateVector dimensionlessStateVector;

    EXPECT_EQ(dimensionlessStateVector.r.x, 0.);
    EXPECT_EQ(dimensionlessStateVector.r.y, 0.);
    EXPECT_EQ(dimensionlessStateVector.r.z, 0.);
    EXPECT_EQ(dimensionlessStateVector.dr.x, 0.);
    EXPECT_EQ(dimensionlessStateVector.dr.y, 0.);
    EXPECT_EQ(dimensionlessStateVector.dr.z, 0.);
}
