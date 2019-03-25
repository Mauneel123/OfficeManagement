#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"myheader.h"

extern person_t *head;

 void search_age_person_data(unsigned short a)

{
struct person *c;
c=head;



while(c!=NULL)
{
if(c->age==a)
{
fprintf(stdout,"%d %s %d %d %d\n",c->age,c->name,c->vertical.feet,c->vertical.inches,c->idenifier);
}

c=c->next;

}


}
