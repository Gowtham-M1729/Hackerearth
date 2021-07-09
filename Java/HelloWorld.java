class Helloworld {
public static void main(String args[]) {
System.out.print("Hello World"+"\n"+args[0]);
boolean b=true;
int a=5,d=6;
System.out.println("\\"+b);
MyClass myObj1=new MyClass();
MyClass myObj2=new MyClass();
System.out.println(myObj1.x);
System.out.println(myObj2.fun(a,d));
System.out.println(myObj1.fun((float)a,(float)d));
main(10);
}
public static void main(int k) { 
        System.out.println("Hi, " + k); 
}
}
class MyClass {
  int x = 5;
  long fun(long y,long a)
    { return a*y;
    }
  long fun(int y,long a)
    { return a+y;
    }
  double fun(double y,double a)
    { return a*y;
    }
  float fun(float y,float a)
    { return a+y;
    }
}
