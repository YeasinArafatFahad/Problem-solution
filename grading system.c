#include <stdio.h>
int main()
{
int marks;
printf("\n Enter your marks:");
scanf("%d",& marks);
if (marks>=80 && marks<=100){
printf("A+");
}
else if (marks>=75 && marks<80){
printf("A");
}
else if (marks>=70 && marks<74){
printf("A-");
}
else if (marks>=65 && marks<69){
printf("B+");
}
else if (marks>=60 && marks<64){
printf("B");
}
else if (marks>=55 && marks<59){
printf("B-");
}
else if (marks>50 && marks<54){
printf("C+");
}
else if (marks>45 && marks<49){
printf("C");
}
else if (marks>40 && marks<44){
printf("D");
}
else if (marks<40){
printf("F");
}
return 0;
}
