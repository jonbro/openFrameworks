#include "ofVec3f.h"
#include "gtest/gtest.h"

TEST(ofVec3f, Sub) {
	ofVec3f vec = ofVec3f(0,0,0);
	vec -= 3;
	// This test is named "Sub", and belongs to the "Vec3"
	// test case.
	EXPECT_EQ(-3, vec.x);
	EXPECT_EQ(-3, vec.y);
	EXPECT_EQ(-3, vec.z);
	
}
