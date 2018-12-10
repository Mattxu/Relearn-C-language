#include<stdio.h>

void safe_flush()
{
    char c;
    while(((c = getchar()) != '\n') && (c != EOF));	
}

int main()
{
    int score;
    loop:
    scanf("%d",&score);
    if(score < 0 || score > 100)
	{
        safe_flush();
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
