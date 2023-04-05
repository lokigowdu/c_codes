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
 * Author: Lokesh A( )
 * Title: Project Engineer
 * Last Modified Date: 30.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

void sum(void);

// Main Function
int main()
{
     
     sum();
     return 0;
}

void sum() 
{
    int num1, num2, result;
    
    printf("Enter num1: ");
    scanf("%d", &num1);
    
    printf("Enter num2: ");
    scanf("%d", &num2);
    
    result = num1 + num2;
    
    printf("The sum of %d and %d is: %d\n\n", num1, num2, result);
}
// Program End
