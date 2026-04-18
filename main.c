/*
Name: AKELLO ESTHER OKALANY
Registration Number: 25/U/BIO/023/GV 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* Declare variables here */
    int T1101, T1102, T1103, T1104,T1105, T1106, T1107, T1108, T1201, T1202, T1203, T1204, T1205, T1206, T1207, T1208; //T stands for TEMB
    int gp1, gp2, gp3, gp4, gp5,gp6, gp7, gp8, gp9, gp10, gp11, gp12, gp13, gp14, gp15, gp16; //gp = Grade Point
    int CU1= 4, CU2= 3, CU3= 3, CU4= 3, CU5= 3, CU6=3, CU7= 2, CU8= 3, CU9= 4, CU10= 3, CU11= 3, CU12= 3, CU13= 3, CU14= 3, CU15= 3, CU16=3; //CU = Credit Unit
    int WC1, WC2, WC3, WC4, WC5, WC6, WC7, WC8, WC9, WC10, WC11, WC12, WC13, WC14, WC15, WC16; //WC = Weighted Contribution
    int TCU1, TCU2, TWC1, TWC2; //TCU1, TCU2 = Total Credit Units for Semester I and Semester 2 respectively TWC1, TWC2 = Total Weighted Contribution
    char g1, g2, g3, g4, g5, g6, g7, g8, g9, g10, g11, g12, g13, g14, g15, g16; //g is Grade
	float GPA1, GPA2, CGPA;
	

    /* Read 16 scores */
    printf("Semester I\n\n");
   printf("1.Fundamentals of Enginneering Mathathematics: "); scanf("%d", &T1101);
   printf("2.Biochemistry and Medical Physics: "); scanf("%d", &T1102);
   printf("3.Electrical Engineering Science: "); scanf("%d", &T1103);
   printf("4.Mechanics I: "); scanf("%d", &T1104);
   printf("5.Computing I: "); scanf("%d", &T1105);
   printf("6.Mecahanical Drawing: "); scanf("%d", &T1106);
   printf("7.Engineering Profession: "); scanf("%d", &T1107);
   printf("8.Functional Anatomy and Physiology I: "); scanf("%d", &T1108);
   
    printf("\nSemester II\n\n");
   printf("9.Further Engineering Mathematics: "); scanf("%d", &T1201);
   printf("10.Computing II: "); scanf("%d", &T1202);
   printf("11.Mecahatronics Drawing: "); scanf("%d", &T1203);
   printf("12.Fluid Mecahnics: "); scanf("%d", &T1204);
   printf("13.Thermodynamics: "); scanf("%d", &T1205);
   printf("14.Workshop Practice: "); scanf("%d", &T1206);
   printf("15.Functional Anatomy and Physiology II: "); scanf("%d", &T1207);
   printf("Electronics II: "); scanf("%d", &T1208);

    /* Validate input */

if (T1101 < 0 || T1101 > 100) {printf("Invalid score entered\n"); exit(0);}
if (T1102 < 0 || T1102 > 100) {printf("Invalid score entered\n"); exit(0);}
if (T1103 < 0 || T1103 > 100) {printf("Invalid score entered\n"); exit(0);}
if (T1104 < 0 || T1104 > 100) {printf("Invalid score entered\n"); exit(0);}
if (T1105 < 0 || T1105 > 100) {printf("Invalid score entered\n"); exit(0);}
if (T1106 < 0 || T1106 > 100) {printf("Invalid score entered\n"); exit(0);}
if (T1107 < 0 || T1107 > 100) {printf("Invalid score entered\n"); exit(0);}
if (T1108 < 0 || T1108 > 100) {printf("Invalid score entered\n"); exit(0);}
if (T1201 < 0 || T1201 > 100) {printf("Invalid score entered\n"); exit(0);}
if (T1202 < 0 || T1202 > 100) {printf("Invalid score entered\n"); exit(0);}
if (T1203 < 0 || T1203 > 100) {printf("Invalid score entered\n"); exit(0);} 
if (T1204 < 0 || T1204 > 100) {printf("Invalid score entered\n"); exit(0);}
if (T1205 < 0 || T1205 > 100) {printf("Invalid score entered\n"); exit(0);}
if (T1206 < 0 || T1206 > 100) {printf("Invalid score entered\n"); exit(0);}
if (T1207 < 0 || T1207 > 100) {printf("Invalid score entered\n"); exit(0);}
if (T1208 < 0 || T1208 > 100) {printf("Invalid score entered\n"); exit(0);}

  /* Determine grades and grade points */

 if (T1101 >= 80) {gp1 = 5; g1 = 'A'; WC1 = CU1 * gp1;} else if (T1101 >= 70) {gp1 = 4; g1 = 'B'; WC1 = CU1 * gp1;} else if (T1101 >= 60) {gp1 = 3; g1 = 'C'; WC1 = CU1 * gp1;} else if (T1101 >= 50) {gp1 = 2; g1 = 'D'; WC1 = CU1 * gp1;} else {gp1 = 0; g1 = 'F'; WC1 = CU1 * gp1;}
 if (T1102 >= 80) {gp2 = 5; g2 = 'A'; WC2 = CU2 * gp2;} else if (T1102 >= 70) {gp2 = 4; g2 = 'B'; WC2 = CU2 * gp2;} else if (T1102 >= 60) {gp2 = 3; g2 = 'C'; WC2 = CU2 * gp2;} else if (T1102 >= 50) {gp2 = 2; g2 = 'D'; WC2 = CU2 * gp2;} else {gp2 = 0; g2 = 'F'; WC2 = CU2 * gp2;}
 if (T1103 >= 80) {gp3 = 5; g3 = 'A'; WC3 = CU3 * gp3;} else if (T1103 >= 70) {gp3 = 4; g3 = 'B'; WC3 = CU3 * gp3;} else if (T1103 >= 60) {gp3 = 3; g3 = 'C'; WC3 = CU3 * gp3;} else if (T1103 >= 50) {gp3 = 2; g3 = 'D'; WC3 = CU3 * gp3;} else {gp3 = 0; g3 = 'F'; WC3 = CU3 * gp3;}
 if (T1104 >= 80) {gp4 = 5; g4 = 'A'; WC4 = CU4 * gp4;} else if (T1104 >= 70) {gp4 = 4; g4 = 'B'; WC4 = CU4 * gp4;} else if (T1104 >= 60) {gp4 = 3; g4 = 'C'; WC4 = CU4 * gp4;} else if (T1104 >= 50) {gp4 = 2; g4 = 'D'; WC4 = CU4 * gp4;} else {gp4 = 0; g4 = 'F'; WC4 = CU4 * gp4;}
 if (T1105 >= 80) {gp5 = 5; g5 = 'A'; WC5 = CU5 * gp5;} else if (T1105 >= 70) {gp5 = 4; g5 = 'B'; WC5 = CU5 * gp5;} else if (T1105 >= 60) {gp5 = 3; g5 = 'C'; WC5 = CU5 * gp5;} else if (T1105 >= 50) {gp5 = 2; g5 = 'D'; WC5 = CU5 * gp5;} else {gp5 = 0; g5 = 'F'; WC5 = CU5 * gp5;}
 if (T1106 >= 80) {gp6 = 5; g6 = 'A'; WC6 = CU6 * gp6;} else if (T1106 >= 70) {gp6 = 4; g6 = 'B'; WC6 = CU6 * gp6;} else if (T1106 >= 60) {gp6 = 3; g6 = 'C'; WC6 = CU6 * gp6;} else if (T1106 >= 50) {gp6 = 2; g6 = 'D'; WC6 = CU6 * gp6;} else {gp6 = 0; g6 = 'F'; WC6 = CU6 * gp6;}
 if (T1107 >= 80) {gp7 = 5; g7 = 'A'; WC7 = CU7 * gp7;} else if (T1107 >= 70) {gp7 = 4; g7 = 'B'; WC7 = CU7 * gp7;} else if (T1107 >= 60) {gp7 = 3; g7 = 'C'; WC7 = CU7 * gp7;} else if (T1107 >= 50) {gp7 = 2; g7 = 'D'; WC7 = CU7 * gp7;} else {gp7 = 0; g7 = 'F'; WC7 = CU7 * gp7;}
 if (T1108 >= 80) {gp8 = 5; g8 = 'A'; WC8 = CU8 * gp8;} else if (T1108 >= 70) {gp8 = 4; g8 = 'B'; WC8 = CU8 * gp8;} else if (T1108 >= 60) {gp8 = 3; g8 = 'C'; WC8 = CU8 * gp8;} else if (T1108 >= 50) {gp8 = 2; g8 = 'D'; WC8 = CU8 * gp8;} else {gp8 = 0; g8 = 'F'; WC8 = CU8 * gp8;}
 if (T1201 >= 80) {gp9 = 5; g9 = 'A'; WC9 = CU9 * gp9;} else if (T1201 >= 70) {gp9 = 4; g9 = 'B'; WC9 = CU9 * gp9;} else if (T1201 >= 60) {gp9 = 3; g9 = 'C'; WC9 = CU9 * gp9;} else if (T1201 >= 50) {gp9 = 2; g9 = 'D'; WC9 = CU9 * gp9;} else {gp9 = 0; g9 = 'F'; WC9 = CU9 * gp9;}
 if (T1202 >= 80) {gp10 = 5; g10 = 'A'; WC10 = CU10 * gp10;} else if (T1202 >= 70) {gp10 = 4; g10 = 'B'; WC10 = CU10 * gp10;} else if (T1202 >= 60) {gp10 = 3; g10 = 'C'; WC10 = CU10 * gp10;} else if (T1202 >= 50) {gp10 = 2; g10 = 'D'; WC10 = CU10 * gp10;} else {gp10 = 0; g10 = 'F'; WC10 = CU10 * gp10;}
 if (T1203 >= 80) {gp11 = 5; g11 = 'A'; WC11 = CU11 * gp11;} else if (T1203 >= 70) {gp11 = 4; g11 = 'B'; WC11 = CU11 * gp11;} else if (T1203 >= 60) {gp11 = 3; g11 = 'C'; WC11 = CU11 * gp11;} else if (T1203 >= 50) {gp11 = 2; g11 = 'D'; WC11 = CU11 * gp11;} else {gp11 = 0; g11 = 'F'; WC11 = CU11 * gp11;}
 if (T1204 >= 80) {gp12 = 5; g12 = 'A'; WC12 = CU12 * gp12;} else if (T1204 >= 70) {gp12 = 4; g12 = 'B'; WC12 = CU12 * gp12;} else if (T1204 >= 60) {gp12 = 3; g12 = 'C'; WC12 = CU12 * gp12;} else if (T1204 >= 50) {gp12 = 2; g12 = 'D'; WC12 = CU12 * gp12;} else {gp12 = 0; g12 = 'F'; WC12 = CU12 * gp12;}
 if (T1205 >= 80) {gp13 = 5; g13 = 'A'; WC13 = CU13 * gp13;} else if (T1205 >= 70) {gp13 = 4; g13 = 'B'; WC13 = CU13 * gp13;} else if (T1205 >= 60) {gp13 = 3; g13 = 'C'; WC13 = CU13 * gp13;} else if (T1205 >= 50) {gp13 = 2; g13 = 'D'; WC13 = CU13 * gp13;} else {gp13 = 0; g13 = 'F'; WC13 = CU13 * gp13;}
 if (T1206 >= 80) {gp14 = 5; g14 = 'A'; WC14 = CU14 * gp14;} else if (T1206 >= 70) {gp14 = 4; g14 = 'B'; WC14 = CU14 * gp14;} else if (T1206 >= 60) {gp14 = 3; g14 = 'C'; WC14 = CU14 * gp14;} else if (T1206 >= 50) {gp14 = 2; g14 = 'D'; WC14 = CU14 * gp14;} else {gp14 = 0; g14 = 'F'; WC14 = CU14 * gp14;}
 if (T1207 >= 80) {gp15 = 5; g15 = 'A'; WC15 = CU15 * gp15;} else if (T1207 >= 70) {gp15 = 4; g15 = 'B'; WC15 = CU15 * gp15;} else if (T1207 >= 60) {gp15 = 3; g15 = 'C'; WC15 = CU15 * gp15;} else if (T1207 >= 50) {gp15 = 2; g15 = 'D'; WC15 = CU15 * gp15;} else {gp15 = 0; g15 = 'F'; WC15 = CU15 * gp15;}
 if (T1208 >= 80) {gp16 = 5; g16 = 'A'; WC16 = CU16 * gp16;} else if (T1208 >= 70) {gp16 = 4; g16 = 'B'; WC16 = CU16 * gp16;} else if (T1208 >= 60) {gp16 = 3; g16 = 'C'; WC16 = CU16 * gp16;} else if (T1208 >= 50) {gp16 = 2; g16 = 'D'; WC16 = CU16 * gp16;} else {gp16 = 0; g16 = 'F'; WC16 = CU16 * gp16;}



    /* Compute Semester I GPA */
    TCU1 = CU1+CU2+CU3+CU4+CU5+CU6+CU7+CU8;
    TWC1 = WC1+WC2+WC3+WC4+WC5+WC6+WC7+WC8;
    GPA1 = (float)TWC1 / TCU1;
   
    /* Compute Semester II GPA */
    TCU2 = CU9+CU10+CU11+CU12+CU13+CU14+CU15+CU16;
    TWC2 = WC9+WC10+WC11+WC12+WC13+WC14+WC15+WC16;
    GPA2 = (float)TWC2 / TCU2;
   
    /* Compute CGPA */
    CGPA = (float)(TWC1 + TWC2) / (TCU1 + TCU2);
  
    /* Determine classification */
    char *class; //Creates a pointer that can point to any string freely.
        if(CGPA >= 4.40){class = "First Class";}
    else if(CGPA >= 3.60){class = "Second Class Upper";}
    else if(CGPA >= 2.80){class = "Second Class Lower";}
    else if(CGPA >= 2.00){class = "Pass";}
    else{class = "Fail";}

    /* Display full academic report */
      printf("\nCourse Code\t Score\t Grade\t Grade Point\t Credit Unit\t Weighted Contribution");
    printf("\nTEMB1101\t %d\t % c\t %d\t\t \t4\t  \t%d ", T1101, g1, gp1, WC1);
    printf("\nTEMB1102\t %d\t % c\t %d\t\t \t3\t  \t%d ", T1102, g2, gp2, WC2);
    printf("\nTEMB1103\t %d\t % c\t %d\t\t \t3\t  \t%d ", T1103, g3, gp3, WC3);
    printf("\nTEMB1104\t %d\t % c\t %d\t\t \t3\t  \t%d ", T1104, g4, gp4, WC4);
    printf("\nTEMB1105\t %d\t % c\t %d\t\t \t3\t  \t%d ", T1105, g5, gp5, WC5);
    printf("\nTEMB1106\t %d\t % c\t %d\t\t \t3\t  \t%d ", T1106, g6, gp6, WC6);
    printf("\nTEMB1107\t %d\t % c\t %d\t\t \t3\t  \t%d ", T1107, g7, gp7, WC7);
    printf("\nTEMB1108\t %d\t % c\t %d\t\t \t3\t  \t%d ", T1108, g8, gp8, WC8);
    printf("\nTEMB1201\t %d\t % c\t %d\t\t \t4\t  \t%d ", T1201, g9, gp9, WC9);
    printf("\nTEMB1202\t %d\t % c\t %d\t\t \t3\t  \t%d ", T1202, g10, gp10, WC10);
    printf("\nTEMB1203\t %d\t % c\t %d\t\t \t3\t  \t%d ", T1203, g11, gp11, WC11);
    printf("\nTEMB1204\t %d\t % c\t %d\t\t \t3\t  \t%d ", T1204, g12, gp12, WC12);
    printf("\nTEMB1205\t %d\t % c\t %d\t\t \t3\t  \t%d ", T1205, g13, gp13, WC13);
    printf("\nTEMB1206\t %d\t % c\t %d\t\t \t3\t  \t%d ", T1206, g14, gp14, WC14);
    printf("\nTEMB1207\t %d\t % c\t %d\t\t \t3\t  \t%d ", T1207, g15, gp15, WC15);
    printf("\nTEMB1208\t %d\t % c\t %d\t\t \t3\t  \t%d ", T1208, g16, gp16, WC16);

  printf("\nSemester I GPA: %.2f", GPA1);
  printf("\nSemester II GPA: %.2f", GPA2);
  printf("\nCGPA: %.2f", CGPA);
  printf("\nClassification: %s", class);
    return 0;
}
