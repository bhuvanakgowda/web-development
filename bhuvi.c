 #include<stdio.h>
void main(){
    FILE *file=fopen("test.txt","r+");
    fputs("hello,file");
}