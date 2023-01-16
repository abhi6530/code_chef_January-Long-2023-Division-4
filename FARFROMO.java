/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		for(int i = 0;i<t;i++){
		    int x1 = sc.nextInt();
		    int y1 = sc.nextInt();
		    int x2 = sc.nextInt();
		    int y2 = sc.nextInt();
		    
		    int x = ((x1*x1) + (y1*y1));
		    int y = ((x2*x2) + (y2*y2));
		    
		    if(x>y){
		        System.out.println("ALEX");
		    }
		    else if(y>x){
		        System.out.println("BOB");
		    }else
		       System.out.println("EQUAL");
		}
	}
}
