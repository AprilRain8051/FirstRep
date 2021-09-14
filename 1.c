#include <stdio.h>
#define MAXLINE 1000

void getline1 (char *s);
void strcat1 (char *to, char *from);
void strncpy1 (char *to, char *from, int n);
int strend1 (char *to, char *from);


int main (void){

	char s1[MAXLINE];
	char s2[MAXLINE];
	int n = 0;
	int q = 0;

	printf ("Введите первую строку\n");
	getline1 (s1);
	printf ("Введите вторую строку\n");
	getline1 (s2);

	printf ("Вы в главном меню\n");
	printf ("1 - скопировать строку 2 в конец строки 1\n");
	printf ("2 - скопировать n символов строки 2 в начало строки 1\n");
	printf ("3 - проверить, есть ли строка 2 в конце строки 1\n");
	printf ("Введите желаемое действие\n");
	scanf ("%d", &n);

	switch (n){
		
		case 1:
			strcat1 (s1, s2);
			printf ("%s\n", s1);	
		break;

		case 2:
			printf ("Введите количество символов для копирования\n");
			scanf ("%d", &q);
			strncpy1 (s1, s2, q);
			printf ("%s\n", s1);
		break;

		case 3:
			(strend1 (s1, s2) == 1)? printf ("Присутствует\n") : printf ("Не присутствует\n");	
		break;

		default:
			printf ("Ты ввел неправильное значение, кожаный мешок\n");
		break;

	}

}

void strcat1 (char *to, char *from){

	while (*to++){
	;
	}
	to--;
	while (*to++ = *from++){
	;	
	}

}


void strncpy1 (char *to, char *from, int n){

	for (int i = 0; i<n; i++){
		*to++ = *from++;
	}
}

int strend1 (char *to, char *from){
// строки будем сравнивать с конца
	
	int n = 0;
	while (*from++){   //подсчет кол-ва симвовлов
		n++;
	}
	while (*to++){  //дошли в конец стоки
	;
	}
	to--;  //потому что иначе будем сравнивать символы конца строк
	from--;
	
	for (; n>0;n--){
		if (*to-- != *from--){
		n++;
		break;
		}
	}	
	if (n == 0)
		return 1;
	else
		return 0; 
}



void getline1 (char *s){

	int c = 0;
	while ((c = getchar()) != '\n'){
		*s++ = c;
	}
	*s++ = '\0';
}
