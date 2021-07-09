public class volumes {
public static void main(String args[]) {
double a=5,b=6,d=8;
fun p=new fun(a);
fun s=new fun(a,b);
fun l=new fun(a,b,d);
System.out.println(p.volume());
System.out.println(s.volume());
System.out.println(l.volume());
System.out.println(l.k+" "+p.b);
main(10);
}
public static void main(int k) { 
        System.out.println("Hi, " + k); 
}
}
class fun{
  double k=2.0,b,d;
  fun(double a)
    { k=b=d=a;
      
    }
  fun(double y,double a)
    { k=y*y;
      b=a;
      d=3.14;
    }
  fun(double y,double a,double m)
    { k=y;
      b=a;
      d=m;
    }
  double volume()
     {
       return k*b*d;
     }
  
}
