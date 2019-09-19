This program was created by James Lambert for CS3100

This is the expected output for the first part of the program, it ensures that the copy constructor and the regular constructor with parameters are working correctly. It also tests to make sure that all setXXX() functions are working correctly. The "**Not setting IdNum, invalid ID**" message being displayed is intentional, this means that the validation for an incorrect ID in SetId worked correctly. Again, this is the expected output:

	Testing Employee Parameter and Copy Constructor:
	eOriginal: James Lambert 1010
	eCopy: James Lambert 1010
	Testing all set functions:
	                **Not setting IdNum, invalid ID**
	Sabrielle Davidson 1011
	
	All other methods are tested with the standard menu program.
	Proceding with rest of program...

The rest of the program is the required menu section. The valid values are 1, 2, and 3, if a differnt value is entered an error will be displayed and the user will be prompted to enter a differnt value.

When 1 is selected the user needs to enter a number of employees to be read from the database. The database being read needs to be in the same location as the C++ code. The name of the file should be "Employee-Database.txt". If the number of employees selected is greater than the number of entries in the 'database' then a message will announce this and it will stop reading employees. The employees will be written to the file "out_jameslambert.txt"

When 2 is selected the user will need to enter two employees in this format:
first last ####
first last ####
and then the program will compare the employees and output whether they are equal or not.

When 3 is selected the program will exit.

Really, the program should be fine, I can't imagine I left anything relevent out at this point. If you read this far into the readme your a legend, have a good day.

James Brien Lambert