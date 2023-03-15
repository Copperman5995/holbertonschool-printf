Cooper and Bens printf project
this will be fun...
update this printf project was fun.
soo when you call our _printf_ file it prints the string passed and looks for a % symblo if it finds one then it run through an if staments that checks to see if the next chrater to be printed in a letter or a % if its a % then it just prints a %.
if the thing after the % is a letter it is passed to the get_convert_func function to see if the letter is a c, s, i, or a d if it is one of these letter it returns the proper function to be used to print the variable. if it isnt then it just prints out the letter after the %.
the function returned from get_convert_func is then called from the print_functions file and is used to print the variable listed when _printf is called.
our printf also is able to return the lenght of anything that is passed through it._
so our print f is able to print out the variables for char string interger and double, while also returning the lenght of what ever is passed through printf.
