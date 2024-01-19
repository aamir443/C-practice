// #include<stdio.h>
// struct stu{
//     int a;
//     char b;
//     float c;
// };
// int main()
// {
//     struct stu s;
//     printf("maximum size of structure %d",sizeof(s));
//     return 0;
// }




// #include<stdio.h>
// #include<string.h>
// struct emp
// {
//     int eid;
//     char ename[20];
//     float esal;
// };
// int main(){
// struct emp e;
// e.eid=10;
// strcpy(e.ename,"aamir");
// printf("emp %d \n",e.eid);
// printf("ename %s \n",e.ename);
// printf("emp %f \n",e.esal);
// return 0;
// }


#include<stdio.h>
struct stu{
    int sroll;
    char sname[20];
    int smark[5];
};
int main(){
struct stu s;
int total=0; float avg;
printf("enter roll number ");
scanf("%d",&s.sroll);
printf("enter student name");
scanf("%s",&s.sname);
printf("enter student marks");
for(int i=0;i<5;i++)
{
    scanf("%d",s.smark[i]);
    total=total+marks[i];
    avg=total/5;
}
printf("student roll number %d\n",s.sroll);
printf("student name %s\n",s.sname);
printf("student marks %d\n",s.smarks);
printf("total %d\n",total);
printf("avg %d\n",avg);
return 0;
}