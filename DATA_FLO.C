#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
char flow1[100],flow2[100],flow3[100],flow4[100],flow5[100],flow6[100],flow7[100];
int j=0,k=0,step;
char var[100];
	char c;
	char line[500];
int variable();
int z=0,l,i=0,cs;

void main()
{

	//int state=0;
	 char filename[100];
	FILE *in;

	clrscr();
	printf("\nA -> Start\n");
	printf("B -> Define Bill\n");
	printf("C -> Other part of code\n");
	printf("D -> Define Bill\n");
	printf("E -> Other Part of code\n");
	printf("F -> Other Part of code\n");
	printf("G -> Use Bill, Define Bill\n");
	printf("H -> Use Bill\n");
	printf("I -> Use Bill, Define Bill\n");
	printf("J -> Use Bill, Define Bill\n");
	printf("K -> Use Bill\n");
	printf("L -> Kill Bill\n");
	printf("enter the name of file:");
	gets(filename);
	in=fopen(filename,"r");
	printf("enter the name of variable:");
	gets(var);
	//printf("enter the step no:");
	//scanf("%d",&step);
	flow1[0]='A';
	flow2[0]='A';
	flow7[0]='L';
	//int state=0,i=0;
	//c[0]="Start->";
	//i++;
	while(!feof(in))
	{
		      c=getc(in);

		      if(c!='\n'&&c!='\t'&&c!='}'&&c!='{'&&c!=' '&&c!=';')
		      {
		      line[i]=c;
		      i++;
		      }
	}
	fclose(in);
	for(i=0;i<strlen(line)-1;i++)
		      {
		      printf("%c",line[i]);
		      }
	for(i=0;i<strlen(line);i++)
		      {
		      if(line[i]==var[0])
		      {
		      i++;
		      while(line[i]!='=')
		      {
		      i++;
		      while(line[i]==var[k])
		      {
		      i++;
		      //flow4[j]='E';
		      if(line[i]==var[k])
		      {
		       flow4[j]='G';
		       j++;
		      }
		      }
		      }
		      }
		      }
		      printf("%c",flow4[0]);
		      for(i=0;i<strlen(line);i++)
		      {
		      if(line[i]=='i')
		      {
		      i++;
		      if(line[i]=='n')
		      {
		      i++;
		      if(line[i]=='t')
		      {
		      i++;
		      if(line[i]==var[k])
		      {
		       flow1[j+1]='B';
		       j++;

		      }
		      }
		      }
		      }
		      }
		      printf("\nFlow Chart of the variable : %c->%c\n",flow1[0],flow1[1]);



	 l=strlen(flow1);
	 flow1[l]='$';
	 i=0;
	 printf("enter the case no you want to check:");
	 scanf("%d",cs);

if(variable())
	{
	   if(flow1[i]=='$')
	      printf("\nyes...Allowed\n");

	   else
	    printf("\nSorry...Not-Allowed there is a bug\n");
	}
	else
	    printf("\nSorry...Not-Allowed there is a bug\n");


	    getch();
		//return(0);
		}
 int variable()
{       //printf("aaa");
	for(z=0;z<8;z++)
	{
	switch(cs)
	{
	case 0:
	if(flow1[i]=='A')
	{
		i++;
		//printf("aaaaaaaaaaa");
		if(flow1[i]=='B')
		{
			i++;
			return(1);
			if(flow1[i]=='C')
			{
				i++;
				if(flow1[i]=='D')
				{
					i++;
					return(1);
				}
			}
			else
			return(1);
		     }
		    else
		   return(1);
	}
	else if(flow1[i]=='D')
	{
		i++;
				if(flow1[i]=='E')
				{
					i++;
					if(flow1[i]=='F')
						{
						i++;
						if(flow1[i]=='G')
						{
							i++;
							return(1);



					}
					else return(0);
					}

				else return(0);
			}else return(0);
			}

	  else if(flow1[i]=='G')
		{
		i++;
		return(1);
		}
	  else if(flow1[i]=='L')
			{
				i++;
				return(1);
			}
	  else if(flow1[i]=='K')
		{
		i++;
		if(flow1[i]=='L')
		{
		i++;
		return(1);
		}
		}
		else if(flow1[i]=='H')
		{
		i++;
		if(flow1[i]=='I')
		{
		i++;
		return(1);
		}
		}
			else
			{
				return(1);


}
case 2:
	if(flow2[i]=='D')
	{
		i++;
				if(flow2[i]=='E')
				{
					i++;
					if(flow2[i]=='F')
						{
						i++;
						if(flow2[i]=='G')
						{
							i++;
							return(1);



					}
					else return(0);
					}

				else return(0);
			}else return(0);
			}

	  else if(flow2[i]=='G')
		{
		i++;
		return(1);
		}
	  else if(flow2[i]=='L')
			{
				i++;
				return(1);
			}
	  else if(flow2[i]=='K')
		{
		i++;
		if(flow2[i]=='L')
		{
		i++;
		return(1);
		}
		}
		else if(flow2[i]=='H')
		{
		i++;
		if(flow2[i]=='I')
		{
		i++;
		return(1);
		}
		}
			else
			{
				return(0);
				}
 case 3:
 if(flow3[i]=='G')
		{
		i++;
		return(1);
		}
	  else if(flow3[i]=='L')
			{
				i++;
				return(1);
			}
	  else if(flow3[i]=='K')
		{
		i++;
		if(flow3[i]=='L')
		{
		i++;
		return(1);
		}
		}
		else if(flow3[i]=='H')
		{
		i++;
		if(flow3[i]=='I')
		{
		i++;
		return(1);
		}
		}
			else
			{
				return(0);}
 case 4:
 if(flow4[i]=='L')
			{
				i++;
				return(1);
			}
	  else if(flow4[i]=='K')
		{
		i++;
		if(flow4[i]=='L')
		{
		i++;
		return(1);
		}
		}
		else if(flow4[i]=='H')
		{
		i++;
		if(flow4[i]=='I')
		{
		i++;
		return(1);
		}
		}
			else
			{
				return(0); }
  case 5:
  if(flow5[i]=='K')
		{
		i++;
		if(flow5[i]=='L')
		{
		i++;
		return(1);
		}
		}
		else if(flow5[i]=='H')
		{
		i++;
		if(flow5[i]=='I')
		{
		i++;
		return(1);
		}
		}
			else
			{
				return(0);  }
case 6:
if(flow6[i]=='H')
		{
		i++;
		if(flow6[i]=='I')
		{
		i++;
		return(1);
		}
		}
			else
			{
				return(0);   }


}
}

return(0);
}

