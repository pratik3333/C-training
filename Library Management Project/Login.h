// #include<stdlib.h>

int login()
{
    FILE *fptr;
    //	char f='27',s='60',l='59';
    int c, i;
    char username[20];
    char password[20];
    // int password;
    char uname[20];
    char pass[10];
    int ch;
    while (1)
    {
        printf("Enter 1 for login \n");
        printf("Enter 2 for exit \n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        printf("__________");
        switch (ch)
        {
        case 1:
            for (int i = 0; i < 40; i++)
            {
                printf("_");
            }
            printf("Login zone\n");

            fptr = fopen("H:\\C-training\\Library Management Project\\login.txt", "r+");

            fscanf(fptr,"%s%s",&username,&password); 
            printf("ENter username \n");
            _flushall();
            gets(uname);
            printf("Enter password\n");
            gets(pass);

                if ((strcmp(uname, username) == 0) && (strcmp(pass, password) == 0))
            {
                printf("login succesful ....\n");
                return 1;
            }
            else
            {
                _flushall();
                return 0;
            }
            break;
        case 2:
        printf("\nThank You\n Visit Again.....");

            exit(0);
            break;
        }
    }
}