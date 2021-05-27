/* 14) Faça  um  programa  em  C  que  simule  um  cronômetro com  horas,  minutos  e  segundos.  A  simulação deverá mostrar no vídeo o cronômetro no seguinte formato HH: MM: SS. Inicialmente o cronômetro será 
zerado ( 00: 00: 00 ), sendo que os segundos começarão a ser incrementados, depois os minutos e depois as horas. Lembre-se que a cada 60 segundos os minutos deverão ser incrementados, depois os minutos  voltarão  a  zero.  Quando  as  horas  estiverem prestes  a  chegar  em  24,  o  cronômetro  deverá voltar a zero ( 00: 00: 00 ).  */ 


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int hora,min,seg; 
  int i;
  int u = 0;
  hora = 0, min = 0, seg = 0; 

  system("clear");
  printf("\n ### INICIANDO CRONOMETRO ###\n");
  getchar();
  system("clear");
  
  while (hora < 25)
  { 
    while (min < 60)
    { 
      while (seg < 60)
      {         
        if (seg < 10)
        {
          if (min < 10)
          {
            if (hora < 10)
              printf("\n 0%d:0%d:0%d",hora,min,seg);
            else 
              printf("\n %d:0%d:0%d",hora,min,seg);
          }
          else
          {
            if (hora < 10) 
              printf("\n 0%d:%d:0%d",hora,min,seg);
            else 
              printf("\n %d:%d:0%d",hora,min,seg);
          }
        }
        else
        {
          if (min > 9)
          {
            if (hora > 9)
              printf("\n %d:%d:%d",hora,min,seg);
            else
              printf("\n 0%d:%d:%d",hora,min,seg);
          }        
          else
          {
            if (hora > 9)            
              printf("\n %d:0%d:%d",hora,min,seg);
            else 
              printf("\n 0%d:0%d:%d",hora,min,seg);
          }
       }      
        for (i = 0; i < 1; i++)                  
          u++;         
        seg = seg + 1;      
        system("clear");
      }
      seg = 0; 
      min = min + 1;     
    }
    min = 0; 
    hora = hora + 1;  
    if (hora > 24)
    {
      hora = 0; 
    }         
  } 
  return(0);
}  