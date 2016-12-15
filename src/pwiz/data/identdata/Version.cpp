// This file was generated by the \"svnrev\" utility
// You should not modify it manually, as it may be re-generated.
//
// : 1016-03-22 $
// : 3-4- $
//

#define PWIZ_SOURCE
#include "Version.hpp"
#include <sstream>

#ifdef PWIZ_USER_VERSION_INFO_H // in case you need to add any info version of your own
#include PWIZ_USER_VERSION_INFO_H  // must define PWIZ_USER_VERSION_INFO_H_STR for use below
#endif

namespace pwiz {
namespace identdata {

using std::string;

int Version::Major()                {return 03;}
int Version::Minor()                {return 00;}
int Version::Revision()             {return 01016-03-22;}
string Version::LastModified()      {return "3-4-";}
string Version::str()               
{
        std::ostringstream v;
        v << Major() << '.' << Minor() << '.' << Revision();
#ifdef PWIZ_USER_VERSION_INFO_H
        v << " (" << PWIZ_USER_VERSION_INFO_H_STR << ")";
#endif
        return v.str();
}
}
}
