A basic student management system written in C:


This Student Management System is a console-based program designed to handle student records efficiently. This Program includes feature and functionalities for adding students, updating student grades, removing students, searching for a student by ID, and displaying all student records. In this structured program modular programming, use of structure, array, conditional statements are used throughout the program. In addition to that file handling system has been added to the program which ensures to keep proper track of data and managing data input and output, enabling programs to interact with data stored on disk. of the program are stated below:
The key concepts Structured Programming Used are:
  1.	Modular Design: Breaking the program into smaller, reusable functions.
  2.	Structures: Grouping related data for better organization.
  3.	File Handling: Reading and writing data to external files.
  4.	Arrays: Managing multiple records efficiently.
  5.	Loops and Conditionals: Iterating and branching logic.
  6.	Error Handling: Ensuring robust operations and checks for errors in file operations.
These principles make the program maintainable, scalable, and easy to understand.

 1.Modular Programming (Functions)
The program is divided into multiple functions, each responsible for a specific task:

•	main(): Manages the overall program flow and user input. The main function pops the menu driven input and asks the user for a choice. The it calls the function based in the choice of the user. Once the task is done it can also exit the program.

 ![image](https://github.com/user-attachments/assets/f40829eb-bdba-407d-927f-4f4b6c50e76a)

•	savefile() and loadfile():  Handles saving data to a file and loading data from a file. The Program saves all data to a notepad file named “Hameem.txt” and this allows data to be stored permanently in a file, so it remains available even after the program ends. This system reduces the need for constant user input during program execution and can load previously saved data from the user. Data stored in files reduces the reliance on memory during program execution, making programs more efficient.
 
•	addStudent(): Adds a new student record. Asks the user the user to input the name , id,age and grade of the student and stores it in the function savefile() . The input is taken using a menu driven user interface.
 
•	showallstudents(): Displays all student records.
 
•	updatestudent(): Updates an existing student record. The program asks user to enter the ID of the student and if the ID matches with the stored ID then it prompts option to enter new id, name, age, grade and saves it to the file. If the entered ID doesn’t matches with existing data then if shown an error message.
 
•	search_student(): Searches for a specific student record. Searching of a specific student is done by matching entered id with existing id in the database. If the correct id is entered the it shows the student details otherwise error message pops. Searching with id provides better accuracy since every students has a unique Id which is not possible in searching by name.
 
•	delet_student(): Deletes a student record. For deleting a student the same work is done as in searching of students. Additionally it deletes the details of the students instead of showing them.
 
This modular structure promotes reusability and readability.


2. Use of Structures
The program uses a struct student to group related attributes:
•	int id: Student ID.                           
•	char name[50]: Student name.
•	int age: Student age.
•	float grade: Student grade.
This provides a clear and organized way to represent a single student's data and allows operations on multiple student records using arrays of the structure.

3. File Handling
File operations are used to save and load student data persistently:
•	fopen(), fprintf(), and fclose() are used in savefile() for writing data.
•	fopen(), fscanf(), and fclose() are used in loadfile() for reading data.
This ensures that student data is preserved even after the program is terminated.

4. Arrays
An array of structures (struct student students[100]) is used to store multiple student records. It allows user to store multiple student details in a single variable. It shortens the code ensuring better user readability.
•	The variable n tracks the number of records in the array. 
•	Arrays allow sequential processing of student data (e.g., looping through records in showallstudents()).

5. Iteration
The program uses for and while loops to process student records:
•	For loops are used for tasks like displaying all student records and shifting records during deletion.
•	While loop is used to continuously prompt the user for input in the main() function.

6. Conditional Statements
The program uses if-else and switch to handle decision-making:
•	Menu-driven logic in the main() function uses if-else to execute the user's choice.
•	Searching and updating student records use conditional checks (e.g., if (students[i].id == id)).

7. Input/Output Handling
The program uses printf() and scanf() to handle interaction with the user:
•	printf() displays messages and prompts.
•	scanf() captures user input for student details and menu choices.

8. Error Handling
The program checks for errors in file operations:
•	If the file cannot be opened (e.g., fopen() returns NULL), it displays an error message.

9. Data Validation
Although basic, the program checks for specific cases:
•	It ensures that the student record exists (found flag) before updating or deleting.
•	If a student is not found, it displays an appropriate message.

Learning and Outcomes:
This program implements a basic student management system, enabling users to manage student data effectively. It allows adding, updating, deleting, and searching for student records, as well as viewing all records in a formatted manner. The program uses a structure to organize student information and ensures data persistence by saving and loading records from a file. This functionality guarantees that data remains intact even after the program is closed. It demonstrates essential programming skills, including the use of structures, file handling, and menu-driven interfaces. This assignment serves as a practical introduction to managing data in real-world applications.


Feel free to fork the repository, create pull requests, or suggest improvements!
Thank yOu.
