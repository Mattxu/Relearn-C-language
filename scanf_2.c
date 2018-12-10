#include<stdio.h>

int main()
{
    int score = 0;
	//int score = 120;
    loop:
    scanf("%d",&score);
    if(score < 0 || score > 100)
	{
		printf("please input again:\n");
        goto loop;
    }

    if((score >= 80) && (score <= 100))
	{
		printf("A\n");
	}
    else if((score >= 60) && (score <= 79))
	{
	    printf("B\n");
	}
    else if((score >= 40) && (score <= 59))
	{
        printf("C\n");		
	}
    else
	{
        printf("D\n");		
	}

    return 0;
}
