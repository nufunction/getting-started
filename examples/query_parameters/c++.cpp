/***************************************************************
Example of how to access query parameters in C++
Important remark: query parameters accept multiple parameters
under the same name. That's why there is an array defined for
each existing parameter. You can always use index 0 to get the
first parameter.
Example call: https://<nufunction-url>?greeting=Hello&who=World
***************************************************************/
#include "nufunction.h"
using namespace nufunction;

Response handler(Json &request)
{
    auto parameters = request["queryParameters"];
    auto greeting = "Hello";
    if ( parameters.hasKey("greeting") ) {
        greeting = request["queryParameters"]["greeting"][0].asStrin();
    }
    auto who = "World";
    if ( parameters.hasKey("who") ) {
        who = request["queryParameters"]["who"][0].asString();
    }
    return greeting + " " + who + "!";
}
