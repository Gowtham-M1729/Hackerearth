import java.awt.*;
import java.applet.*;
public class Circle extends Applet
{
  public void init() {
    setBackground(Color.blue);
  }
    public void paint(Graphics g)
    {     int i;
        for(i=0;i<=5;i++)
          {
             if(i%2==0)
               {
                  g.drawOval(120,i*60+10,50,50);
               }
               else
               {
                  g.fillOval(120,i*60+10,50,50);
               }
          }
    }
}
1,9,5,13,3,11,7,15,2,10,6,14,4,12,8,16
