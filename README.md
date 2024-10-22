# Exception-Handling

## Aim :
To perform programs using exception handling

## Theory:

Exception handling is a programming construct that allows developers to manage errors or unexpected events that occur during the execution of a program. Instead of allowing the program to crash or produce incorrect results, exception handling provides a way to catch these errors. It uses try, catch, and throw constructs to handle exceptions, ensuring that a program can continue running or terminate safely when encountering errors.

Key Concepts
Exceptions: Events that disrupt the normal flow of a program due to errors.

Try Block: A block of code that may throw an exception.

Catch Block: Defines how to handle specific types of exceptions.

Throw Statement: Used to signal that an error has occurred.

Standard Exception Classes: Built-in exception types provided by C++, such as std::runtime_error and std::invalid_argument.


## Algorithm:
Zerodvision Error Algorithm
Start.

Declare variables n1, n2, and ans to store the two numbers and the result.

Prompt the user to "Enter the values of numbers 1 and 2:".

Read the user's input into the variables n1 and n2.

Try the following:

Check if n2 is equal to 0:

If true, throw an exception with the value of n2.

If the check is false, calculate ans as n1 / n2.

Print the result as "The answer is [result]".

Catch any exceptions:

If an exception occurs, print "ERROR: Division by [number]".

End.
