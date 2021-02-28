#include<stdio.h>
int main(){
	int nilai,ch;
	nilai = 85;
if (nilai >= 80) {
    ch = 'A';
}
if (nilai >= 70) {
    ch = 'B';
}
if (nilai >= 60) {
    ch = 'C';
}
if (nilai >= 50) {
    ch = 'D';
}
if (nilai >= 40) {
    ch = 'E';
}
printf("%c\n", ch);
}
