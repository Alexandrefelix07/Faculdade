package geometria;

public class Geometria {

    public static void main(String[] args) {
        
        Triangulo t = new Triangulo();
        t.base =4;
        t.altura =3;
        Quadrado q = new Quadrado();
        q.lado=5;
        Retangulo r =new Retangulo();
        r.altura =5;
        r.base =6;
        double a =t.getArea();
        System.out.println("Area do trinagulo : "+ a);
        double a2 = q.getArea();
        System.out.println("Area do quadrado : "+ a2);
        double a3 = r.getArea();
        System.out.println("Area do Retangulo : "+a3);
        
        
        
    }
    
}
