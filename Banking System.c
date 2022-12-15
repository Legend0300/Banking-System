#include <stdio.h>
#include <stdlib.h>
#include <string.h>


    struct Bank{
        int id;
        char name[20];
        char father_name[20];
        char cnic[20];
        char city[20];
        char date[20];
        char gender[20];
        int bank_amount;
    };
    void search_byname(struct Bank *user , int n);
    void search_byfname(struct Bank *user , int n);
    void search_bygender(struct Bank *user , int n);
    void search_bycity(struct Bank *user , int n);
    void add_bal(struct Bank *user , int n);
    void rem_bal(struct Bank *user , int n);


int main()
{


    struct Bank user[100];
    int exit = 2 , n = 0;
    while(exit != 0)
    {
        printf("\nenter the values of the %d user\n" , n+1);
        printf("enter the name of the user: ");
        scanf(" %[^\n]*c",user[n].name); 
        printf("enter the father name of the user: ");
        scanf(" %[^\n]*c",user[n].father_name);
        printf("enter the cnic of the user: ");
        scanf("%s" , &user[n].cnic);
        printf("enter the name of the city: ");
        scanf("%s" , &user[n].city);
        printf("enter the date: ");
        scanf("%s" , &user[n].date);
        printf("enter the gender: ");
        scanf("%s" , &user[n].gender);
        printf("enter the id: ");
        scanf("%d" , &user[n].id);
        printf("enter the bank amount number: ");
        scanf("%d" , &user[n].bank_amount);

        printf("\nenter 0 to exit or any any other key to make a new account: \n");
        scanf("%d" , &exit);
        if(exit == 0)
        {
            break;
        }
        n++;
    }

    int menu = 0;
    printf("press 1 to enter the cash menu\n");
    printf("\npress 2 to enter the Update menu\n");
    printf("\npress 3 to enter the search menu\n");
    printf("\npress 4 to exit the program\n");
    scanf("%d" , &menu);
    if(menu == 1)
    {
        printf("enter \n1.Check\n 2.Withdraw\n 3.deposit\n");
        int option = 0;
        scanf("%d" , &option);
        switch (option)
        {
        case 1:
            check_bal(user , n);
            break;
        case 2:
            add_bal(user , n);
            break;
        case 3:
            rem_bal(user , n);
            break;
        
        default:
        printf("enter the valid option");
            break;
        }
    }
    if(menu == 2)
    {
        update(user , n);
    }

    if(menu == 3)
    {
        printf("enter\n1. By Name\n2. Father Name\n3. Gender\n4.City\n5.By cnic\n");
        int input;
        scanf("%d" , &input);
        switch (input)
        {
        case 1:
            search_byname(user , n);
            break;
        case 2:
            search_byfname(user , n);
            break;
        case 3:
            search_bygender(user , n);
            break;
        case 4:
            search_bycity(user , n);
            break;
        case 5:
            search_bycnic(user , n);
            break;
        
        default:
        printf("enter a valid value");
            break;
        }
    }

    if(menu == 0)
    {
        printf("\nprogram ended\n");
    }




    return 0;
}

void search_byname(struct Bank *user , int n)
{
    char input[20];
    printf("enter the name: ");
    scanf("%s" , &input);
    for(int i = 0; i <= n ; i++)
    {
        int count = 0;
        printf("inside for");
        if(strcmp(user[count].name , input) == 0)
        {
            printf("the details of the %d user is: " , i);
            printf("\nthe name is :%s" , user[count].name);
            printf("\nthe city is: %s" , user[count].city  );
            printf("\nthe cnic is:  %s" , user[count].cnic);
            printf("\nthe date is : %s" , user[count].date);
            printf("\nthe father name is: %s" , user[count].father_name);
            printf("\nthe gender is: %s" , user[count].gender);
            printf("\nthe Account number is : %d" , user[count].id);
            printf("\nThe bank amount : %d" , user[count].bank_amount);
            break;
        }
        count++;
    }
}
void search_byfname(struct Bank *user , int n)
{
    char input[20];
    printf("enter the father name: ");
    scanf("%s" , &input);
    for(int i = 0; i <= n ; i++)
    {
        int count = 0;
        printf("inside for");
        if(strcmp(user[count].father_name , input) == 0)
        {
            printf("the details of the %d user is: " , i);
            printf("\nthe name is :%s" , user[count].name);
            printf("\nthe city is: %s" , user[count].city  );
            printf("\nthe cnic is:  %s" , user[count].cnic);
            printf("\nthe date is : %s" , user[count].date);
            printf("\nthe father name is: %s" , user[count].father_name);
            printf("\nthe gender is: %s" , user[count].gender);
            printf("\nthe Account number is : %d" , user[count].id);
            printf("\nThe bank amount : %d" , user[count].bank_amount);
            break;
        }
        count++;
    }
}
void search_bygender(struct Bank *user , int n)
{
    char input[20];
    printf("enter the gender: ");
    scanf("%s" , &input);
    for(int i = 0; i <= n ; i++)
    {
        int count = 0;
        printf("inside for");
        if(strcmp(user[count].gender , input) == 0)
        {
            printf("the details of the %d user is: " , i);
            printf("\nthe name is :%s" , user[count].name);
            printf("\nthe city is: %s" , user[count].city  );
            printf("\nthe cnic is:  %s" , user[count].cnic);
            printf("\nthe date is : %s" , user[count].date);
            printf("\nthe father name is: %s" , user[count].father_name);
            printf("\nthe gender is: %s" , user[count].gender);
            printf("\nthe Account number is : %d" , user[count].id);
            printf("\nThe bank amount : %d" , user[count].bank_amount);
            break;
        }
        count++;
    }
}

void search_byid(struct Bank *user , int n)
{
    char input[20];
    printf("enter the id: ");
    scanf("%s" , &input);
    for(int i = 0; i <= n ; i++)
    {
        int count = 0;
        printf("inside for");
        if(strcmp(user[count].id , input) == 0)
        {
            printf("the details of the %d user is: " , i);
            printf("\nthe name is :%s" , user[count].name);
            printf("\nthe city is: %s" , user[count].city  );
            printf("\nthe cnic is:  %s" , user[count].cnic);
            printf("\nthe date is : %s" , user[count].date);
            printf("\nthe father name is: %s" , user[count].father_name);
            printf("\nthe gender is: %s" , user[count].gender);
            printf("\nthe Account number is : %d" , user[count].id);
            printf("\nThe bank amount : %d" , user[count].bank_amount);
            break;
        }
        count++;
    }
}
void search_bycnic(struct Bank *user , int n)
{
    char input[20];
    printf("enter the cnic: ");
    scanf("%s" , &input);
    for(int i = 0; i <= n ; i++)
    {
        int count = 0;
        printf("inside for");
        if(strcmp(user[count].cnic , input) == 0)
        {
            printf("the details of the %d user is: " , i);
            printf("\nthe name is :%s" , user[count].name);
            printf("\nthe city is: %s" , user[count].city  );
            printf("\nthe cnic is:  %s" , user[count].cnic);
            printf("\nthe date is : %s" , user[count].date);
            printf("\nthe father name is: %s" , user[count].father_name);
            printf("\nthe gender is: %s" , user[count].gender);
            printf("\nthe Account number is : %d" , user[count].id);
            printf("\nThe bank amount : %d" , user[count].bank_amount);
            break;
        }
        count++;
    }
}
void search_bycity(struct Bank *user , int n)
{
    char input[20];
    printf("enter the city: ");
    scanf("%s" , &input);
    for(int i = 0; i <= n ; i++)
    {
        int count = 0;
        printf("inside for");
        if(strcmp(user[count].city , input) == 0)
        {
            printf("the details of the %d user is: " , i);
            printf("\nthe name is :%s" , user[count].name);
            printf("\nthe city is: %s" , user[count].city  );
            printf("\nthe cnic is:  %s" , user[count].cnic);
            printf("\nthe date is : %s" , user[count].date);
            printf("\nthe father name is: %s" , user[count].father_name);
            printf("\nthe gender is: %s" , user[count].gender);
            printf("\nthe Account number is : %d" , user[count].id);
            printf("\nThe bank amount : %d" , user[count].bank_amount);
            break;
        }
        count++;
    }
}


void check_bal(struct Bank *user , int n)
{
    int input;
    printf("enter the id: ");
    scanf("%d" , &input);
    for(int i = 0; i <= n ; i++)
    {
        int count = 0;
        if(user[count].id == input)
        {

            printf("\nThe bank amount : %d" , user[count].bank_amount);
            break;
        }
        count++;
    }
}


void add_bal(struct Bank *user , int n)
{
    int input;
    int value;
    printf("enter the id: ");
    scanf("%d" , &input);

    printf("enter the value to be added in account");
    scanf("%d" , &value);
    for(int i = 0; i <= n ; i++)
    {
        int count = 0;
        printf("inside for");
        if(user[count].id == input)
        {
            user[count].bank_amount = value + user[count].bank_amount;
            printf("\nThe bank amount : %d" , user[count].bank_amount);
            break;
        }
        count++;
    }
}

void rem_bal(struct Bank *user , int n)
{
    int input;
    int value;
    printf("enter the id: ");
    scanf("%d" , &input);

    printf("enter the value to be removed in account");
    scanf("%d" , &value);
    for(int i = 0; i <= n ; i++)
    {
        int count = 0;
        printf("inside for");
        if(user[count].id == input)
        {
            user[count].bank_amount = user[count].bank_amount - value;
            printf("\nThe bank amount : %d" , user[count].bank_amount);
            break;
        }
        count++;
    }
}


int update(struct Bank *user , int n)
{

    printf("enter the id of the person");
    int id;
    scanf("%d" , &id);
    for(int i = 0; i <= n ; i++)
    {
        int count = 0;
        printf("inside for");
        if(user[count].id == id)
        {
            printf("enter the value to be updated\n 1. Name \n 2. city \n 3. Date \n 4.cnic");
            int input;
            scanf("%d" , &input);
            switch (input)
            {
            case 1:
            printf("enter value");
            scanf("%s" , &user[count].name);
            printf("value updated");
            break;
            case 2:
            printf("enter value");
            scanf("%s" , &user[count].city);
            printf("value updated");
            
            break;
            case 3:
            printf("enter value");
            scanf("%s" , &user[count].date);
            printf("value updated");
            
            break;
            case 4:
            printf("enter value\n");
            scanf("%s" , &user[count].cnic);
            printf("value updated");
            
            break;
    
        default:
            printf("enter valid operation");
            break;
        }
            printf("the updated values are: \n");
            printf("the details of the %d user is: " , i+1);
            printf("\nthe name is :%s" , user[count].name);
            printf("\nthe city is: %s" , user[count].city  );
            printf("\nthe cnic is:  %s" , user[count].cnic);
            printf("\nthe date is : %s" , user[count].date);
            printf("\nthe father name is: %s" , user[count].father_name);
            printf("\nthe gender is: %s" , user[count].gender);
            printf("\nthe Account number is : %d" , user[count].id);
            printf("\nThe bank amount : %d" , user[count].bank_amount);
            break;
        }
        count++;
    }
}