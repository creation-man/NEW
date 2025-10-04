//学生管理系统
#include <stdio.h>

#define max 100

struct student
{
    char name[20];
    int age;
    int id;
    char sex;
  
};
int student_num = 0;
struct student stu[max];

void add_student(struct student *stu)
{
    if (student_num >= max)
    {
        printf("学生人数已满！\n");
        return;
    }
      
    printf("请输入学生姓名：");
    scanf("%s",stu[student_num].name);
    printf("请输入学生年龄：");
    scanf("%d",&stu[student_num].age);
    printf("请输入学生学号：");
    scanf("%d",&stu[student_num].id);
    printf("请输入学生性别：");
    scanf(" %c",&stu[student_num].sex);
    student_num++;  
}
void show_student(struct student *stu)
{
    if (student_num == 0)
    {
        printf("暂无学生信息！\n");
        return;
    }
   for(int i=0;i<student_num;i++)
    {
    printf("姓名：%s\n",stu[i].name);
    printf("年龄：%d\n",stu[i].age);
    printf("学号：%d\n",stu[i].id);
    printf("性别：%c\n",stu[i].sex);
    printf("\n");
    }
    
  
}

void query_student(struct student *stu)
{
    printf("请输入查询学生的学号：");
    int id;
    scanf("%d",&id);
    if (student_num == 0)
    {
        printf("暂无学生信息！\n");
        return;
    }
 
    
    for (size_t i = 0; i < student_num; i++)
    {
        if (stu[i].id == id)
        {
            printf("姓名：%s\n",stu[i].name);
            printf("年龄：%d\n",stu[i].age);
            printf("学号：%d\n",stu[i].id);
            printf("性别：%c\n",stu[i].sex);
        /* code */
    }
}
    
}
void delete_student(struct student *stu)
{
    printf("请输入要删除学生的学号：");
    int id;
    scanf("%d",&id);

    if (student_num == 0)
    {
        printf("暂无学生信息！\n");
        return;
    }
   
    for (size_t i = 0; i < student_num; i++)
    {
        if (stu[i].id == id)
        {
            for (size_t j = i; j < student_num - 1; j++)
            {
                stu[j] = stu[j + 1];
                student_num--;
            }
          
        }
       

    }
    printf("删除成功！\n");
}


void print_student()
{
printf("1,添加学生信息\n2,显示所有学生信息\n3,查询学生信息\n4,删除学生信息\n5,退出系统\n请选择：");
printf("请输入相应的序号选择："); 
}




int main()
{
 int num = 0;
 struct student stu;

 while (1)
{
   print_student();
   scanf("%d",&num);
   
   switch (num)
   {
   case 1:
   add_student(&stu);

    break;
    case 2:
  show_student(&stu);
    break;
    case 3:
   query_student(&stu);
    break;
    case 4:  
    delete_student(&stu);
    break;
    case 5: 
    return 0;
    break;
   
   default:
    break;
   } 
   
    
    }

}