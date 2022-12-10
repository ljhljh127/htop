/*
htop - htop.c
(C) 2004-2011 Hisham H. Muhammad
(C) 2020-2021 htop dev team
Released under the GNU GPLv2+, see the COPYING file
in the source distribution for its full text.
*/

#include "config.h" // IWYU pragma: keep
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CommandLine.h"
int meml=100;   // 메모리제한
int cpul=100;   // CPU제한
int notice; // 알림여부

int main(int argc, char **argv)
{
   printf("알림 여부를 선택해주세요 알림받기=0 알림끄기=1\n");
   scanf("%d", &notice);
   if (notice == 0)
   {
      printf("알림 받을 개별 메모리 제한값을 입력해주세요\n");
      scanf("%d", &meml);
      printf("알림 받을 개별 cpu 제한값을 입력해주세요\n");
      scanf("%d", &cpul);
   }
   else
   {
      //nothing to do 
   }

   return CommandLine_run(PACKAGE, argc, argv);
}
