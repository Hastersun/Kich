#include<iostream>
using namespace std; 

char CodeSpace[10000],WorkSpace[114514];
int ptr = 0;
int Astack[1919],Aptr = 0;//the stack and pointer for while(p){}

int Machine()
{
	for (int Macpointer=0;CodeSpace[Macpointer]!='\0';Macpointer++)
	{
		
		switch (CodeSpace[Macpointer])
		{
			case 'r':WorkSpace[ptr]++;break;
			case 'l':WorkSpace[ptr]--;break;
			case 'p':ptr++;break;
			case '!':ptr?ptr--:ptr;break;
			case 'g':scanf("%c" , &WorkSpace[ptr]);break;
			case 'k':printf("%c" , WorkSpace[ptr]);break;
			case '{':Astack[Aptr]=Macpointer;Aptr++;break;
			case '}':{
				if(WorkSpace[ptr]='\0')
				{
					Macpointer = Astack[Aptr--];
				}else{
					Astack[Aptr--]=0;
					Aptr--;
				}
			}break;
		}
	}
	
	return 0;
}

int main()
{
	printf(">>>");
	scanf("%s",CodeSpace);
	for(int ptr1=0;ptr1< 114514;ptr1++)
	{
		WorkSpace[ptr1]='\0';
	}
	Machine();
	return 0;
}
