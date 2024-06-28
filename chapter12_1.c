/*
If a macro is not getting expanded as per your expectation, how will
you find out how is it being expanded by the preprocessor?
*/

In such case we should preproccess our code and see the  expanded code.
 Assuming that the program file name is "chapter7.c".
In Visual Studio

gcc -E chapter7.c -o yourfile.i
//run this command in the terminal 

It tell the gcc compiler to preprocess the given file and 
store the expanded code in the "yourfile.i" file and a 
new file will get created of name "yourfile.i". Through this we can see how our 
macro has been exoanded by the preprocessor.