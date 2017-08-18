// Jarye Murphy
// exercise 7.4 from c++ primer 
/*
Exercise 7.16: What, if any, are the constraints on where and how often an access spec-
ifier may appear inside a class definition? What kinds of members should be defined
after a public specifier? What kinds should be private?

functions should be put in public like getter and setter functions 
private should be data members like name and address because you dont 
want people outside of the class changing the name and address after initialization

Exercise 7.17: What, if any, are the differences between using class or struct?

The only difference between using class and using struct to define a
class is the default access level.

Exercise 7.18: What is encapsulation? Why is it useful?

Makes working with complex data structures a lot easier to understand and implement neccessary functions
to interact with said class

Exercise 7.19: Indicate which members of your Person class you would declare as
public and which you would declare as private. Explain your choice.

I would keep the get name and get address fucntions as public but the 
name and address i would declare as private to not allow poeple to change
the name of an already initilized object