#include <stdio.h> 
#include <stdlib.h> 
#include<string.h> 
struct dnode 
{ 
 struct dnode *prev; 
 char place[20]; 
 struct dnode *next;
}; 
int count=0; 
struct dnode*first=NULL; 
struct dnode*last=NULL; 
struct dnode*pinloc=NULL; 
struct dnode*destinationloc=NULL; 
int pinnumber=0,destinationumber=0; 
void insert(char place1[20]) 
{ 
 struct dnode *temp=(struct dnode*)malloc(sizeof(struct dnode));  strcpy(temp->place,place1); 
 temp->next=NULL; 
 temp->prev=NULL; 
 if(!first) 
 { 
 first=temp; 
 last=temp; 
 count++; 
 } 
 else 
 { 
 temp->prev=last; 
 last->next=temp; 
 last=temp; 
 count++; 
 } 
}
void display()/*display the stops from pin to destination*/ { 
 int count; 
 struct dnode *temp=pinloc; 
 if(pinnumber>destinationumber) 
 { 
 for(count=pinnumber;count>destinationumber;count--)  { 
 printf("\n%s",temp->place); 
 printf("\n"); 
 printf(" \n"); 
 printf(" |"); 
 temp=temp->prev; 
 } 
 printf("\n%s",temp->place); 
 } 
 else 
 { 
 for(count=pinnumber;count<destinationumber;count++)  { 
 printf("\n%s",temp->place); 
 printf("\n |\n |"); 
 temp=temp->next; 
 } 
 printf("\n%s",temp->place); 
 } 
}
void search(char pinplace[]) 
{ 
 struct dnode*p=first;/*searching the start location in the list and point a pointer*/ 
 while(p) 
 { 
 pinnumber++; 
 if(!(strcmp(pinplace,p->place))) 
 { 
 pinloc=p; 
 break; 
 } 
 else 
 { 
 p=p->next; 
 } 
 } 
} 
void searchdest(char pinplace[])/*search the destination location in the list  and point a pointer */  
{ 
 struct dnode *p=first; 
 while(p) 
 { 
 destinationumber++; 
 if(!(strcmp(pinplace,p->place))) 
 {
 destinationloc=p; 
 break; 
 } 
 else 
 p=p->next; 
 } 
} 
int main() 
{ 
 char pin[20],destination[20]; 
 int pinchoice; 
 int destinationchoice; 
 printf("********************MMTS TRAINS SCHEDULE  MANAGEMENT SYSTEM***********************************\n\n\n");   
insert("Lingampally");insert("ChandaNagar");insert("Hafizpet");insert("Borabanda ");insert("Bharatnagar"); 
  
insert("FatehNagar");insert("NatureCureHospital");insert("Begumpet");insert("San jeevaiah Park");insert("Secunderabad"); 
 insert("Sithaphalmandi");insert("Arts College");insert("Jamai  Osmania");insert("Vidyanagar");insert("Kacheguda"); 
  
insert("Malakpet");insert("Dabirpura");insert("Yakatpura");insert("Huppuguda");in sert("Faluknuma");
 printf("1.Lingampally 2.Hafizpet 3.Bharatnagar 4.NatureCureHospital  5.Sanjeevaiah Park \n6.Sithaphalmandi 7.Jamai Osmania 8.Kacheguda 9.Dabirpura  10.Huppuguda\n"); 
 printf("11.ChandaNagar 12.Borabanda 13.FatehNagar 14.Begumpet  15.Secunderabad \n16.Arts College 17.Vidyanagar 18.Malakpet 19.Yakatpura  20.Faluknuma"); 
 printf("\n\n\nEnter Your Starting Location Choice\n"); 
 scanf("%d",&pinchoice); 
 switch(pinchoice) 
 { 
 case 1:strcpy(pin,"Lingampally"); 
 break; 
 case 2:strcpy(pin,"Hafizpet"); 
 break; 
 case 3:strcpy(pin,"Bharatnagar"); 
 break; 
 case 4:strcpy(pin,"NatureCureHospital"); 
 break; 
 case 5:strcpy(pin,"Sanjeevaiah Park"); 
 break; 
 case 6:strcpy(pin,"Sithaphalmandi"); 
 break; 
 case 7:strcpy(pin,"Jamai Osmania"); 
 break; 
 case 8:strcpy(pin,"Kacheguda"); 
 break; 
 case 9:strcpy(pin,"Dabirpura");
 break; 
 case 10:strcpy(pin,"Huppuguda"); 
 break; 
 case 11:strcpy(pin,"ChandaNagar");  break; 
 case 12:strcpy(pin,"Borabanda"); 
 break; 
 case 13:strcpy(pin,"FatehNagar"); 
 break; 
 case 14:strcpy(pin,"Begumpet"); 
 break; 
 case 15:strcpy(pin,"Secunderabad");  break; 
 case 16:strcpy(pin,"Arts College");  break; 
 case 17:strcpy(pin,"Vidyanagar"); 
 break; 
 case 18:strcpy(pin,"Malakpet"); 
 break; 
 case 19:strcpy(pin,"Yakatpura"); 
 break; 
 case 20:strcpy(pin,"Faluknuma"); 
 break; 
 default:printf("Enter Right Choice\n");  break; 
 }//start location taking from the user 
 printf("Enter your destination location choice\n");
 scanf("%d",&destinationchoice); 
 switch(destinationchoice) 
 { 
 case 1:strcpy(destination,"Lingampally");  break; 
 case 2:strcpy(destination,"Hafizpet");  break; 
 case 3:strcpy(destination,"Bharatnagar");  break; 
 case 4:strcpy(destination,"NatureCureHospital");  break; 
 case 5:strcpy(destination,"Sanjeevaiah Park");  break; 
 case 6:strcpy(destination,"Sithaphalmandi");  break; 
 case 7:strcpy(destination,"Jamai Osmania");  break; 
 case 8:strcpy(destination,"Kacheguda");  break; 
 case 9:strcpy(destination,"Dabirpura");  break; 
 case 10:strcpy(destination,"Huppuguda");  break; 
 case 11:strcpy(destination,"ChandaNagar");  break; 
 case 12:strcpy(destination,"Borabanda");  break;
 case 13:strcpy(destination,"FatehNagar"); 
 break; 
 case 14:strcpy(destination,"Begumpet"); 
 break; 
 case 15:strcpy(destination,"Secunderabad"); 
 break; 
 case 16:strcpy(destination,"Arts College"); 
 break; 
 case 17:strcpy(destination,"Vidyanagar"); 
 break; 
 case 18:strcpy(destination,"Malakpet"); 
 break; 
 case 19:strcpy(destination,"Yakatpura"); 
 break; 
 case 20:strcpy(destination,"Faluknuma"); 
 break; 
 default:printf("Enter Right Choice\n"); 
 break; 
 }//to take the destination point from the user 
 search(pin); 
 searchdest(destination); 
 printf("***************The trains for your destination are at\n\n");  printf("04:20AM 05:50AM 06:21AM 07:05AM 07:30AM 08:23AM 09:00AM  09:20AM 10:05AM 10:45AM*\n11:30AM 12:05PM 12:40PM 01:10PM  01:20PM* 02:15PM 02:50PM* 03:30PM 03:45PM\n\n04:25PM 04:59PM  05:30PM 06:05PM 06:35PM 07:10PM 07:45PM 08:10PM 08:45PM  09:05PM\n\n09:45PM");
 printf("\n* marked Trains will not come on Sunday\n");  printf("\n\n\n ************The stops to reach your destination  is*************\n\n"); 
 display(); 
} 
