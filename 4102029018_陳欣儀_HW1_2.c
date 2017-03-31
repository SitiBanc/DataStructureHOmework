#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//定義planet資料型別
typedef struct
    {
        char name[8];
        double distance;
        int satellites;
    }planet;
//印出planet各成員
void display(planet p)
{
    printf("行星名稱：%s\n",p.name);
    printf("到太陽的距離：%.2f 哩\n",p.distance);     //%.2f顯示到小數點後2位
    printf("衛星數量：%d\n\n",p.satellites);
}

int main(int argc,char *argv[])
{
    //宣告時直接給值
    planet earth={"地球",92955817.7,1};
    //宣告後再指定欄位給值
    planet venus;
    strcpy(venus.name,"金星");     //給定字串(字元陣列)時要用strcpy(字元陣列,字串)
    venus.distance=67237334;
    venus.satellites=0;

    display(earth);
    display(venus);

    system("PAUSE");
    return 0;
}
