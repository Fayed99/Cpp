Structures:

Structures (also called structs) are a way to group several related variables into one place.

struct {-------------// Structure declaration
  int myNum;---------// Member (int variable)
  string myString;---// Member (string variable)
} myStructure;-------// Structure variable

Access Structure Members-

struct {-------------------------------------------//declear
  int myNum;
  string myString;
} myStructure;
myStructure.myNum = 1;----------------------------//Assign value to a member
std::cout << myStructure.myNum << std::endl;------// call a structer


Pointers:

int* ptr_number{&number};--------------//points toward number
int* ptr*number{new int{100}};---------//declear integer within pointer
*ptr_number = 200; --------------------//changes value to 200 | only the value changes and the address stays the same
ptr_number = &another_number;----------//changes the address and the value of the pointer to another_number
const int* ptr{another_number};--------//gives error | value becomes constant
int* const ptr{number};----------------//address becomes constant
delete ptr_number; --------------------//deletes the pointer
ptr_number{nullptr};------------------ //points to nothing

1. In pointers both the value and the address can be changed.

Referance:

int &ref_number{number}; -----------------//points toward the value
int &ref_number{another_number};----------//points to another value
ref_number = 36;--------------------------//changes number to 36
const &ref_number = another_number; ------//Gives Error

1. In referance only the value changes but the address number stays the same.

Character Manipulation<cctype>:

char message[]{"Hello World, Its 8.50 am"};
isalnum(int c):-----Checks if the given character is an alphanumeric character (either a letter or a number).
isalpha(int c):-----Checks if the given character is an alphabetic character (a letter).
iscntrl(int c):-----Checks if the given character is a control character.
isdigit(int c):-----Checks if the given character is a digit (0-9).
isgraph(int c):-----Checks if the given character has a graphical representation other than space.
islower(int c):-----Checks if the given character is a lowercase letter.
isprint(int c):-----Checks if the given character is printable, including space.
ispunct(int c):-----Checks if the given character is a punctuation character.
isspace(int c):-----Checks if the given character is a whitespace character (space, tab, newline, etc.).
isupper(int c):-----Checks if the given character is an uppercase letter.
isxdigit(int c):----Checks if the given character is a hexadecimal digit.
tolower(int c):-----Converts the given character to lowercase if it is uppercase, returns the character unchanged otherwise.
toupper(int c):-----Converts the given character to uppercase if it is lowercase, returns the character unchanged otherwise.

#include<string>:

std::string message{"Hello world"};------------//declear a string
std::string message(5,'x');--------------------//writes the x four times
std::string message{"Hello world", 5};---------//prints from index 0 to index 5
std::string new_message{message, 5};-----------//prints out from the message string from index 6 and leaves first 5 indexes
std::string new_message{message, 0, 5};--------//prints from index 0 to index 5
std::string new_message{message[5]};-----------//only prints the value at index 5

#include<cstring>:

char string[]{"hello world"};
std::strlen(string)------------------//find the length of a string
sizeof(string)-----------------------//finds the length of a string including null character(doesnt belongs to <cstring>)
std::strncmp(string1,string2)--------//compares 2 string (A,B)=-1, (B,A)=1, (A,A)=0
std::strcpy(new_line, main_line)-----//coppies from old to new string
std::strncpy(new_line, main_line, 6)--//works like strcpy but can choose length
std::strcat(first_string, second_string, 6)----//Concatenate second onto the end of second_string

C++ functions:


1.void function -------//does not return any value

void functionName();-------------- header of a function

frame 1: void functionName(){
    std::cout << "HELLO WORLD" << std::endl;-----------//function without parameters
}

frame 2: void printMessage(int times, std::string message) {-------//function with parameter
    for(int i = 0; i < times; i++) {
        std::cout << message << std::endl;
    }
}


2.return type functions-----------//returns a value

integer type:

int add(int a, int b) {
    return a + b;
}

 double type:

 double divide(int a, int b) {
    return static_cast<double>(a) / b;
}
 
string type:

std::string greet(std::string name) {
    return "Hello, " + name;
}

lambda function:

 1. auto func = []() -> void {
        std::cout <<"Hello world"<< std::endl; -------//function without paremeters
    };

2. [](){
        std::cout << "Hello world" << std::endl; ----//calling the function with () at the end of the function 
    }();

3. auto add = [](double a, double b) -> double { ------//declear the function with paremeter
    return a + b;
};

    double result = add(1.5, 2.5); -------------------------//call the function
    std::cout << "The sum is: " << result << std::endl;

4.  auto add = [](double a, double b) -> int { --------//turns double type into integer type
       std::cout << a + b std::endl;
    }(23.0, 45.0); -------------------------------------//declear the function with paremeter and call the function instantly
