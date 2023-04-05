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
 * Author: Lokesh A  ( )
 * Title: Project Engineer
 * Last Modified Date: 24.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int a = 55, b = 5;

     printf("Binary OR Operator of a and b is %d\n", a | b);

     printf("Binary AND Operator of a and b is %d\n ", a & b);

     printf("Binary XOR Operator of a and b is %d\n",a ^ b);

     printf("Binary Ones complement Operator of a is %d\n",~ a);

     printf("Binary Left Shift Operator of a is %d\n", a << 2);

     printf("Binary Right Shift Operator of a is %d\n", a >> 2);

     return 0;
} 

// Program End
