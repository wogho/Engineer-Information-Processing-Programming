// 15. 다음은 자바 코드이다. 출력 결과를 쓰시오.
// 추상 클래스, 상속, 오버로딩/오버라이딩, 다형성

abstract class Vehicle {
    private String name;

    abstract public String getName(String val);

    public String getName() {
        return "vehicle name:" + name;
    }

    public void setName(String val) {
        name = val;
    }
}

class Car extends Vehicle {
    public Car(String val) {
        setName(val);
    }

    public String getName(String val) {
        return "Car name : " + val;
    }

    public String getName(byte[] val) {
        return "Car name : " + val;
    }
}

public class good {
    public static void main(String[] args) {
        Vehicle obj = new Car("Spark");
        System.out.print(obj.getName());
    }
}
