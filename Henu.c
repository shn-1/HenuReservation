#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

//ȫ�ֱ�����



//��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������
//ҳ��
void Welcome();        //��ӭҳ��
void Wel_ope(char ch); //��ӭҳ�����
void Customer();       //�˿�ҳ��
void Cus_ope(char ch); //�˿�ҳ�����
void Chef();           //��ʦҳ��
void Che_ope(char ch); //��ʦҳ�����
void Owner();          //�̼�ҳ��
void Own_ope(char ch); //�̼�ҳ�����

//��ӭҳ�湦��ʵ��
void CusLogin(); //�˿͵�¼
void CheLogin(); //��ʦ��¼
void OwnLogin(); //�̼ҵ�¼

//�˿�ҳ�湦��ʵ��
void Cus_order();  //�˿͵��
void Cus_change(); //�˿��޸�����
void Register();   //�˿�ע��

//��ʦҳ�湦��ʵ��
void Che_check();    //�鿴δ��ɶ���
void Che_complete(); //��ɶ���

//�̼�ҳ�湦��ʵ��
void Own_check();  //�̼Ҳ鿴��ˮ
void Own_chmenu(); //�̼��޸Ĳ˵�

//ͨ�ù���
void toxy(int x, int y); //������ƶ���x��y���괦
char *HidePassword();    //��������

//����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������





//������������������������������������������������������������������ʵ������������������������������������������������������������������������������������������������������������������������������������
//ҳ��
void Welcome() //��ӭҳ��
{
    system("color 74"); //������ɫ
    char ch;
    printf("             ---------------------------\n");
    printf("            |    ��ӭ���ٺ��ϴ�ѧ����    |\n");
    printf("            |       ��ѡ��ִ�в���       |\n");
    printf("             ---------------------------\n");
    printf("            |      1      �˿͵�¼       |\n");
    printf("            |      2      ��ʦ��¼       |\n");
    printf("            |      3      �̼ҵ�¼       |\n");
    printf("            |      4      �˿�ע��       |\n");
    printf("             ---------------------------\n");
    printf("            ������ţ�");
    while (1)
    {
        ch = getch();
        Wel_ope(ch);
    }
}
void Wel_ope(char ch)
{
    switch (ch)
    {
    case '1':
        system("cls");
        CusLogin();
        break;
    case '2':
        system("cls");
        CheLogin();
        break;
    case '3':
        system("cls");
        OwnLogin();
        break;
    case '4':
        system("cls");
        Register();
        break;
    default:
        system("cls");
        toxy(25, 10);
        printf("����������������룡");
        Sleep(1000);
        system("cls");
        Welcome();
        break;
    }
}
void Customer() //�˿�ҳ��
{
    char ch;
    printf("             ---------------------------\n");
    printf("            |    ��ӭ���ٺ��ϴ�ѧ����    |\n");
    printf("            |       ��ѡ��ִ�в���       |\n");
    printf("             ---------------------------\n");
    printf("            |      1      �������       |\n");
    printf("            |      2      �޸�����       |\n");
    printf("            |      3      �˳���¼       |\n");
    printf("             ---------------------------\n");
    printf("            ������ţ�");
    while (1)
    {
        ch = getch();
        Cus_ope(ch);
    }
}
void Cus_ope(char ch)
{
    switch (ch)
    {
    case '1':
        system("cls");
        Cus_order();
        break;
    case '2':
        system("cls");
        Cus_change();
        break;
    case '3':
        system("cls");
        Welcome();
        break;
    default:
        system("cls");
        toxy(25, 10);
        printf("����������������룡");
        Sleep(1000);
        system("cls");
        Welcome();
        break;
    }
}
void Chef() //��ʦҳ��
{
    char ch;
    printf("             ---------------------------\n");
    printf("            |    ��ӭ���ٺ��ϴ�ѧ����    |\n");
    printf("            |       ��ѡ��ִ�в���       |\n");
    printf("             ---------------------------\n");
    printf("            |      1      �鿴����       |\n");
    printf("            |      2      ��ɶ���       |\n");
    printf("            |      3      �˳���¼       |\n");
    printf("             ---------------------------\n");
    printf("            ������ţ�");
    while (1)
    {
        ch = getch();
        Che_ope(ch);
    }
}
void Che_ope(char ch)
{
    switch (ch)
    {
    case '1':
        system("cls");
        Che_check();
        break;
    case '2':
        system("cls");
        Che_complete();
        break;
    case '3':
        system("cls");
        Welcome();
        break;
    default:
        system("cls");
        toxy(25, 10);
        printf("����������������룡");
        Sleep(1000);
        system("cls");
        Welcome();
        break;
    }
}
void Owner() //�̼�ҳ��
{
    char ch;
    printf("             ---------------------------\n");
    printf("            |    ��ӭ���ٺ��ϴ�ѧ����    |\n");
    printf("            |       ��ѡ��ִ�в���       |\n");
    printf("             ---------------------------\n");
    printf("            |      1      �鿴��ˮ       |\n");
    printf("            |      2      �޸Ĳ˵�       |\n");
    printf("            |      3      �˳���¼       |\n");
    printf("             ---------------------------\n");
    printf("            ������ţ�");
    while (1)
    {
        ch = getch();
        Own_ope(ch);
    }
}
void Own_ope(char ch)
{
    switch (ch)
    {
    case '1':
        system("cls");
        Own_check();
        break;
    case '2':
        system("cls");
        Own_chmenu();
        break;
    case '3':
        system("cls");
        Welcome();
        break;
    default:
        system("cls");
        toxy(25, 10);
        printf("����������������룡");
        Sleep(1000);
        system("cls");
        Welcome();
        break;
    }
}

//�˿͹���ʵ��
void CusLogin() //�˿͵�¼
{
    bool check = false; //��¼�Ƿ�ɹ�
    char cus_name[10];  //�˿��û���
    char cus_pwd[18];   //�˿�����
    char *pwd;
    printf("             ---------------------------\n");
    printf("            |    ��ӭ���ٺ��ϴ�ѧ����    |\n");
    printf("            |     �������û�������       |\n");
    printf("             ---------------------------\n");
    printf("            |      �û�����              |\n");
    printf("            |      ��  �룺              |\n");
    printf("             ---------------------------\n");
    toxy(27, 4);
    scanf("%s", cus_name);
    toxy(27, 5);
    pwd = HidePassword();
    strcpy(cus_pwd, pwd);
    toxy(19, 8);
    printf("���ڵ�½.");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    if (check)
    {
        system("cls");
        toxy(20, 4);
        printf("��½�ɹ���");
        Sleep(1000);
        system("cls");
        Customer();
    }
    else
    {
        system("cls");
        toxy(20, 4);
        printf("��½ʧ�ܣ�");
        Sleep(1000);
        system("cls");
        Welcome();
    }
}
void Cus_order() //�˿͵��
{
}
void Cus_change() //�˿��޸�����
{
}
void Register() //�˿�ע��
{
    bool check=false;
    char cus_name[10]; //�˿��û���
    char cus_pwd[18];  //�˿�����
    char cus_rep[18];  //ȷ������
    char *pwd;
    printf("             ---------------------------\n");
    printf("            |    ��ӭ���ٺ��ϴ�ѧ����    |\n");
    printf("            |     �������û�������       |\n");
    printf("             ---------------------------\n");
    printf("            |      �� �� ����            |\n");
    printf("            |      ��    �룺            |\n");
    printf("            |      ȷ�����룺            |\n");
    printf("             ---------------------------\n");
    toxy(29, 4);
    scanf("%s", cus_name);
    toxy(29, 5);
    pwd = HidePassword();
    strcpy(cus_pwd, pwd);
    toxy(29, 6);
    pwd = HidePassword();
    strcpy(cus_rep, pwd);
    if(check)
    {
        system("cls");
        toxy(20, 4);
        printf("ע��ɹ���");
        Sleep(1000);
        system("cls");
        Welcome();
    }
    else
    {
        system("cls");
        toxy(20, 4);
        printf("�û����Ѵ��ڣ�������ע�ᣡ");
        Sleep(1000);
        system("cls");
        Welcome();
    }
}

//��ʦ����ʵ��
void CheLogin() //��ʦ��¼
{
    bool check=false;
    char che_name[10]; //�˿��û���
    char che_pwd[18];  //�˿�����
    char *pwd;
    printf("             ---------------------------\n");
    printf("            |    ��ӭ���ٺ��ϴ�ѧ����    |\n");
    printf("            |     �������û�������       |\n");
    printf("             ---------------------------\n");
    printf("            |      �û�����              |\n");
    printf("            |      ��  �룺              |\n");
    printf("             ---------------------------\n");
    toxy(27, 4);
    scanf("%s", che_name);
    toxy(27, 5);
    pwd = HidePassword();
    strcpy(che_pwd, pwd);
    toxy(19, 8);
    printf("���ڵ�½.");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    if (check)
    {
        system("cls");
        toxy(20, 4);
        printf("��½�ɹ���");
        Sleep(1000);
        system("cls");
        Chef();
    }
    else
    {
        system("cls");
        toxy(20, 4);
        printf("��½ʧ�ܣ�");
        Sleep(1000);
        system("cls");
        Welcome();
    }
}
void Che_check() //�鿴δ��ɶ���
{
}
void Che_complete() //��ɶ���
{
}

//�̼ҹ���ʵ��
void OwnLogin() //�̼ҵ�¼
{
    bool check=true;
    char own_name[10]; //�˿��û���
    char own_pwd[18];  //�˿�����
    char *pwd;
    printf("             ---------------------------\n");
    printf("            |    ��ӭ���ٺ��ϴ�ѧ����    |\n");
    printf("            |     �������û�������       |\n");
    printf("             ---------------------------\n");
    printf("            |      �û�����              |\n");
    printf("            |      ��  �룺              |\n");
    printf("             ---------------------------\n");
    toxy(27, 4);
    scanf("%s", own_name);
    toxy(27, 5);
    pwd = HidePassword();
    strcpy(own_pwd, pwd);
     toxy(19, 8);
    printf("���ڵ�½.");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    if (check)
    {
        system("cls");
        toxy(20, 4);
        printf("��½�ɹ���");
        Sleep(1000);
        system("cls");
        Owner();
    }
    else
    {
        system("cls");
        toxy(20, 4);
        printf("��½ʧ�ܣ�");
        Sleep(1000);
        system("cls");
        Welcome();
    }
}
void Own_check() //�̼Ҳ鿴��ˮ
{
}
void Own_chmenu() //�̼��޸Ĳ˵�
{
}

//ͨ�ù���
void toxy(int x, int y) //������ƶ���x��y���괦
{
    COORD pos = {x, y};
    HANDLE Out = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(Out, pos);
}
char *HidePassword() //��������
{
    char password[18]; //����
    char *p;           //ָ�������ָ��
    int i = 0;         //��¼����λ��
    char t;            //��������
    for (;;)           //�˴�Ϊ�������벻���Բ���
    {
        t = getch();   //����k
        if (t == '\r') //�������kΪ�س���������ѭ��
        {
            break;
        }
        else if (t == '\b') //�������kΪɾ����
        {
            if (i > 0) //�������뻹û��ȫɾ��
            {
                printf("\b");
                printf(" ");
                printf("\b");
                i--;
            }
        }
        else //��������k�Ȳ���ɾ������Ҳ���ǻس���
        {
            password[i] = t; //��k��ֵ����_password[i];
            printf("*");     //���*�ţ������û���˽
            i++;             //����λ����1
        }
    }
    password[i] = '\0'; //������ĩ�˼�һ��������
    p = password;       //��pָ�������
    return p;           //����һ��ָ�������ָ��
}

int main()
{
    Welcome();
    return 0;
}