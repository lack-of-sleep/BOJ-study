#include <string.h>
#include <stdio.h>

int main()
{
	char s[101]; 
	int count=0; 
	
	scanf("%s",s); 
	
	for(int i=0;i<strlen(s);i++) //s�迭���̸�ŭ ���� 
	{
		if(s[i]=='c') //�ش� ���ڰ� c�� 
		{
			if (s[i+1]== '='|s[i+1]=='-') //�������ڰ�  =|-�̸�  
				continue; //�ǳʶ� 
		}
		
		else if(s[i]=='d') //�ش� ���ڰ� d�� 
		{
			if (s[i+1]=='z'&&s[i+2]=='=') //�������ڰ� z=�̸�   
				continue; //�ǳʶ� 
			else if (s[i+1]=='-') // �������ڰ� -�̸� 
				continue; //�ǳʶ� 
		}
		
		else if(s[i]=='l'|s[i]=='n') //�ش� ���ڰ� l|n�̸� 
		{
			if(s[i+1]=='j') //�������ڰ� j�� 
				continue; //�ǳʶ� 
		}
		
		else if(s[i]=='s'|s[i]=='z') //�ش� ���ڰ� s|z�̸� 
		{
			if (s[i+1]=='=') //�������ڰ� =�̸� 
				continue; //�ǳʶ� 
		}
		
		count++;
		//���� �ش��ϴ� ������ ���� �̺κ��� �ǳʶپ��⿡ i+1���ʰ� �Ǿ�� count++�� ��
		//dz=���� dz=�κп��� �ǳʶٰ� z=�κп��� �ٽ� �ǳʶٱ⶧���� �ᱹ count++�� �ѹ��� �� 
	}
	
	printf("%d",count);
		
	return 0;
}
	
