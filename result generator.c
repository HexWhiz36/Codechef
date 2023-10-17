#include<stdio.h>
struct std
{
    char name[20];
    char grade[2];
    float cgpa;
    int ID;
    float CGPA;
};
void displayMeritPosition(struct std students[], int numStudents,int idStudents)
{

    printf("Displaying merit positions...\n");
    printf("\n");


    for (int i = 0; i < numStudents - 1; i++)
    {
        for (int j = 0; j < numStudents - i - 1; j++)
        {
            if (students[j].CGPA < students[j + 1].CGPA)
            {
                struct std temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("Merit Position\tName\t\tID\t\tCGPA\n");
    printf("\n");
    for (int i = 0; i < numStudents; i++)
    {
        if(students[i].CGPA>4.00)
        {
            printf("invalid input\n");
        }
        else
        {
            printf("%d\t\t%s\t\t%d\t\t%.2f\n", i + 1, students[i].name,students[i].ID, students[i].CGPA);
        }
    }
}
int main()
{
    printf("Team : Sign-In\n");
    printf("Members :\n");
    printf("1.Masud Rana Nayeem\n");
    printf("2.Md. Sazzadul Islam Shaon\n");
    printf("3.S M Sadman Al Siam\n");
    printf("4.Md Mubarak Hossain Mubarak\n");
    int press;
    do
    {
        printf("\n");
        printf("\n");
        printf("\n");



        printf("                                          **********************\n");
        printf("                                          *  Result Generator  *\n");
        printf("                                          **********************\n");
        printf("                        ------------------------------------------------------------\n");
        printf("                        |                                                           |\n");
        printf("                        |  1.Show the marks against all subjects       [Press-1]    |\n");
        printf("                        |  2.Show the students ID and the grade        [Press-2]    |\n");
        printf("                        |  3.Show all merit position                   [Press-3]    |\n");
        printf("                        |  4.Show how much students got which grade    [Press-4]    |\n");
        printf("                        |                                                           |\n");
        printf("                        ------------------------------------------------------------\n");


        printf("\n");
        printf("                        Enter your choice : ");
        scanf("%d",&press);
        printf("\n");

        double m, p, pL, ph, phL, e, mark;
        double MAT, PPS, PPSL, PHY, PHYL, ENG;


        if(press==1)
        {
            printf("Enter Your Marks \n");
            printf("\n");
            printf("MAT_121 : ");
            scanf("%lf",&m);
            printf("CSE_122 : ");
            scanf("%lf",&p);
            printf("CSE_123 : ");
            scanf("%lf",&pL);
            printf("PHY_123 : ");
            scanf("%lf",&ph);
            printf("PHY_124 : ");
            scanf("%lf",&phL);
            printf("ENG_123 : ");
            scanf("%lf",&e);

            mark=(m+p+pL+ph+phL+e);



            if(m<=100 && m>=80)
            {
                MAT = 4.00;
            }
            else if(m<=79 && m>=75)
            {
                MAT = 3.75;
            }
            else if(m<=74 && m>=70)
            {
                MAT = 3.50;
            }
            else if(m<=69 && m>=65)
            {
                MAT = 3.25;
            }
            else if(m<=64 && m>=60)
            {
                MAT = 3.00;
            }
            else if(m<=59 && m>=55)
            {
                MAT = 2.75;
            }
            else if(m<=54 && m>=50)
            {
                MAT = 2.50;
            }
            else if(m<=49 && m>=45)
            {
                MAT = 2.25;
            }
            else if(m<=44 && m>=40)
            {
                MAT = 2.00;
            }
            else if(m<40)
            {
                MAT = 0.00;
            }


            if(p<=100 && p>=80)
            {
                PPS = 4.00;
            }
            else if(p<=79 && p>=75)
            {
                PPS = 3.75;
            }
            else if(p<=74 && p>=70)
            {
                PPS = 3.50;
            }
            else if(p<=69 && p>=65)
            {
                PPS = 3.25;
            }
            else if(p<=64 && p>=60)
            {
                PPS = 3.00;
            }
            else if(p<=59 && p>=55)
            {
                PPS = 2.75;
            }
            else if(p<=54 && p>=50)
            {
                PPS = 2.50;
            }
            else if(p<=49 && p>=45)
            {
                PPS = 2.25;
            }
            else if(p<=44 && p>=40)
            {
                PPS = 2.00;
            }
            else if(p<40)
            {
                PPS = 0.00;
            }



            if(pL<=100 && pL>=80)
            {
                PPSL = 4.00;
            }
            else if(pL<=79 && pL>=75)
            {
                PPSL = 3.75;
            }
            else if(pL<=74 && pL>=70)
            {
                PPSL = 3.50;
            }
            else if(pL<=69 && pL>=65)
            {
                PPSL = 3.25;
            }
            else if(pL<=64 && pL>=60)
            {
                PPSL = 3.00;
            }
            else if(pL<=59 && pL>=55)
            {
                PPSL = 2.75;
            }
            else if(pL<=54 && pL>=50)
            {
                PPSL = 2.50;
            }
            else if(pL<=49 && pL>=45)
            {
                PPSL = 2.25;
            }
            else if(pL<=44 && pL>=40)
            {
                PPSL = 2.00;
            }
            else if(pL<40)
            {
                PPSL = 0.00;
            }


            if(ph<=100 && ph>=80)
            {
                PHY = 4.00;
            }
            else if(ph<=79 && ph>=75)
            {
                PHY = 3.75;
            }
            else if(ph<=74 && ph>=70)
            {
                PHY = 3.50;
            }
            else if(ph<=69 && ph>=65)
            {
                PHY = 3.25;
            }
            else if(ph<=64 && ph>=60)
            {
                PHY = 3.00;
            }
            else if(ph<=59 && ph>=55)
            {
                PHY = 2.75;
            }
            else if(ph<=54 && ph>=50)
            {
                PHY = 2.50;
            }
            else if(ph<=49 && ph>=45)
            {
                PHY = 2.25;
            }
            else if(ph<=44 && ph>=40)
            {
                PHY = 2.00;
            }
            else if(ph<40)
            {
                PHY = 0.00;
            }


            if(phL<=100 && phL>=80)
            {
                PHYL = 4.00;
            }
            else if(phL<=79 && phL>=75)
            {
                PHYL = 3.75;
            }
            else if(phL<=74 && phL>=70)
            {
                PHYL = 3.50;
            }
            else if(phL<=69 && phL>=65)
            {
                PHYL = 3.25;
            }
            else if(phL<=64 && phL>=60)
            {
                PHYL = 3.00;
            }
            else if(phL<=59 && phL>=55)
            {
                PHYL = 2.75;
            }
            else if(phL<=54 && phL>=50)
            {
                PHYL = 2.50;
            }
            else if(phL<=49 && phL>=45)
            {
                PHYL = 2.25;
            }
            else if(phL<=44 && phL>=40)
            {
                PHYL = 2.00;
            }
            else if(phL<40)
            {
                PHYL = 0.00;
            }


            if(e<=100 && e>=80)
            {
                ENG = 4.00;
            }
            else if(e<=79 && e>=75)
            {
                ENG = 3.75;
            }
            else if(e<=74 && e>=70)
            {
                ENG = 3.50;
            }
            else if(e<=69 && e>=65)
            {
                ENG = 3.25;
            }
            else if(e<=64 && e>=60)
            {
                ENG = 3.00;
            }
            else if(e<=59 && e>=55)
            {
                ENG = 2.75;
            }
            else if(e<=54 && e>=50)
            {
                ENG = 2.50;
            }
            else if(e<=49 && e>=45)
            {
                ENG = 2.25;
            }
            else if(e<=44 && e>=40)
            {
                ENG = 2.00;
            }
            else if(e<40)
            {
                ENG = 0.00;
            }

            double a,b,c,d,e,f,gpa,cgpa;

            a= MAT*3;
            b= PPS*3;
            c= PPSL*1;
            d= PHY*3;
            e= PHYL*1;
            f= ENG*1;
            gpa= (a+b+c+d+e+f);

            if(a==0.00 || b==0.00 || c==0.00 || d==0.00 || e==0.00 ||  f==0.00)
            {
                gpa= 0.00;

            }

            cgpa= gpa/12;

            printf("\n");
            printf("\n");
            printf("\n");

            printf("|----------------------------------------|\n");

            printf("|                                        |\n");


            if (cgpa==4.00)
            {
                printf("|  Your grade is : A+                    |\n");
            }
            else if (cgpa>=3.75 && cgpa<4.00)
            {
                printf("|  Your grade is : A                     |\n");
            }
            else if (cgpa>=3.50 && cgpa<3.75)
            {
                printf("|  Your grade is : A-                    |\n");
            }
            else if (cgpa>=3.25 && cgpa<3.50)
            {
                printf("|  Your grade is : B+                    |\n");
            }
            else if (cgpa>=3.00 && cgpa<3.25)
            {
                printf("|  Your grade is : B                     |\n");
            }
            else if (cgpa>=2.75 && cgpa<3.00)
            {
                printf("|  Your grade is : B-                    |\n");
            }
            else if (cgpa>=2.50 && cgpa<2.75)
            {
                printf("|  Your grade is : C+                    |\n");
            }
            else if (cgpa>=2.25 && cgpa<2.50)
            {
                printf("|  Your grade is : C                     |\n");
            }
            else if (cgpa>=2.00 && cgpa<2.25)
            {
                printf("|  Your grade is : D                     |\n");
            }
            else if (cgpa==0.00)
            {
                printf("|  You have failed.                      |\n");
            }

            printf("|                                        |\n");
            printf("|  Your CGPA is : %.2lf                   |\n",cgpa);
            printf("|                                        |\n");
            printf("|  Your total mark is : %.2lf           |\n",mark);
            printf("|                                        |\n");
            printf("|----------------------------------------|\n");

            printf("\n");
            printf("\n");
            printf("\n");

        }

        if(press==2)

        {
            printf("\n");
            printf("\n");

            printf("Enter The Student ID : ");
            int id;
            struct std s[40];
            scanf("%d",&id);

            printf("\n");
            printf("\n");
            printf("\n");


            printf("--------------------------------------------------\n");
            printf("|       Name         |     Grade     |    CGPA    |\n");
            printf("--------------------------------------------------\n");
            if(id==1849)
            {
                strcpy(s[0].name,"Nayeem");
                strcpy(s[0].grade,"A+");
                s[0].cgpa= 4.00;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1028)
            {
                strcpy(s[0].name,"Shaon");
                strcpy(s[0].grade,"A+");
                s[0].cgpa= 4.00;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1123)
            {
                strcpy(s[0].name,"Siam");
                strcpy(s[0].grade,"A+");
                s[0].cgpa= 4.00;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1027)
            {
                strcpy(s[0].name,"Mubarak");
                strcpy(s[0].grade,"A+");
                s[0].cgpa= 4.00;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1036)
            {
                strcpy(s[0].name,"Nabil");
                strcpy(s[0].grade,"A+");
                s[0].cgpa= 4.00;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1233)
            {
                strcpy(s[0].name,"Assaduzzaman");
                strcpy(s[0].grade,"A+");
                s[0].cgpa= 4.00;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1259)
            {
                strcpy(s[0].name,"Shahriar");
                strcpy(s[0].grade,"A");
                s[0].cgpa= 3.75;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1269)
            {
                strcpy(s[0].name,"Abrar");
                strcpy(s[0].grade,"A");
                s[0].cgpa= 3.75;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1283)
            {
                strcpy(s[0].name,"Limon");
                strcpy(s[0].grade,"A");
                s[0].cgpa= 3.75;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1285)
            {
                strcpy(s[0].name,"Tamim");
                strcpy(s[0].grade,"A");
                s[0].cgpa= 3.75;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1185)
            {
                strcpy(s[0].name,"Shaha Buddin joy");
                strcpy(s[0].grade,"A");
                s[0].cgpa= 3.75;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1921)
            {
                strcpy(s[0].name,"Sami");
                strcpy(s[0].grade,"A-");
                s[0].cgpa= 3.50;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1119)
            {
                strcpy(s[0].name,"Golam Rabbani");
                strcpy(s[0].grade,"A-");
                s[0].cgpa= 3.50;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1343)
            {
                strcpy(s[0].name,"Nibir");
                strcpy(s[0].grade,"A-");
                s[0].cgpa= 3.50;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1525)
            {
                strcpy(s[0].name,"Anupom");
                strcpy(s[0].grade,"B+");
                s[0].cgpa= 3.25;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1037)
            {
                strcpy(s[0].name,"Tonmoy");
                strcpy(s[0].grade,"B");
                s[0].cgpa= 3.00;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1212)
            {
                strcpy(s[0].name,"Sherin");
                strcpy(s[0].grade,"B-");
                s[0].cgpa= 2.75;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1195)
            {
                strcpy(s[0].name,"Hasib");
                strcpy(s[0].grade,"C+");
                s[0].cgpa= 2.50;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1234)
            {
                strcpy(s[0].name,"Muntasir");
                strcpy(s[0].grade,"C");
                s[0].cgpa= 2.25;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }
            if(id==1266)
            {
                strcpy(s[0].name,"Sakib");
                strcpy(s[0].grade,"F");
                s[0].cgpa= 0.00;
                for(int i=0; i<1; i++)
                {
                    printf("|      %s        |       %s      |    %.2f    |\n",s[i].name,s[i].grade,s[i].cgpa   );

                }
                printf("--------------------------------------------------\n");
            }

            printf("\n");
            printf("\n");

        }

        if(press==3)

        {
            printf("\n");
            printf("\n");


            int ID;
            int n;
            printf("Number of student: ");
            scanf("%d",&n);
            printf("\n");
            struct std students[n];


            for (int i = 0; i <n; i++)
            {
                printf("Enter details for student %d:\n", i + 1);
                printf("Name: ");
                scanf("%s", students[i].name);
                printf("ID: ");
                scanf("%d", &students[i].ID);
                printf("CGPA: ");
                scanf("%f", &students[i].CGPA);
                printf("\n");
            }


            displayMeritPosition(students, n,ID);

            printf("\n");
            printf("\n");


        }

        if(press==4)
        {
            int grades[] = {80,80,80,80,80,80,75,75,75,75,75,70,70,70,69,64,59,54,49,33};
            int numStudents = sizeof(grades) / sizeof(grades[0]);

            int gradeCount[10] = {0};

            for (int i = 0; i < numStudents; i++)
            {
                if (grades[i] >= 80)
                {
                    gradeCount[0]++; // A+
                }
                else if (grades[i] >= 75 && grades[i] <=79)
                {
                    gradeCount[1]++; // A
                }
                else if (grades[i] >= 70 && grades[i] <=74)
                {
                    gradeCount[2]++; // A-}
                }
                else if (grades[i] >= 65 && grades[i] <=69)
                {
                    gradeCount[3]++; // B+
                }
                else if (grades[i] >= 60 && grades[i] <=64)
                {
                    gradeCount[4]++; // B
                }
                else if (grades[i] >= 55 && grades[i] <=59)
                {
                    gradeCount[5]++; // B-
                }
                else if (grades[i] >= 50 && grades[i]<=54)
                {
                    gradeCount[6]++; // C+
                }
                else if (grades[i] >= 45 && grades[i] <=49)
                {
                    gradeCount[7]++; // C}
                }
                else if (grades[i] >= 40 && grades[i] <=44)
                {
                    gradeCount[8]++; //D
                }
                else
                {
                    gradeCount[9]++; // F
                }

            }
            printf("\n");
            printf("\n");
            printf("\n");

            printf(" --------------------\n");
            printf("|  GRADE   |  COUNT  |\n");
            printf("|----------|---------|\n");
            printf("|    A+    |    %d    |\n", gradeCount[0]);
            printf("|----------|---------|\n");
            printf("|    A     |    %d    |\n", gradeCount[1]);
            printf("|----------|---------|\n");
            printf("|    A-    |    %d    |\n", gradeCount[2]);
            printf("|----------|---------|\n");
            printf("|    B+    |    %d    |\n", gradeCount[3]);
            printf("|----------|---------|\n");
            printf("|    B     |    %d    |\n", gradeCount[4]);
            printf("|----------|---------|\n");
            printf("|    B-    |    %d    |\n", gradeCount[5]);
            printf("|----------|---------|\n");
            printf("|    C+    |    %d    |\n", gradeCount[6]);
            printf("|----------|---------|\n");
            printf("|    C     |    %d    |\n", gradeCount[7]);
            printf("|----------|---------|\n");
            printf("|    D     |    %d    |\n", gradeCount[8]);
            printf("|----------|---------|\n");
            printf("|    F     |    %d    |\n", gradeCount[9]);
            printf("|--------------------|\n");

            printf("\n");
            printf("\n");


        }

        printf("\n");

        printf("                                   |-------------------------------------|\n");
        printf("                                   |                                     |\n");
        printf("                                   |  To CONTINUE   [ Press 0 ]          |\n");
        printf("                                   |  To EXIT       [ Press any key ]    |\n");
        printf("                                   |                                     |\n");
        printf("                                   |-------------------------------------|\n");

        printf("\n");
        printf("\n");

        printf("                                   Enter your choice : ");
        scanf("%d",&press);

    }

    while(press==0);

    return 0;
}