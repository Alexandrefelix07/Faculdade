package geometria;

public class Triangulo implements Forma {
    public double altura;
    public double base;
    @Override
    public double getArea(){
    return (base*altura)/2;
    }
}
