// 批量打印头文件，并以txt形式输出到另一个文件夹
// 原理：边读边写（类似复制文件，若想复制可直接改源代码 路径NEWPATH 后缀为 .h 即可）
// copy along with reading
#include <stdio.h>
#include <io.h>
#include <stdlib.h>
#include <string.h>
#define FIRST_PATH "G:\\CodeBlock\\CodeBlocks\\MinGW\\include\\*.h"
#define FILEPATH "G:\\CodeBlock\\CodeBlocks\\MinGW\\include\\"   //可改路径
#define NEWPATH  "C:\\Users\\Jane\\Desktop\\headline\\"
#define SIZE 1000000
#define NUM_MAX 1000
#define LEN_MAX 1000

void print_headline(char file_name[LEN_MAX]);

int main()
{
    char filename[NUM_MAX][LEN_MAX];
    char name_buffer[LEN_MAX];
	struct _finddata_t files;
	int File_Handle;
	int i=0,count=0,j=0;

	File_Handle = _findfirst(FIRST_PATH,&files);
	if(File_Handle==-1)
	{
		printf("error\n");
		return 0;
	}

	do
	{
		strcpy(filename[i],files.name);
		strcpy(name_buffer,files.name);
		print_headline(name_buffer);
		//printf("%s \n",files.name);
		i++;

		/*
		for(j=0;j<=i;j++)
            printf("%s\n",filename[j]);
		*/
	}

	while(0==_findnext(File_Handle,&files) && i<=NUM_MAX);
		_findclose(File_Handle);
	printf("Find %d files\n",i);
	printf("Good job!!");
	return 0;
}

void print_headline(char file_name[LEN_MAX])
{
    int i=0,len;
    char buffer;
    char ch[SIZE];

    char FILEPATH1[LEN_MAX];//=strcat(FILEPATH,file_name);
    char NEWPATH1[LEN_MAX];//=strcat(NEWPATH,file_name);

    strcpy(FILEPATH1,FILEPATH);
    strcpy(NEWPATH1,NEWPATH);
    strcat(FILEPATH1,file_name);
    strcat(NEWPATH1,file_name);

    //去掉.h后缀
    len=strlen(NEWPATH1);
    NEWPATH1[len-2]='\0';
    //
    strcat(NEWPATH1,".txt");

	FILE *fp=NULL;
	FILE *fpn=NULL;

    fp=fopen(FILEPATH1,"r");
    fpn=fopen(NEWPATH1,"w+");
    if(fp==NULL || fpn==NULL)
    {
    	printf("Error");
    	exit(1);//要返回错误代码
    }

    while( (ch[i]=getc(fp)) !=EOF && i<=SIZE )
    {
        //putchar(ch[i]);
        buffer=ch[i];
        fprintf(fpn,"%c",buffer);
        i++;
    }

    fclose(fpn);
    fclose(fp);
    fp=fpn=NULL;//需要指向空，否则会指向原打开文件地址

}
