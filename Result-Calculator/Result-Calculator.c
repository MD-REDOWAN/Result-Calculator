/*Write a C program to input marks in 5 subjects:
Physics, Chemistry, Biology, Mathematics, and Computer with a total mark of 50.
Calculate the percentage and grade according to the following:
Percentage >= 90% : Grade A point 5
Percentage >= 80% : Grade B point 4
Percentage >= 70% : Grade C point 3
Percentage >= 60% : Grade D point 2
Percentage >= 40% : Grade E point 1
Percentage < 40%  : Grade F point 0

make sure there is no negative numbers.

Output sample:
Subject name || Number || Percentage || Grade || Point
  Physics    ||   34   ||    68%     ||   D   ||   2
    -        ||   -    ||     -      ||   -   ||   -
    -        ||   -    ||     -      ||   -   ||   -
    -        ||   -    ||     -      ||   -   ||   -
    -        ||   -    ||     -      ||   -   ||   -
   Total     ||   -    ||     -      ||   -   ||   -        */

#include <stdio.h>
int main()
{
    float p, che, b, m, com, per_p, per_che, per_b, per_m, per_com, t_num, t_per;
    char grade_p, grade_che, grade_b, grade_m, grade_com, t_grade;
    int point_p, point_che, point_b, point_m, point_com, t_point;
    // taking input of all subjects
    printf("Enter marks of Physics:");
    scanf("%f", &p);
    while (p > 50 || p < 0)
    {
        printf("Invalid number, Enter between 0-50 range: ");
        scanf("%f", &p);
    }

    printf("Enter marks of Chemistry:");
    scanf("%f", &che);
    while (che > 50 || che < 0)
    {
        printf("Invalid number, Enter between 0-50 range: ");
        scanf("%f", &che);
    }

    printf("Enter marks of Biology:");
    scanf("%f", &b);
    while (b > 50 || b < 0)
    {
        printf("Invalid number, Enter between 0-50 range: ");
        scanf("%f", &b);
    }

    printf("Enter marks of Mathematics:");
    scanf("%f", &m);
    while (m > 50 || m < 0)
    {
        printf("Invalid number, Enter between 0-50 range: ");
        scanf("%f", &m);
    }

    printf("Enter marks of Computer:");
    scanf("%f", &com);
    while (com > 50 || com < 0)
    {
        printf("Invalid number, Enter between 0-50 range: ");
        scanf("%f", &com);
    }

    // calculating the percentage
    per_p = (p / 50) * 100;
    per_che = (che / 50) * 100;
    per_b = (b / 50) * 100;
    per_m = (m / 50) * 100;
    per_com = (com / 50) * 100;

    // Physics
    if (per_p >= 90 && per_p <= 100)
        grade_p = 'A', point_p = 5;
    if (per_p >= 80 && per_p <= 89)
        grade_p = 'B', point_p = 4;
    if (per_p >= 70 && per_p <= 79)
        grade_p = 'C', point_p = 3;
    if (per_p >= 60 && per_p <= 69)
        grade_p = 'D', point_p = 2;
    if (per_p >= 40 && per_p <= 59)
        grade_p = 'E', point_p = 1;
    if (per_p < 40)
        grade_p = 'F', point_p = 0;

    // Chemistry
    if (per_che >= 90 && per_che <= 100)
        grade_che = 'A', point_che = 5;
    if (per_che >= 80 && per_che <= 89)
        grade_che = 'B', point_che = 4;
    if (per_che >= 70 && per_che <= 79)
        grade_che = 'C', point_che = 3;
    if (per_che >= 60 && per_che <= 69)
        grade_che = 'D', point_che = 2;
    if (per_che >= 40 && per_che <= 59)
        grade_che = 'E', point_che = 1;
    if (per_che < 40)
        grade_che = 'F', point_che = 0;

    // Biology
    if (per_b >= 90 && per_b <= 100)
        grade_b = 'A', point_b = 5;
    if (per_b >= 80 && per_b <= 89)
        grade_b = 'B', point_b = 4;
    if (per_b >= 70 && per_b <= 79)
        grade_b = 'C', point_b = 3;
    if (per_b >= 60 && per_b <= 69)
        grade_b = 'D', point_b = 2;
    if (per_b >= 40 && per_b <= 59)
        grade_b = 'E', point_b = 1;
    if (per_b < 40)
        grade_b = 'F', point_b = 0;

    // Mathematics
    if (per_m >= 90 && per_m <= 100)
        grade_m = 'A', point_m = 5;
    if (per_m >= 80 && per_m <= 89)
        grade_m = 'B', point_m = 4;
    if (per_m >= 70 && per_m <= 79)
        grade_m = 'C', point_m = 3;
    if (per_m >= 60 && per_m <= 69)
        grade_m = 'D', point_m = 2;
    if (per_m >= 40 && per_m <= 59)
        grade_m = 'E', point_m = 1;
    if (per_m < 40)
        grade_m = 'F', point_m = 0;

    // Computer
    if (per_com >= 90 && per_com <= 100)
        grade_com = 'A', point_com = 5;
    if (per_com >= 80 && per_com <= 89)
        grade_com = 'B', point_com = 4;
    if (per_com >= 70 && per_com <= 79)
        grade_com = 'C', point_com = 3;
    if (per_com >= 60 && per_com <= 69)
        grade_com = 'D', point_com = 2;
    if (per_com >= 40 && per_com <= 59)
        grade_com = 'E', point_com = 1;
    if (per_com < 40)
        grade_com = 'F', point_com = 0;

    t_num = p + che + b + m + com;
    t_per = (t_num / 250) * 100;

    // Total grade
    if (t_per >= 90 && t_per <= 100)
        t_grade = 'A', t_point = 5;
    if (t_per >= 80 && t_per <= 89)
        t_grade = 'B', t_point = 4;
    if (t_per >= 70 && t_per <= 79)
        t_grade = 'C', t_point = 3;
    if (t_per >= 60 && t_per <= 69)
        t_grade = 'D', t_point = 2;
    if (t_per >= 40 && t_per <= 59)
        t_grade = 'E', t_point = 1;
    if (t_per < 40)
        t_grade = 'F', t_point = 0;

    printf("Subject name || Number || Percentage || Grade || Point\n");
    printf("Physics      || %.2f || %.2f%% || %c || %d\n", p, per_p, grade_p, point_p);
    printf("Chemistry    || %.2f || %.2f%% || %c || %d\n", che, per_che, grade_che, point_che);
    printf("Biology      || %.2f || %.2f%% || %c || %d\n", b, per_b, grade_b, point_b);
    printf("Mathematics  || %.2f || %.2f%% || %c || %d\n", m, per_m, grade_m, point_m);
    printf("Computer     || %.2f || %.2f%% || %c || %d\n\n", com, per_com, grade_com, point_com);
    printf("Total        || %.2f || %.2f%% || %c || %d\n", t_num, t_per, t_grade, t_point);

    return 0;
}
