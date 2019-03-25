#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"myheader.h"

extern  person_t *head;

void write_person_data(FILE *fp)
{

struct person *tt;

tt=head;

while(tt!=NULL)
{
fprintf(fp,"%d %s %d %d %d\n",tt->age,tt->name,tt->vertical.feet,tt->vertical.inches,tt->idenifier);
tt=tt->next;
}


}
