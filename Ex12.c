#include<stdio.h>

#include<stdlib.h>

int main()

{

struct parts

{

char sl[4],material[10];

int yr,qty;

};

int i;

struct parts p[3];

for(i=0;i<3;i++)

{

printf("Enter sl no\n");

fflush(stdin);

gets(p[i].sl);

printf("Enter yr of manufactur , material and qtty\n");

scanf("%d%s%d",&p[i].yr,&p[i].material,&p[i].qty);

}

for(i=0;i<3;i++)

{

if(p[i].sl[0]=='A')

continue;

if(p[i].sl[0]>=100&&p[i].sl[0]<=102)

continue;

if((p[i].sl[0]=='B'&&p[i].sl[2]=='1')||(p[i].sl[0]=='C'&&p[i].sl[0]>'6'))

continue;

printf("%s %d %s %d\n",p[i].sl,p[i].yr,p[i].material,p[i].qty);

   }
}