#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void kumsuz(char kumsaati[15][21])
{
    for(int i=0;i<15;i++)
    {
        for(int j=0;j<21;j++)
        {
            kumsaati[i][j] = ' ';
        }
    }


    for(int i=0;i<=20;i++)
    {
        kumsaati[0][i] = '-';
        kumsaati[14][i] = '-';
    }

    for(int i=8;i<=12;i++)
    {
        kumsaati[7][i] = '-';
    }

    for(int i=1;i<=6;i++)
    {
        kumsaati[i][i] = '\\';
    }

    for(int i=8;i<=13;i++)
    {
        kumsaati[i][i+6] = '\\';
    }

    for(int i=1;i<=6;i++)
    {
        kumsaati[i][20-i] = '/';
    }

    for(int i=8;i<=13;i++)
    {
        kumsaati[i][14-i] = '/';
    }

    kumsaati[7][7] = '>';
    kumsaati[7][13] = '<';

    int k=0;

    for(int i=3; i<=17;i++)
    {
        kumsaati[1][i] = 'o';
    }
    for(int i=4; i<=16;i++)
    {
        kumsaati[2][i] = 'o';
    }
    for(int i=5; i<=15;i++)
    {
        kumsaati[3][i] = 'o';
    }
    for(int i=6; i<=14;i++)
    {
        kumsaati[4][i] = 'o';
    }
    for(int i=7; i<=13; i++)
    {
        kumsaati[5][i] = 'o';
    }
    for(int i=8; i<=12; i++)
    {
        kumsaati[6][i] = 'o';
    }

}

void change(int i1,int j1,int i2,int j2,char kumsaati[15][21])
{
    char temp = kumsaati[i1][j1];
    kumsaati[i1][j1] = kumsaati[i2][j2];
    kumsaati[i2][j2] = temp;
}


//--------------------------------------------------------------bastir
void show(char kumsaati[15][21])
{
    for(int i=0;i<15;i++)
    {
        for(int j=0;j<21;j++)
        {
            printf("%c",kumsaati[i][j]);
        }
        printf("\n");
    }

}

void bosluk()
{
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}




int main() //                                                                MAIN
{

    char kum[15][21];
    int kacDk;
    int sleepooo = 998;

    kumsuz(kum);
    show(kum);

    printf("sayac baslatmak icin dk bilgisi girin... ");
    scanf("%d", &kacDk);
    int saniye=(60*kacDk - 1);

    printf("%d dk (%d sn) sayac hazir, baslatmak icin herhangi bir tusa basin...", kacDk, kacDk*60);
    getche();

    printf("\n\n");

// ---------------------------------------- 1
//59
    change(1,3,13,17,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

 //58
    change(1,4,13,16,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//57
    change(1,5,13,15,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//56
    change(1,6,13,14,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//55
    change(1,7,13,13,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//54
    change(1,8,13,12,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }


//53
    change(1,9,13,11,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//52
    change(1,10,13,10,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//51
    change(1,11,13,9,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }


//50
    change(1,12,13,8,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//49
    change(1,13,13,7,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//48
    change(1,14,13,6,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//47
    change(1,15,13,5,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//46
    change(1,16,13,4,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//45
    change(1,17,13,3,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

// ------------------------------------ 2
//44
    change(2,16,12,4,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//43
    change(2,15,12,5,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//42
    change(2,14,12,6,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//41
    change(2,13,12,7,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//40
    change(2,12,12,8,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//39
    change(2,11,12,9,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//38
    change(2,10,12,10,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//37
    change(2,9,12,11,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//36
    change(2,8,12,12,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//35
    change(2,7,12,13,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//34
    change(2,6,12,14,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//33
    change(2,5,12,15,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//32
    change(2,4,12,16,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

// ------------------------------------- 3
//31
    change(3,5,11,15,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//30
    change(3,6,11,14,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//29
    change(3,7,11,13,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//28
    change(3,8,11,12,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//27
    change(3,9,11,11,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//26
    change(3,10,11,10,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//25
    change(3,11,11,9,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//24
    change(3,12,11,8,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//23
    change(3,13,11,7,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//22
    change(3,14,11,6,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//21
    change(3,15,11,5,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

// ---------------------------------------- 4
//20
    change(4,14,10,6,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//19
    change(4,13,10,7,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//18
    change(4,12,10,8,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//17
    change(4,11,10,9,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//16
    change(4,10,10,10,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//15
    change(4,9,10,11,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//14
    change(4,8,10,12,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//13
    change(4,7,10,13,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//12
    change(4,6,10,14,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

// ----------------------------------- 5
//11
    change(5,7,9,13,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//10
    change(5,8,9,12,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//9
    change(5,9,9,11,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//8
    change(5,10,9,10,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//7
    change(5,11,9,9,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//6
    change(5,12,9,8,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//5
    change(5,13,9,7,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//------------------------------------- 6
//4
    change(6,12,8,8,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//3
    change(6,11,8,9,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//2
    change(6,10,8,10,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//1
    change(6,9,8,11,kum);
    for(int i=0;i<kacDk;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

//0
    change(6,8,8,12,kum);
    for(int i=0;i<kacDk-1;i++)
    {
        show(kum);
        printf("%d...", saniye--);
        bosluk();
        Sleep(sleepooo);
    }

    show(kum);
    printf("\n\n%d DK SURE BITTI !", kacDk);
    printf("\n\n\n\n\n\n\n\n\n");


    return 0;
}
