#include<regx52.h>
void delay(unsigned int);
void main()
{
while(1)
{
P1=0x01;
delay(1000);
P1=0x03;
delay(1000);
P1=0x02;
delay(1000);
P1=0x06;
delay(1000);
P1=0x04;
delay(1000);
P1=0x0C;
delay(1000);
P1=0x08;
delay(1000);
P1=0x09;
delay(1000);
}}
void delay(unsigned int a)
{
unsigned char i;
for(;a>0;a--)
{
for(i=250;i>0;i--);
}}