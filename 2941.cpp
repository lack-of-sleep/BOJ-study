#include <string.h>
#include <stdio.h>

int main()
{
	char s[101]; 
	int count=0; 
	
	scanf("%s",s); 
	
	for(int i=0;i<strlen(s);i++) //s배열길이만큼 실행 
	{
		if(s[i]=='c') //해당 문자가 c면 
		{
			if (s[i+1]== '='|s[i+1]=='-') //다음문자가  =|-이면  
				continue; //건너뜀 
		}
		
		else if(s[i]=='d') //해당 문자가 d면 
		{
			if (s[i+1]=='z'&&s[i+2]=='=') //다음문자가 z=이면   
				continue; //건너뜀 
			else if (s[i+1]=='-') // 다음문자가 -이면 
				continue; //건너뜀 
		}
		
		else if(s[i]=='l'|s[i]=='n') //해당 문자가 l|n이면 
		{
			if(s[i+1]=='j') //다음문자가 j면 
				continue; //건너뜀 
		}
		
		else if(s[i]=='s'|s[i]=='z') //해당 문자가 s|z이면 
		{
			if (s[i+1]=='=') //다음문자가 =이면 
				continue; //건너뜀 
		}
		
		count++;
		//위에 해당하는 유형은 전부 이부분을 건너뛰었기에 i+1차례가 되어야 count++가 됨
		//dz=또한 dz=부분에서 건너뛰고 z=부분에서 다시 건너뛰기때문에 결국 count++는 한번만 들어감 
	}
	
	printf("%d",count);
		
	return 0;
}
	
