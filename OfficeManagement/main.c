#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"myheader.h"

  void read_person_data(FILE *fp); 

  void write_person_data(FILE *fp); 

  void insert_plist(unsigned short a, char *b, int c, int d, int e); 

  void delete_person_data(unsigned short a, int b);
	
  void search_age_person_data(unsigned short a);

    void search_height_person_data(int ft1, int inch1, int ft2, int inch2);

  
  person_t *head;

int main(int argc, char *argv[])
{

FILE *f,*f1;

f=fopen(*(argv+1),"r");
f1=fopen(*(argv+2),"w");

read_person_data(f);
//search_age_person_data(11);
//search_height_person_data(5,5,6,5);
//delete_person_data(11,1123 );
write_person_data(f1); 

fclose(f);
fclose(f1);




}