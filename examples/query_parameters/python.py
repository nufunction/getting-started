/***************************************************************
Example of how to access query parameters in Python
Important remark: query parameters accept multiple parameters
under the same name. That's why there is an array defined for
each existing parameter. You can always use index 0 to get the
first parameter.
Example call: https://<nufunction-url>?greeting=Hello&who=World
***************************************************************/
def handler(request):
    parameters = request['queryParameters']
    if not parameters is None and 'greeting' in parameters:
        greeting = parameters['greeting'][0]
    else:
        greeting = 'Hello'
        
    if not parameters is None and 'who' in parameters:
        who = parameters['who'][0]
    else:
        who = 'World'
    
    return greeting + ' ' + who + '!'
    
