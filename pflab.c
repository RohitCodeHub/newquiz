
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//#include <conio.h>
//#include <windows.h>
//
//// Function prototypes
//void startCBasicQuiz();
//void startCHardQuiz();
//void adminPanel();
//
//// Admin credentials
//const char adminUsername[] = "admin";
//const char adminPassword[] = "password";
//
//// Function to display rules
//void Rules() {
//    system("cls");
//    printf("\n\n\t\t\t\t   *** Quiz Rules ***\n\n");
//    printf("1. There are 5 questions in each quiz.\n");
//    printf("2. Each question carries 20 marks.\n");
//    printf("3. Answer all questions correctly to pass.\n");
//    printf("4. If marks are greater than or equal to 60, you pass; else you fail.\n");
//}
//
//// Main function
//int main() {
//    FILE *score;
//    score = fopen("SCORES.txt", "a");
//    if (score == NULL) {
//        printf("Error opening file.");
//        exit(1);
//    }
//
//    // Welcome message
//    system("color 3");
//    printf("\n\n\t\t\t\t  **** WELCOME TO THE ROHIT QUIZ SYSTEM ****\n\n");
//
//    char ready;
//    printf("\t\t\t\t   Are you ready to take the quiz? (Y/N): ");
//    scanf(" %c", &ready);
//    if (toupper(ready) != 'Y') {
//        printf("\n\t\t\t\t  Exiting quiz system. Goodbye!\n");
//        fclose(score);
//        exit(0);
//    }
//    system("cls");
//
//    // Displaying rules
//    Rules();
//    printf("\n\n\t\t\t\t\t Press any key to continue...");
//    getch();
//    system("cls");
//
//    // Student details
//    char name[20];
//    char id[20];
//
//    printf("\n\n\t\t\t\t   Enter your name: ");
//    scanf("%s", name);
//    printf("\t\t\t\t   Enter your ID: ");
//    scanf("%s", id);
//    printf("\n\n\n\t\t\t\t\t   Hi, %s!\n", name);
//    Sleep(1000);
//    system("cls");
//
//    // Choose quiz level
//    printf("\n\n\t\t\t\t\tChoose your level:\n\n");
//    printf("\t\t\t\t  1. C Basic Language\n");
//    printf("\t\t\t\t  2. C Hard Language\n");
//    printf("\n\t\t\t\t  Enter your choice (1/2): ");
//    int levelChoice;
//    scanf("%d", &levelChoice);
//    system("cls");
//
//    switch (levelChoice) {
//        case 1:
//            startCBasicQuiz();
//            break;
//        case 2:
//            startCHardQuiz();
//            break;
//        default:
//            printf("\n\t\t\t\t\tInvalid choice! Please try again.\n");
//            fclose(score);
//            exit(0);
//    }
//
//    // Close the file
//    fclose(score);
//
//    // Admin login
//    char adminUsernameInput[20];
//    char adminPasswordInput[20];
//    printf("\n\n\t\t\t\t  Enter Admin Username: ");
//    scanf("%s", adminUsernameInput);
//    printf("\t\t\t\t  Enter Admin Password: ");
//    scanf("%s", adminPasswordInput);
//
//    if (strcmp(adminUsernameInput, adminUsername) == 0 && strcmp(adminPasswordInput, adminPassword) == 0) {
//        adminPanel();
//    } else {
//        printf("\n\n\t\t\t\t  Incorrect admin username or password. Access denied!\n");
//    }
//
//    return 0;
//}
//
//// Function to start C Basic Language Quiz
//void startCBasicQuiz() {
//    int totalMarks = 0;
//
//    printf("\n\t\t\t\t   **** C Basic Language Quiz ****\n");
//
//    // Question 1
//    printf("\n1. What is the result of 5 + 3 * 8 / 4 - 2?\n");
//    printf("   A. 9\n   B. 10\n   C. 11\n   D. 12\n");
//    printf("Your answer: ");
//    char ans1;
//    scanf(" %c", &ans1);
//    if (toupper(ans1) == 'C') {
//        printf("\nCorrect!\n");
//        totalMarks += 20;
//    } else {
//        printf("\nWrong! The correct answer is C. 11\n");
//    }
//
//    // Question 2
//    printf("\n2. Which of the following is a valid C variable name?\n");
//    printf("   A. my_variable\n   B. 123_variable\n   C. $variable\n   D. variable123\n");
//    printf("Your answer: ");
//    char ans2;
//    scanf(" %c", &ans2);
//    if (toupper(ans2) == 'A')
//    {
//        printf("\nCorrect!\n");
//        totalMarks += 20;
//    }
//    else
//    {
//        printf("\nWrong! The correct answer is A. my_variable\n");
//    }
//
//    // Question 3
//    printf("\n3. How do you declare a constant in C?\n");
//    printf("   A. #define CONSTANT 10\n   B. const int CONSTANT = 10;\n");
//    printf("   C. int CONSTANT = 10;\n   D. constant CONSTANT = 10;\n");
//    printf("Your answer: ");
//    char ans3;
//    scanf(" %c", &ans3);
//    if (toupper(ans3) == 'B')
//    {
//        printf("\nCorrect!\n");
//        totalMarks += 20;
//    }
//    else
//    {
//        printf("\nWrong! The correct answer is B. const int CONSTANT = 10;\n");
//    }
//
//    // Question 4
//    printf("\n4. What is the output of the following code snippet?\n");
//    printf("   #include <stdio.h>\n   int main() {\n");
//    printf("       printf(\"%%d\", sizeof(int));\n       return 0;\n   }\n");
//    printf("   A. 2\n   B. 4\n   C. 8\n   D. Compiler dependent\n");
//    printf("Your answer: ");
//    char ans4;
//    scanf(" %c", &ans4);
//    if (toupper(ans4) == 'D')
//    {
//        printf("\nCorrect!\n");
//        totalMarks += 20;
//    }
//    else
//    {
//        printf("\nWrong! The correct answer is D. Compiler dependent\n");
//    }
//
//    // Question 5
//    printf("\n5. Which keyword is used to exit from a loop in C?\n");
//    printf("   A. break\n   B. exit\n   C. stop\n   D. end\n");
//    printf("Your answer: ");
//    char ans5;
//    scanf(" %c", &ans5);
//    if (toupper(ans5) == 'A')
//    {
//        printf("\nCorrect!\n");
//        totalMarks += 20;
//    }
//    else
//    {
//        printf("\nWrong! The correct answer is A. break\n");
//    }
//
//    // Display total marks
//    printf("\nTotal Marks: %d\n", totalMarks);
//}
//
//// Function to start C Hard Language Quiz
//void startCHardQuiz() {
//    int totalMarks = 0;
//
//    printf("\n\t\t\t\t   **** C Hard Language Quiz ****\n");
//
//    // Question 1
//    printf("\n1. What is the output of the following code snippet?\n");
//    printf("   #include <stdio.h>\n   int main() {\n");
//    printf("       int x = 10;\n       printf(\"%%d\", x++);\n");
//    printf("       printf(\"%%d\", ++x);\n       return 0;\n   }\n");
//    printf("   A. 1011\n   B. 1110\n   C. 1010\n   D. 1101\n");
//    printf("Your answer: ");
//    char ans1;
//    scanf(" %c", &ans1);
//    if (toupper(ans1) == 'A')
//    {
//        printf("\nCorrect!\n");
//        totalMarks += 20;
//    }
//    else
//    {
//        printf("\nWrong! The correct answer is A. 1011\n");
//    }
//
//    // Question 2
//    printf("\n2. What does the 'static' keyword do in C?\n");
//    printf("   A. Allocates memory dynamically\n   B. Makes a variable accessible only within the function where it is declared\n");
//    printf("   C. Preserves the value of a variable between function calls\n   D. Declares a global variable\n");
//    printf("Your answer: ");
//    char ans2;
//    scanf(" %c", &ans2);
//    if (toupper(ans2) == 'C')
//    {
//        printf("\nCorrect!\n");
//        totalMarks += 20;
//    }
//    else
//    {
//        printf("\nWrong! The correct answer is C. Preserves the value of a variable between function calls\n");
//    }
//
//    // Question 3
//    printf("\n3. What is the purpose of the 'volatile' keyword in C?\n");
//    printf("   A. Indicates that a function will not return a value\n   B. Declares a variable that may be modified asynchronously\n");
//    printf("   C. Specifies the maximum number of function arguments\n   D. Declares a variable that cannot be modified\n");
//    printf("Your answer: ");
//    char ans3;
//    scanf(" %c", &ans3);
//    if (toupper(ans3) == 'B')
//    {
//        printf("\nCorrect!\n");
//        totalMarks += 20;
//    }
//    else
//    {
//        printf("\nWrong! The correct answer is B. Declares a variable that may be modified asynchronously\n");
//    }
//
//    // Question 4
//    printf("\n4. What is the output of the following code snippet?\n");
//    printf("   #include <stdio.h>\n   int main() {\n");
//    printf("       int arr[] = {1, 2, 3, 4, 5};\n       printf(\"%%d\", *arr);\n");
//    printf("       printf(\"%%d\", *(arr + 1));\n       return 0;\n   }\n");
//    printf("   A. 12345\n   B. 11223344\n   C. 123\n   D. 12\n");
//    printf("Your answer: ");
//    char ans4;
//    scanf(" %c", &ans4);
//    if (toupper(ans4) == 'A')
//    {
//        printf("\nCorrect!\n");
//        totalMarks += 20;
//    }
//    else
//    {
//        printf("\nWrong! The correct answer is A. 12345\n");
//    }
//
//    // Question 5
//    printf("\n5. What is the purpose of the 'typedef' keyword in C?\n");
//    printf("   A. Declares a new type name\n   B. Defines a macro\n");
//    printf("   C. Declares a function prototype\n   D. Specifies the size of a variable\n");
//    printf("Your answer: ");
//    char ans5;
//    scanf(" %c", &ans5);
//    if (toupper(ans5) == 'A')
//    {
//        printf("\nCorrect!\n");
//        totalMarks += 20;
//    }
//    else
//    {
//        printf("\nWrong! The correct answer is A. Declares a new type name\n");
//    }
//
//    // Display total marks
//    printf("\nTotal Marks: %d\n", totalMarks);
//}
//
//// Function for admin panel
//// Function for admin panel
//void adminPanel() {
//    FILE *score;
//    score = fopen("SCORES.txt", "r");
//    if (score == NULL) {
//        printf("\nNo scores recorded yet!\n");
//        return;
//    }
//
//    printf("\n\n\t\t\t\t   **** ADMIN PANEL ****\n\n");
//    printf("Student\t\tID\t\tMarks\t\tStatus\n");
//    printf("--------------------------------------------\n");
//
//    char name[20];
//    char id[20];
//    int marks;
//    while (fscanf(score, "%s %s %d", name, id, &marks) != EOF) {
//        printf("%s\t\t%s\t\t%d\t\t%s\n", name, id, marks, (marks >= 60) ? "Pass" : "Fail");
//    }
//
//    // Close the file
//    fclose(score);
//}
//new code
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <windows.h>

// Function prototypes
void startCBasicQuiz(FILE *scoreFile, const char* name, const char* id);
void startCHardQuiz(FILE *scoreFile, const char* name, const char* id);
void adminPanel();
void deleteScores();

// Admin credentials
const char adminUsername[] = "admin";
const char adminPassword[] = "password";

// Function to display rules
void Rules() {
    system("cls");
    printf("\n\n\t\t\t\t   *** Quiz Rules ***\n\n");
    printf("1. There are 5 questions in each quiz.\n");
    printf("2. Each question carries 20 marks.\n");
    printf("3. Answer all questions correctly to pass.\n");
    printf("4. If marks are greater than or equal to 60, you pass; else you fail.\n");
}

// Main function
int main() {
    FILE *scoreFile;
    scoreFile = fopen("SCORES.txt", "a");
    if (scoreFile == NULL) {
        printf("Error opening file.");
        exit(1);
    }

    // Welcome message
    system("color 3");
    printf("\n\n\t\t\t\t  **** WELCOME TO THE ROHIT QUIZ SYSTEM ****\n\n");

    char ready;
    printf("\t\t\t\t   Are you ready to take the quiz? (Y/N): ");
    scanf(" %c", &ready);
    if (toupper(ready) != 'Y') {
        printf("\n\t\t\t\t  Exiting quiz system. Goodbye!\n");
        fclose(scoreFile);
        exit(0);
    }
    system("cls");

    // Displaying rules
    Rules();
    printf("\n\n\t\t\t\t\t Press any key to continue...");
    getch();
    system("cls");

    // Student details
    char name[20];
    char id[20];

    printf("\n\n\t\t\t\t   Enter your name: ");
    scanf("%s", name);
    printf("\t\t\t\t   Enter your ID: ");
    scanf("%s", id);
    printf("\n\n\n\t\t\t\t\t   Hi, %s!\n", name);
    Sleep(1000);
    system("cls");

    // Choose quiz level
    printf("\n\n\t\t\t\t\tChoose your level:\n\n");
    printf("\t\t\t\t  1. C Basic Language\n");
    printf("\t\t\t\t  2. C Hard Language\n");
    printf("\n\t\t\t\t  Enter your choice (1/2): ");
    int levelChoice;
    scanf("%d", &levelChoice);
    system("cls");

    switch (levelChoice) {
        case 1:
            startCBasicQuiz(scoreFile, name, id);
            break;
        case 2:
            startCHardQuiz(scoreFile, name, id);
            break;
        default:
            printf("\n\t\t\t\t\tInvalid choice! Please try again.\n");
            fclose(scoreFile);
            exit(0);
    }

    // Close the file
    fclose(scoreFile);

    // Admin login
    char adminUsernameInput[20];
    char adminPasswordInput[20];
    printf("\n\n\t\t\t\t  Enter Admin Username: ");
    scanf("%s", adminUsernameInput);
    printf("\t\t\t\t  Enter Admin Password: ");
    scanf("%s", adminPasswordInput);

    if (strcmp(adminUsernameInput, adminUsername) == 0 && strcmp(adminPasswordInput, adminPassword) == 0) {
        adminPanel();
    } else {
        printf("\n\n\t\t\t\t  Incorrect admin username or password. Access denied!\n");
    }

    return 0;
}

// Function to start C Basic Language Quiz
void startCBasicQuiz(FILE *scoreFile, const char* name, const char* id) {
    int totalMarks = 0;

    printf("\n\t\t\t\t   **** C Basic Language Quiz ****\n");

    // Question 1
    printf("\n1. What is the result of 5 + 3 * 8 / 4 - 2?\n");
    printf("   A. 9\n   B. 10\n   C. 11\n   D. 12\n");
    printf("Your answer: ");
    char ans1;
    scanf(" %c", &ans1);
    if (toupper(ans1) == 'C') {
        printf("\nCorrect!\n");
        totalMarks += 20;
    } else {
        printf("\nWrong! The correct answer is C. 11\n");
    }

    // Question 2
    printf("\n2. Which of the following is a valid C variable name?\n");
    printf("   A. my_variable\n   B. 123_variable\n   C. $variable\n   D. variable123\n");
    printf("Your answer: ");
    char ans2;
    scanf(" %c", &ans2);
    if (toupper(ans2) == 'A') {
        printf("\nCorrect!\n");
        totalMarks += 20;
    } else {
        printf("\nWrong! The correct answer is A. my_variable\n");
    }

    // Question 3
    printf("\n3. How do you declare a constant in C?\n");
    printf("   A. #define CONSTANT 10\n   B. const int CONSTANT = 10;\n");
    printf("   C. int CONSTANT = 10;\n   D. constant CONSTANT = 10;\n");
    printf("Your answer: ");
    char ans3;
    scanf(" %c", &ans3);
    if (toupper(ans3) == 'B') {
        printf("\nCorrect!\n");
        totalMarks += 20;
    } else {
        printf("\nWrong! The correct answer is B. const int CONSTANT = 10;\n");
    }

    // Question 4
    printf("\n4. What is the output of the following code snippet?\n");
    printf("   #include <stdio.h>\n   int main() {\n");
    printf("       printf(\"%%d\", sizeof(int));\n       return 0;\n   }\n");
    printf("   A. 2\n   B. 4\n   C. 8\n   D. Compiler dependent\n");
    printf("Your answer: ");
    char ans4;
    scanf(" %c", &ans4);
    if (toupper(ans4) == 'D') {
        printf("\nCorrect!\n");
        totalMarks += 20;
    } else {
        printf("\nWrong! The correct answer is D. Compiler dependent\n");
    }

    // Question 5
    printf("\n5. Which keyword is used to exit from a loop in C?\n");
    printf("   A. break\n   B. exit\n   C. stop\n   D. end\n");
    printf("Your answer: ");
    char ans5;
    scanf(" %c", &ans5);
    if (toupper(ans5) == 'A') {
        printf("\nCorrect!\n");
        totalMarks += 20;
    } else {
        printf("\nWrong! The correct answer is A. break\n");
    }

    // Display total marks
    printf("\nTotal Marks: %d\n", totalMarks);

    // Write the student's details and score to the file
    fprintf(scoreFile, "%s %s %d\n", name, id, totalMarks);
}

// Function to start C Hard Language Quiz
void startCHardQuiz(FILE *scoreFile, const char* name, const char* id) {
    int totalMarks = 0;

    printf("\n\t\t\t\t   **** C Hard Language Quiz ****\n");

    // Question 1
    printf("\n1. What is the output of the following code snippet?\n");
    printf("   #include <stdio.h>\n   int main() {\n");
    printf("       int x = 10;\n       printf(\"%%d\", x++);\n");
    printf("       printf(\"%%d\", ++x);\n       return 0;\n   }\n");
    printf("   A. 1011\n   B. 1110\n   C. 1010\n   D. 1101\n");
    printf("Your answer: ");
    char ans1;
    scanf(" %c", &ans1);
    if (toupper(ans1) == 'A') {
        printf("\nCorrect!\n");
        totalMarks += 20;
    } else {
        printf("\nWrong! The correct answer is A. 1011\n");
    }

    // Question 2
    printf("\n2. What does the 'static' keyword do in C?\n");
    printf("   A. Allocates memory dynamically\n   B. Makes a variable accessible only within the function where it is declared\n");
    printf("   C. Preserves the value of a variable between function calls\n   D. Declares a global variable\n");
    printf("Your answer: ");
    char ans2;
    scanf(" %c", &ans2);
    if (toupper(ans2) == 'C') {
        printf("\nCorrect!\n");
        totalMarks += 20;
    } else {
        printf("\nWrong! The correct answer is C. Preserves the value of a variable between function calls\n");
    }

    // Question 3
    printf("\n3. What is the purpose of the 'volatile' keyword in C?\n");
    printf("   A. Indicates that a function will not return a value\n   B. Declares a variable that may be modified asynchronously\n");
    printf("   C. Specifies the maximum number of function arguments\n   D. Declares a variable that cannot be modified\n");
    printf("Your answer: ");
    char ans3;
    scanf(" %c", &ans3);
    if (toupper(ans3) == 'B') {
        printf("\nCorrect!\n");
        totalMarks += 20;
    } else {
        printf("\nWrong! The correct answer is B. Declares a variable that may be modified asynchronously\n");
    }

    // Question 4
    printf("\n4. What is the output of the following code snippet?\n");
    printf("   #include <stdio.h>\n   int main() {\n");
    printf("       int arr[] = {1, 2, 3, 4, 5};\n       printf(\"%%d\", *arr);\n");
    printf("       printf(\"%%d\", *(arr + 1));\n       return 0;\n   }\n");
    printf("   A. 12345\n   B. 11223344\n   C. 123\n   D. 12\n");
    printf("Your answer: ");
    char ans4;
    scanf(" %c", &ans4);
    if (toupper(ans4) == 'D') {
        printf("\nCorrect!\n");
        totalMarks += 20;
    } else {
        printf("\nWrong! The correct answer is D. 12\n");
    }

    // Question 5
    printf("\n5. What is the purpose of the 'typedef' keyword in C?\n");
    printf("   A. Declares a new type name\n   B. Defines a macro\n");
    printf("   C. Declares a function prototype\n   D. Specifies the size of a variable\n");
    printf("Your answer: ");
    char ans5;
    scanf(" %c", &ans5);
    if (toupper(ans5) == 'A') {
        printf("\nCorrect!\n");
        totalMarks += 20;
    } else {
        printf("\nWrong! The correct answer is A. Declares a new type name\n");
    }

    // Display total marks
    printf("\nTotal Marks: %d\n", totalMarks);

    // Write the student's details and score to the file
    fprintf(scoreFile, "%s %s %d\n", name, id, totalMarks);
}

// Function for admin panel
void adminPanel() {
    FILE *scoreFile;
    char choice;
    do {
        printf("\n\n\t\t\t\t   **** ADMIN PANEL ****\n\n");
        printf("1. View Scores\n");
        printf("2. Delete All Entries\n");
        printf("3. Exit Admin Panel\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                scoreFile = fopen("SCORES.txt", "r");
                if (scoreFile == NULL) {
                    printf("\nNo scores recorded yet!\n");
                    break;
                }

                printf("\n\n\t\t\t\t   **** SCORES ****\n\n");
                printf("Student\t\tID\t\tMarks\t\tStatus\n");
                printf("--------------------------------------------\n");

                char name[20];
                char id[20];
                int marks;
                while (fscanf(scoreFile, "%s %s %d", name, id, &marks) != EOF) {
                    if (marks >= 60) {
                        printf("%s\t\t%s\t\t%d\t\t\033[1;32m%s\033[0m\n", name, id, marks, "Pass");
                    } else {
                        printf("%s\t\t%s\t\t%d\t\t\033[1;31m%s\033[0m\n", name, id, marks, "Fail");
                    }
                }
                fclose(scoreFile);
                break;

            case '2':
                deleteScores();
                break;

            case '3':
                printf("\nExiting Admin Panel.\n");
                return;

            default:
                printf("\nInvalid choice! Please try again.\n");
                break;
        }
    } while (choice != '3');
}

// Function to delete scores
void deleteScores() {
    FILE *scoreFile;
    scoreFile = fopen("SCORES.txt", "w");
    if (scoreFile == NULL) {
        printf("\nError opening file.\n");
        return;
    }
    fclose(scoreFile);
    printf("\nAll scores have been deleted!\n");
}

