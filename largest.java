import java.io.*;
import java.util.*;
public class largest
{
public static void main(String args[])
{
int a,b,c;
Scanner sc=new Scanner(System.in);
a=sc.nextInt();
b=sc.nextInt();
c=sc.nextInt();
if(a>b && a>c)
{
System.out.println(" A is greater" +a);
}
else if(b>c && b>a)
{
System.out.println("B is greater" +b );
}
else
{
System.out.println("c is greater" +c);
}
}
}
