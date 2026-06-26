#include <stdio.h>

int main()
{
    int score = 0;
    int answer;

    printf("===== QUIZ APPLICATION =====\n\n");

    // Question 1
    printf("1. Which language is used for system programming?\n");
    printf("1. Python\n2. C\n3. Java\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is C\n\n");
    }

    // Question 2
    printf("2. Which is the largest planet in our solar system?\n");
    printf("1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is Jupiter\n\n");
    }

    // Question 3
    printf("3. How many continents are there in the world?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 7\n\n");
    }

    // Question 4
    printf("4. Which symbol is used for comments in C?\n");
    printf("1. //\n2. ##\n3. <!-- -->\n4. **\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is //\n\n");
    }

    // Question 5
    printf("5. Which function is used to print output in C?\n");
    printf("1. scanf()\n2. printf()\n3. input()\n4. display()\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is printf()\n\n");
    }

    printf("===== QUIZ RESULT =====\n");
    printf("Your Score: %d/5\n", score);

    if(score >= 4)
        printf("Excellent Performance!");
    else if(score >= 2)
        printf("Good Try!");
    else
        printf("Need More Practice!");

    return 0;
}