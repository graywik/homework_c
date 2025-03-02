#include <stdio.h>
#include <string.h>

#define InFile  "input.txt"
#define OutFile "output.txt"

#define SIZE    101

//вырезает имя файла из пути и возвращает позицию в пути, где начинается имя файла
int cut_filename(char *p, char *f, int size){
    int slesh; int cnt=0;
    for (int i = 0; i < size; i++)
    {
        if (p[i] == '/') 
            {slesh=i+1; cnt=0;}
        else 
            {f[cnt++]=p[i];}
    }
    f[cnt]='\0';
    return slesh;
}

//заменяет или добавляет расширение к имени файла, возвращает длину нового имени с расширением
int change_ext(char *s, const char *ex){
    int i=0;
    while (1){
        if ((s[i] == '.') || (s[i] == '\n')) 
            {break;}
        i++;
    }
    while (*ex) {
        s[i++]=*ex++;
    } 
    s[i]='\0';
    return i;
}
 
int main(void)
{  
FILE *f;
char path[SIZE];
char file_name[SIZE]; 
const char ext[8] = ".html"; 

    char c; 
    int count=0; 
    // <- input
    f = fopen(InFile, "r");
    while ((c = getc(f)) != EOF) {
        path[count++]=c;
    }
    fclose(f);
    path[count]='\0';
    
    int cnt_slesh = cut_filename(&path[0], &file_name[0], count);
    
    int sz = change_ext(&file_name[0], &ext[0]);
        
    //составляем полный путь к файлу с новым именем
    int i;
    for (i = 0; i < sz; i++)
    {
        path[cnt_slesh+i]=file_name[i];
    }
    path[cnt_slesh+i]='\0';
  
    // -> output
    f = fopen(OutFile, "w");
    fprintf(f, "%s", path);
    fclose(f);
     
    return 0;
}
