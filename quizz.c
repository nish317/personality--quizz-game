#include <stdio.h>

int main()
{
    char name[50];
    char choice;
    int introvert = 0, extrovert = 0, ambivert = 0;

    printf("*************************************\n");
    printf("      PERSONALITY QUEST GAME\n");
    printf("*************************************\n");

    printf("Enter your name: ");
    scanf("%s", name);

    printf("\nHello %s!\n", name);
    printf("Welcome to this small personality quizz game.");
    printf("Answer each question with A, B, or C.\n\n");

    // Question 1
    printf("Q1. At a party, you usually:\n");
    printf("A. Stay with close friends\n");
    printf("B. Meet lots of new people\n");
    printf("C. Depends on your mood\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 2
    printf("\nQ2. How do you recharge?\n");
    printf("A. Spend time alone\n");
    printf("B. Spend time with people\n");
    printf("C. Both equally\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 3
    printf("\nQ3. Weekend plan?\n");
    printf("A. Read or watch movies\n");
    printf("B. Go out with friends\n");
    printf("C. Mix of both\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 4
    printf("\nQ4. Starting conversations is:\n");
    printf("A. Difficult\n");
    printf("B. Easy\n");
    printf("C. Depends on situation\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 5
    printf("\nQ5. In a team project you:\n");
    printf("A. Work quietly\n");
    printf("B. Lead discussions\n");
    printf("C. Do both\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 6
    printf("\nQ6. Ideal vacation:\n");
    printf("A. Peaceful cabin\n");
    printf("B. Busy tourist city\n");
    printf("C. Combination of both\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 7
    printf("\nQ7. You prefer:\n");
    printf("A. A few close friends\n");
    printf("B. Many friends\n");
    printf("C. Both\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 8
    printf("\nQ8. Public speaking:\n");
    printf("A. Makes you nervous\n");
    printf("B. Excites you\n");
    printf("C. Comfortable sometimes\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 9
    printf("\nQ9. When solving problems:\n");
    printf("A. Think alone\n");
    printf("B. Discuss with others\n");
    printf("C. Both methods\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 10
    printf("\nQ10. You enjoy:\n");
    printf("A. Quiet activities\n");
    printf("B. Social activities\n");
    printf("C. Both equally\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 11
    printf("\nQ11. New people:\n");
    printf("A. Take time to know them\n");
    printf("B. Talk immediately\n");
    printf("C. Depends\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 12
    printf("\nQ12. In class or office:\n");
    printf("A. Observe quietly\n");
    printf("B. Participate actively\n");
    printf("C. Mix of both\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 13
    printf("\nQ13. Phone calls:\n");
    printf("A. Prefer texting\n");
    printf("B. Prefer calling\n");
    printf("C. Both okay\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 14
    printf("\nQ14. Your energy comes from:\n");
    printf("A. Alone time\n");
    printf("B. Social interactions\n");
    printf("C. Both\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 15
    printf("\nQ15. At events you:\n");
    printf("A. Stay in the background\n");
    printf("B. Be the center of attention\n");
    printf("C. Switch between both\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 16
    printf("\nQ16. You learn best by:\n");
    printf("A. Self-study\n");
    printf("B. Group discussions\n");
    printf("C. Both\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 17
    printf("\nQ17. Free time means:\n");
    printf("A. Personal hobbies\n");
    printf("B. Hanging out\n");
    printf("C. Both\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 18
    printf("\nQ18. You are usually:\n");
    printf("A. Reserved\n");
    printf("B. Outgoing\n");
    printf("C. Balanced\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 19
    printf("\nQ19. In meetings:\n");
    printf("A. Listen more\n");
    printf("B. Speak more\n");
    printf("C. Equal amount\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    // Question 20
    printf("\nQ20. Which describes you best?\n");
    printf("A. Thoughtful\n");
    printf("B. Energetic\n");
    printf("C. Flexible\n");
    scanf(" %c", &choice);
    if(choice=='A'||choice=='a') introvert++;
    else if(choice=='B'||choice=='b') extrovert++;
    else ambivert++;

    printf("\n=====================================\n");
    printf("            FINAL RESULT\n");
    printf("=====================================\n");

    printf("Introvert Score : %d\n", introvert);
    printf("Extrovert Score : %d\n", extrovert);
    printf("Ambivert Score  : %d\n\n", ambivert);

    if(introvert >= extrovert && introvert >= ambivert)
    {
        printf("PERSONALITY TYPE: INTROVERT\n\n");

        printf("Your Strengths:\n");
        printf("- Deep Thinker\n");
        printf("- Excellent Listener\n");
        printf("- Independent\n");
        printf("- Creative and Focused\n\n");

        printf("Best Careers:\n");
        printf("- Software Developer\n");
        printf("- Writer\n");
        printf("- Scientist\n");
        printf("- Designer\n");
        printf("- Researcher\n\n");

        printf("Fun Fact:\n");
        printf("You gain energy from quiet time and meaningful conversations.\n");
    }
    else if(extrovert >= introvert && extrovert >= ambivert)
    {
        printf("PERSONALITY TYPE: EXTROVERT\n\n");

        printf("Your Strengths:\n");
        printf("- Confident\n");
        printf("- Great Communicator\n");
        printf("- Team Player\n");
        printf("- Motivator\n\n");

        printf("Best Careers:\n");
        printf("- Entrepreneur\n");
        printf("- Teacher\n");
        printf("- Sales Manager\n");
        printf("- Public Speaker\n");
        printf("- Marketing Specialist\n\n");

        printf("Fun Fact:\n");
        printf("You gain energy from meeting people and trying new experiences.\n");
    }
    else
    {
        printf("PERSONALITY TYPE: AMBIVERT\n\n");

        printf("Your Strengths:\n");
        printf("- Adaptable\n");
        printf("- Balanced\n");
        printf("- Good Leader\n");
        printf("- Good Listener\n\n");

        printf("Best Careers:\n");
        printf("- Manager\n");
        printf("- Consultant\n");
        printf("- HR Professional\n");
        printf("- Business Analyst\n");
        printf("- Project Leader\n\n");

        printf("Fun Fact:\n");
        printf("You enjoy both social interaction and personal time.\n");
    }

    printf("\nThank you for playing Personality Quest!\n");

    return 0;
}