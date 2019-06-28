#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <unistd.h>
#include <conio.h>

int x,y;
int px[2000],py[2000];
int tool,arz,police;
int finish=0;
int st;
int df=0;
int hasan=0;
int tedad_harkat_dozd;
int tedad_harkat_police;
int hosein;

void change_color(int c)
{
    HANDLE  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, c);
}

void rand_px_py (int tool,int arz,int police)
{
    int k;

for(k=0;k<police;k++)
{
px[k]=rand()%tool;
py[k]=rand()%arz;

int xx=1;
while(xx!=0)
{
    xx=0;
if(px[k]==x&&py[k]==y)
{
    xx=1;
px[k]=rand()%tool;
py[k]=rand()%arz;
}
}

int xxx=1;
if(k>0)
{
while(xxx!=0)
{
    xxx=0;
int i;
for(i=k-1;i>=0;i--)
{
    if(px[k]==px[i]&&py[k]==py[i] || px[k]==x&&py[k]==y)
    {
        xxx=1;
       px[k]=rand()%tool;
        py[k]=rand()%arz;
    }
}
}
}
}
    int l;
    int l1=0;

int i1;
/*for(i1=0;i1<police;i1++)
{
    printf("%d ",px[i1]);
}
printf("\n");
int i2;
for(i2=0;i2<police;i2++)
{
    printf("%d ",py[i2]);
}
printf("\n");
}*/
}

int check_array (int x3,int y3,int police)
{
    int i,max=0;
    for(i=0;i<police;i++)
    {
       if(px[i]==x3)
       {
           if(py[i]==y3)
           {
               max=1;
           }
       }
    }
    return max;
}

void print (int tool ,int arz)
{
    int i,j,df=0;
    for(i=0;i<arz;i++)
    {

        printf("  . ");


        for(j=0;j<tool;j++)
        {
            if(check_array(j,i,police)==1)
            {
                if(i==y&&j==x && df==0)
                {
                change_color(14);
                printf("H");
                change_color(15);
                printf(" . ");

                }
                else{
                change_color(11);
                printf("p");
                change_color(15);
                printf(" . ");
                }
            }

           else if(i==y&&j==x)
            {

                change_color(12);
                printf("D");
                change_color(15);
                printf(" . ");
            }

            else if(i!=y || j!=x || check_array(j,i,police)!=1)
            {
            printf("  . ");
            }

        }
    printf("\n");


    }
    df++;
}
 void harkat_dozd ()
 {
    int st;
    int xxx=0;

        st=rand()%9;
      while(xxx!=1)
      {
          int yyy=0;
         /* while(yyy==2)
          {

          if(hasan==1)
          {
              yyy=0;
              int i;
              for(i=0;i<police;i++)
              {
                 if(px[i]==x-1&&(py[i]==y+1||py[i]==y-1||py[i]==y||py[i]==y+2||py[i]==y-2))
                 {
                     if(st==2||st==6||st==8)
                     {
                         st=rand()%9;
                         yyy++;
                     }
                 }
                 if(px[i]==x+1&&(py[i]==y+1||py[i]==y-1||py[i]==y||py[i]==y+2||py[i]==y-2))
                 {
                     if(st==1 || st==5 || st==7)
                     {
                         st=rand()%9;
                         yyy++;
                     }
                 }
              }
          }
          }*/


            char a[]={0,0,0,0};

             if(x==tool-1 && (st==1 || st==5 || st==7))
             {
                st=rand()%9;
             }
            else{a[0]=1;}

                 if(x==0 && (st==2||st==6||st==8))
             {
                st=rand()%9;
             }
            else{a[1]=1;}

                          if(y==arz-1 && (st==3||st==5||st==8))
             {
                st=rand()%9;
             }
                              else{a[2]=1;}

                 if(y==0 && (st==4||st==6||st==7) )
             {
                st=rand()%9;
             }
                              else{a[3]=1;}

             if(a[0]==1&&a[1]==1&&a[2]==1&&a[3]==1)
                {

                    break;
                }

      }

            if(st==0){}
            if(st==1)
            {
                x=x+1;
                tedad_harkat_dozd++;
            }
            if(st==2)
            {
                x=x-1;
                tedad_harkat_dozd++;

            }
              if(st==3)
            {
                y=y+1;
                tedad_harkat_dozd++;
            }
            if(st==4)
            {
                y=y-1;
                tedad_harkat_dozd++;
            }
            if(st==5)
            {
                x=x+1;
                y=y+1;
                tedad_harkat_dozd++;
            }
            if(st==6)
            {
                x=x-1;
                y=y-1;
                tedad_harkat_dozd++;
            }
            if(st==7)
            {
                x=x+1;
                y=y-1;
                tedad_harkat_dozd++;
            }
            if(st==8)
            {
                x=x-1;
                y=y+1;
                tedad_harkat_dozd++;
            }
            int i;
             for(i=0;i<police;i++)
    {

if(px[i]==x && py[i]==y)
{
    hosein=1;
    finish=1;
    return;
}
 }
 }
int check_harkat_police (int x1,int y1,int n)
{

    int i,xxx;
    for(i=n-1;i>=0;i--)
    {
            if(px[i]==x1 && py[i]==y1 )
            {
            xxx=1;
            }
    }
return xxx;
}
void dide_police (int x3,int y3)
{
    int i;
    int max=0;
    while(max!=1)
    {

                char b[]={0,0,0,0};

            if(x3<x && (st==2||st==6||st==8))
            {
                st=rand()%9;
            }
                        else{b[0]=1;}

            if(x3>x && (st==1 || st==5 || st==7))
            {
                st=rand()%9;
            }
                        else{b[1]=1;}

            if(y3<y && (st==4||st==6||st==7))
            {
                st=rand()%9;
            }
                        else{b[2]=1;}

            if(y3>y && (st==3||st==5||st==8))
            {
                st=rand()%9;
            }
            else{b[3]=1;}
            if(b[0]==1&&b[1]==1&&b[2]==1&&b[3]==1)
                {
max=1;
                }

    }
    }



void harkat_police()
{
    int i;
    for(i=0;i<police;i++)
    {
     st=rand()%9;
int xxx=0;
      while(xxx!=1)
      {
            char a[]={0,0,0,0};

if ( (px[i]==x-1&&(py[i]==y+1||py[i]==y-1||py[i]==y||py[i]==y+2||py[i]==y-2))||
    (px[i]==x-2&&(py[i]==y+1||py[i]==y-1||py[i]==y||py[i]==y+2||py[i]==y-2))||
    (px[i]==x+1&&(py[i]==y+1||py[i]==y-1||py[i]==y||py[i]==y+2||py[i]==y-2))||
    (px[i]==x+2&&(py[i]==y+1||py[i]==y-1||py[i]==y||py[i]==y+2||py[i]==y-2))||
    (px[i]==x&&(py[i]==y+1||py[i]==y-1||py[i]==y+2||py[i]==y-2))  || hasan==1  )
{
    hasan=1;
dide_police(px[i],py[i]);
}

             if(px[i]==tool-1 && (st==1 || st==5 || st==7))
             {
                st=rand()%9;
             }
            else{a[0]=1;}

                 if(px[i]==0 && (st==2||st==6||st==8))
             {
                st=rand()%9;
             }
            else{a[1]=1;}

                if(py[i]==arz-1 && (st==3||st==5||st==8))
             {
                st=rand()%9;
             }
                              else{a[2]=1;}

                 if(py[i]==0 && (st==4||st==6||st==7) )
             {
                st=rand()%9;
             }
                              else{a[3]=1;}

             if(a[0]==1&&a[1]==1&&a[2]==1&&a[3]==1)
                {

                    break;
                }


      }

            int a1,a2;
            a1=px[i];
      a2=py[i];


            if(st==0){}
            if(st==1)
            {
            px[i]=px[i]+1;
            tedad_harkat_police++;
            }
            if(st==2)
            {
            px[i]=px[i]-1;
            tedad_harkat_police++;
            }
              if(st==3)
            {
            py[i]=py[i]+1;
            tedad_harkat_police++;
            }
            if(st==4)
            {
            py[i]=py[i]-1;
            tedad_harkat_police++;
            }
            if(st==5)
            {
                px[i]=px[i]+1;
                py[i]=py[i]+1;
                tedad_harkat_police++;
            }
            if(st==6)
            {
                px[i]=px[i]-1;
                py[i]=py[i]-1;
                tedad_harkat_police++;
            }
            if(st==7)
            {
                px[i]=px[i]+1;
                py[i]=py[i]-1;
                tedad_harkat_police++;
            }
            if(st==8)
            {
                px[i]=px[i]-1;
                py[i]=py[i]+1;
                tedad_harkat_police++;
            }

            if(px[i]==x&&py[i]==y)
            {
                finish=1;
                st=0;


            }
            if(i>0)
            {
            if(check_harkat_police(px[i],py[i],i)==1)
            {
                px[i]=a1;
                py[i]=a2;

            }
            }
}
}


int main()
{
    printf("salam\ntedade sotoon haye fazaye shabih sazie delkhah ro vared kon\n");
    scanf("%d",&tool);
        printf("hala tedade satr ha ro vared kon\n");
        scanf("%d",&arz);
            printf("tedade police ro ham vared kon\n");
            scanf("%d",&police);





time_t t=time(NULL);
srand(100*t);

y=rand()%arz;
x=rand()%tool;

rand_px_py(tool,arz,police);
int dfff=0;
int i;
while(finish!=1)
{
    finish=0;
    if(dfff==0)
    {
print(tool,arz);
    }
    dfff=1;

harkat_dozd();
if(hosein!=1)
{
harkat_police();
}


Sleep(600);
system("cls");
if(dfff>0)
{
print(tool,arz);
}

}
printf("dozd dastgir shod :) \n");
printf("tedad harkate dozd = %d\n",tedad_harkat_dozd);
printf("tedad harkate police = %d",tedad_harkat_police);





    return 0;
}
