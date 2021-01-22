/***************************************************************
Example of how to access query parameters in Node.js

Important remark: query parameters accept multiple parameters
under the same name. That's why there is an array defined for
each existing parameter. You can always use index 0 to get the
first parameter.

Example call: https://<nufunction-url>?greeting=Hello&who=World
***************************************************************/
exports.handler = function( request ) {
    var parameters = request.queryParameters;
    var greeting = "Hello";
    if ( "greeting" in parameters ) {
        greeting = request.queryParameters.greeting[0];
    }
    var who = "World";
    if ( "who" in parameters ) {
        who = request.queryParameters.who[0];
    }
    return greeting + " " + who + "!";
}
