package geometria;

public class Quadrado implements Forma{
    public double lado;
    @Override
    public double getArea(){
    return (lado*lado);
    }
}
