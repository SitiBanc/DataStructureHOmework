#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//�w�qplanet��ƫ��O
typedef struct
    {
        char name[8];
        double distance;
        int satellites;
    }planet;
//�L�Xplanet�U����
void display(planet p)
{
    printf("��P�W�١G%s\n",p.name);
    printf("��Ӷ����Z���G%.2f ��\n",p.distance);     //%.2f��ܨ�p���I��2��
    printf("�ìP�ƶq�G%d\n\n",p.satellites);
}

int main(int argc,char *argv[])
{
    //�ŧi�ɪ�������
    planet earth={"�a�y",92955817.7,1};
    //�ŧi��A���w��쵹��
    planet venus;
    strcpy(venus.name,"���P");     //���w�r��(�r���}�C)�ɭn��strcpy(�r���}�C,�r��)
    venus.distance=67237334;
    venus.satellites=0;

    display(earth);
    display(venus);

    system("PAUSE");
    return 0;
}
