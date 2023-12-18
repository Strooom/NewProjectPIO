// ##########################################################################
// ### This file is generated by Build and Continuous Integration scripts ###
// ###   .github/workflows/buildinfo.py for local development environment ###
// ###   .github/workflows/testbuildrelease.yml for CI environment        ###
// ### Changes will be overwritten on the next build                      ###
// ##########################################################################

#include "buildinfo.h"

const buildEnvironment buildInfo::theBuildEnvironment{buildEnvironment::local};
const buildType buildInfo::theBuildType{buildType::development};
const int buildInfo::mainVersionDigit   = 1;
const int buildInfo::minorVersionDigit  = 1;
const int buildInfo::patchVersionDigit  = 7;
const char* buildInfo::lastCommitTag    = "0bc1d97";
const char* buildInfo::buildTimeStamp   = "2023-Dec-06 13:20:38";