/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 
 * Brief: 
 * Author: Lokesh A  ()
 * Title: Project Engineer
 * Last Modified Date: 23.03.2022
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int a = 10 , b = 15 ,r ;

     r = a + b;
     printf("Addition       : a+b = %d\n",r);

     r = a-b;
     printf("Subtraction    : a-b = %d\n",r);

     r = a*b;
     printf("Multiplication :%d\n",r);

     r = a/b;
     printf("Division       :%d\n",r);

     r = a%b;
     printf("Modulo Division: %d\n",r);

     r= a++;
     printf("Increment the value of a by 1 : %d\n",a+1);

     r = b--;
     printf("Decremented the value of b by 1 :%d\n",b--);

     
     return 0;
}

// Program End
