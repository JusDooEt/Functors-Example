# Using functors

## Output
```
A. Convert temperature from Fahrenheit to Celsius
B. Convert temperature from Celsius to Fahrenheit

Enter A or B:  a
Enter today's high temperature in Fahrenheit:  77
Today's high temperature was 25 Celsius.

OR

A. Convert temperature from Fahrenheit to Celsius
B. Convert temperature from Celsius to Fahrenheit

Enter A or B:  b
Enter today's temperature in Celsius:  25
Today's high temperature was 77 Fahrenheit.
```

## About
This program is an example on the use cases of functors (function objects). The concept is similar to overloading boolean and arithmetic operators but has further advantages than the other operators. For example, functors can be used to create templated functions that allow the passed function object to determine what code is executed. This gives programmers a way to make their code more generic and dynamic when using different data types or objects. In order to create a functor the ‘()’ operator needs to be overloaded and defined to execute a certain task. The functor can return a value or be void. The functor can have no arguments or multiple depending on the task it needs to perform. In this program, two different classes are created. One is meant to convert a temperature measured in Fahrenheit to celsius and the other vice versa. The equations to convert back and forth are different and are placed in the functor in the respective class. A function is then declared in main using a template for the first parameter receiving one of the two class obj and a float value representing the temp. The function then calls the object's functor. Since the functor is declared within the object, the correct equation will be chosen depending on the type of object that is being used in the function in that specific instance.



