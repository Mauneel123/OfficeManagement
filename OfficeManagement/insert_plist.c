#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"myheader.h"

extern person_t *head;
	
 void insert_plist(unsigned short a, char *b, int c, int d, int e)

	{
	
	struct person *tperson;
	struct person *t;
	
	tperson = (struct person *)malloc(sizeof(struct person));

	tperson->age=a;	
	int ll=strlen(b);
  	tperson->name=(char *)malloc(((sizeof(char))*ll)+1);
	strcpy(tperson->name,b);
	tperson->vertical.feet=c;
	tperson->vertical.inches=d;
   	tperson->idenifier=e;
	
	tperson->next=NULL;


	if(head==NULL)
		{	
			head=tperson;

		}

	else if(head->age<a)
		{
			tperson->next=head;
			head=tperson;		
				
		}
	
	else
		{
			
			t=head;
			while(t->next!=NULL && (t->next)->age>=a)
				{t=t->next;}

			tperson->next=t->next;
			t->next=tperson;
		}
	

}
