
#include	<unistd.h>
/*
 *The first line hashtag include is a need to learn by heart line. This includes the following thing that is typed.
 In this instance it is a "library" called unistd.h (universal standard)
 What ever the librarys name is, it needs to be inside < >.
 Other much used library is stdio.h (standard input output)
 These libraries hold information on so called commands. The actual name for a command is a function.
 When included in the beginning, computergods know how to retrieve bunch of information from these libraries. Actually compiler does this but well just say computergods for now.
 Example of a command or a fuction is ft_putchar or ft_print_alphabet.
 In this bootcamp we are going to make some of our own functions.
 *
 */
int	ft_putchar(char x);
void	ft_print_alphabet(void);

int	ft_putchar(char x)
{
	write(1, &x, 1);
	return(1);
}
/*
 *	So how to read the above? int is a special word reserved to do something in C.
 Other such words can be char, void, return, double, write or while. There are many others also.
 	int represents a number ranging from negative something to positive something depending on your system. We can say that when something has a int value, it has a numeric value that is a whole number.

 	In here we are declaring that when we execute the command (function) ft_putchar, we give it an assignment. We also give it info that helps execute the assignment. Between () is defined what kind of information we need to give it. The int in the beginning defines what kind of answer it gives us after the function is finished.
 	char is different type of data type. These are characters. The thing is that their numeric value is a bit different. Character 0 has a value of 48. 1 has value of 49 and so on. Characters can also be something else than numbers.
	They can be for example letters upper case or lower case. These all have a numeric value. There is a table where you can check these values called ASCII table. Must learn not by heart but to remember that such exists and in the near future use it. void is nothingness and sometimes can be replaced with nothing.
 	When ; is found, it means that we state that something is like we previously on the same line defined or that we want to execute something from the current line.
	When a file containing code is sent to a compiler, the compiler starts reading the text or instructions from up to down. For now we skip the first lines of code for practical reasons, but we will come back to them later.
	The compiler does read the instructions but we need to know in detail what actually happens not now but in the next assignment. Important is that we are aware that they are there.
 *-----------------------
 *	Unlike you could imagine, this code does not yet execute. Why?
 *The compiler that makes these instructions to a program always starts executing from the function called main. The above information is read and understood, but not executed just yet.
	Before going to the main lets check out what happens in this function called ft_putchar
	Ok, so we know that the answer that it gives is a number or an int. ft_putchar is not a reserved name so we could call it anything we want. We would have to replace every function name called ft_putchar with something we would like to call it. unichar would also be a nice name since what ft_putchar does is print a single character.
	ft_putchar or unichar needs a character as information or a parameter to work properly. The x after the char is just a tag that works only inside the function and has nothing to do with character x. It is merely a tag like # in modern day social media.
	Notice that there is no ; after (char x). There is a reason for that. We can see that the next line holds only {. This means that the function ft_putchar (that needs a character value to work properly and gives an answer in the form of a number or an int), does all instructions until a } is found. We call what is inside the first { and the last } the functions body.
	So, when we execute the function ft_putchar, what it does is start to read the functions body and finds the line write(1, &x, 1); Write is a reserved name for a pre built function in the library stdio.h. It is also included in other libraries but not all.
	Return is also a reserved name. What return does is it gives an answer to where the function was called. Now we can put any int inside () after the return. We need to execute this command so don't forget the ;.
	There are many mistakes in this function and I'll explain in more detail on another file. The file should be in the same directory as this one and be called ft_putchar.c
 */
void	ft_print_alphabet(void)
{
	char name_of_arr[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	while(name_of_arr[i] != '\0')
	{
		ft_putchar(name_of_arr[i]);
		i = i + 1;
	}
	ft_putchar('\n');
	char n = 'a';
	while(n <= 'z')
	{
		ft_putchar(n);
		n++;
	}
}
/*
	This is another function and it is called ft_print_alphabet. Notice that it gives the result void and needs void to work properly. The first void needs to be there to indicate that it gives nothingness as an answer. The void inside () is optional.
		Void means nothingness. If we leave the first void out, the compiler changes it to int for some reason. Now lets get inside the body of this function.
	First we make an array of characters. The char tells us what type data we are dealing with. name_of_arr is a name or a tag inside our ft_print_alphabet function.
	Because we are dealing with an array, I named it name_of_arr. How do we know that it is an array and what is an array?
	The [] after the tag or name, indicates that we are dealing with an array. There is a lot of info on arrays in C and other languages. Lets put that aside for a while.
	The = means that we want to assign something to something. We want to put in what is on the left side of = , what is on the right side of =.
	= is an operator. There are many of these available. However == is a comparison operator that compares the left and right side. Now we want to put the alphabet inside our array so we use =.
	If we would want to put a single character inside, we would use 'x' so single quotes.
	If we want to put a bunch of characters in a particular order, we use "qwerty" so double quotes. This is what is called a string or string of characters. Because we told, not asked to put the alphabet in the array, we end the line with ;
	Now the name_of_arr array contains all of the alphabet. Fraction of cake! Now we just print it out and we are done...
	For each piece of information in the array there is a slot. There are 26 letters in the alphabet so there are 27 slots in the array. Sounds logical right <:D XD
	When we make an array and at the time we create it don't define the amount of space or slots it will take, the computer wizard comes and makes an extra slot after the last character and puts a character called NULL inside.
	This tells the computer that the string will not continue any more. The usage of strings is a lot easier because of this property. In the later assignments we will talk more about this.
	The NULL has an ASCII value just like every other character. The value as an integer or int is 0. The character itself is \0 . When used in C, if we want to indicate that we mean the character, we use '\0' notation.
	Even tho it looks like 2 different characters, its only 1. Character 0 is different from character \0. Integer value of char \0 is 0; Integer value of char 0 is 48;
	Next we want to make a tag or variable that has a number values inside to play with stuff. We name it i. This variable i (abbreviation for index) is a commonly used name for playing with arrays.
	We shall assign the value of 0 in it. Just to make things simple, C has the property of numbering the slots in an array starting from 0 instead of 1.
	This means that the first slot of our array, containing the character 'a', is slot number 0. Second slot containing 'b' is slot number 1. Third, containing 'c' is 2...
	Second to last slot, the 26th containing 'z' is #25 and finally the last slot, the 27th containing '\0' is #26. Why is it like this I don't know but for some weird reason it is only natural.
	while is a reserved word for a command that I like to think as a function. It requires no libraries to be added manually to be usable. It works as follows: while(is stomach full? if not then execute the following){eat;} After the }, go and see if the question inside () is true. When stomach gets full, the eat process is no longer executed and we jump out of the while command.
	While is called a loop. Loops are executed again and again in a loop untill something tells it to stop looping. There are different kinds of loops, while is just one of them.
	We can use == to see if the value in left and right are the same. ! means no in C. We can check if values are not the same by !=. a != b means check if a and b are not the same.
	while(name_of_arr[i] != '\0') means while (check if array slot #i content is not character '\0'). We can use i that has the value of 0 instead of 0.
	We know that the slot #26 so the 27th slot has the '\0' in it so this statement is true therefore we can jump inside the body of while loop. We will use the function ft_putchar with the content of the array slot number i and because we are telling to do that instead of asking, we use ;.
	Then we tell contents of variable i to become content of variable i + 1. Now the content of i is 1 because is used to be 0. Because we are in the while loop and we run in to }, we go back up and see if the arr content inside slot i is '\0'. No it is not so in we go again....
	After some time we have to gather our stuff and leave the loop since the content truly is '\0'.
	What does the ft_putchar do then? It prints on screen the character we send it. Sadly it is not as simple as that, but the explanation to that is in another file.
	If we ft_putchar character '\n', it should also work. char \n is change of row, same as pressing the enter - key. ASCII
	Lets make another variable called n. It is configured to hold a character and we put 'a' inside. ' ' for a single char. Since these chars have a numeric value also in addition to char value, we can say that 'a' < 'b' and 'a' < 'z'.
	while(a<=z) "a is maller or equal to z" do the while loop. The initial value inside n is 'a' so n < 'z'. Lets put 'k' inside n. n = 'k'; now n < 'c' is not true. i = i + 1; is the same as i++; ++ meaning add 1;
   */
int	main()
{
	ft_print_alphabet();
	return(0);
}
/*
 * This is the main function. This is where it all starts.. sort of. The compiler starts reading from top to bottom. It scans everything and memorizes it but does not do anything until it finds the main function.
 * When main is found, it is executed. Sometimes main wants some info to be executed and sometimes not. For now we don't give any. But what it does do, is give an answer usually in the form of a numeral.
 * This is a signal to the system that runs it. Standard is that it returns 0. Return is the same as an answer. If the system runs the soon to be a program, it expects a signal with the value of 0 back. This is indication that all is good and no crutial errors.
 * Sometimes the return can be something else than a 0 but it should mean that something went wrong.
 * More on error codes later on.
 * Now in the main there are only 2 lines to be executed. First we tell to run ft_print_alphabet wiht nothing inside () because it was declared previously that it wants no help solving its problem.
 *Function is scanned and found and executed.
 If you put the main function on top of the other 2 functions, it cannot find the ft_print_alphabet. 
 However if we prototype our functions as we have done, main knows to keep on searching.
 Prototypes are the 2 lines that end with ; and have usage info of the functions.
 */
