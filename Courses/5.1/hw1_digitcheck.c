#include <stdio.h>
#define MAXLENGTH 1000

void mygetchar(char s[]);//读入字符串到数组s[]中
long long int isValid(char s[]);//判断是否为合法数据,如果是则输出该数据的十进制形式,否则输出"-1"

int main(){
	char s[MAXLENGTH];
	mygetchar(s);
	if(isValid(s)!=-1)
		printf("%lld\n", isValid(s));
	else
		printf("%s is not valid.\n", s);
	return 0;
}

void mygetchar(char s[]){
	int c,i;
	for(i=0;(c=getchar())!='\n';i++)
		s[i]=c;
	s[i]='\0';
}

long long int isValid(char s[]){
	int i=0;
	int sign=1;
	long long int num=0;
	
	//判断符号
	if(s[i]=='+')
		i++;
	else if(s[i]=='-'){
		sign=-1;
		i++;
	}
	//判断进制
	if(s[i]=='0'){
		i++;
		if(s[i]=='b'||s[i]=='B'){		//二进制判断
			i++;
			for(int j=i;s[j]!='\0';j++)
				if (s[j]!='0'&&s[j]!='1')
					return -1;
			for(int j=i;s[j]!='\0';j++)
				num=num*2+s[j]-'0';
			return num;
		}else if(s[i]=='x'||s[i]=='X'){ //十六进制判断
            i++;
            for(int j=i;s[j]!='\0';j++)
                if (!((s[j]>='0'&&s[j]<='9')||(s[j]>='a'&&s[j]<='f')||(s[j]>='A'&&s[j]<='F')))
                    return -1;
            for(int j=i;s[j]!='\0';j++){
                if((s[j]>='0'&&s[j]<='9'))
					num=num*16+s[j]-'0';
				else if(s[j]>='a'&&s[j]<='f')
                    num=num*16+s[j]-'a'+10;
				else
                    num=num*16+s[j]-'A'+10;
			}
            return num;
        }else if(s[i]>='0'&&s[i]<='7'){ //八进制判断
            for(int j=i;s[j]!='\0';j++)
                if (!(s[j]>='0'&&s[j]<='7'))
                    return -1;
            for(int j=i;s[j]!='\0';j++)
                num=num*8+s[j]-'0';
            return num;
        }else							//非法字符
			return -1;
	}else{								//十进制判断
		for(int j=i;s[j]!='\0';j++)
            if(!(s[j]>='0'&&s[j]<='9'))
                return -1;
		for(int j=i;s[j]!='\0';j++)
            num=num*10+s[j]-'0';
		return num;
	}
}
	
