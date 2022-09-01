#include <stdio.h>
#include <string.h>
struct student{
	char name[50];
	int grade;
};
struct student student[100],t;
int main(){
	int n=0;
	scanf("%d%*c",&n);
	int i=0,j=0;
	for(i=0;i<n;i++){
		scanf("%[^,],%d%*c",student[i].name,&student[i].grade );
	}
	int m=0;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-m-1;j++){
			if(student[j].grade<student[j+1].grade ){
			t=student[j];
			student[j]=student[j+1] ;
			student[j+1]=t;
			}
		}
		
			
		
	}
	for(i=0;i<n;i++){
		printf("%s,%d\n",student[i].name,student[i].grade);
	}
//printf("%s %d\n",student[0].name, student[0].grade);
	return 0;
}
