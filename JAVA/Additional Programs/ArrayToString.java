public class ArrayToString
{
   public static void main(String args[])
   {
      char[] ch = {'s','t','r','a','w','b','e','r','r','i','e','s'};
      String str = new String(ch);
      System.out.println(str);
 
      String str2 = String.valueOf(ch);
      System.out.println(str2);
   }
}