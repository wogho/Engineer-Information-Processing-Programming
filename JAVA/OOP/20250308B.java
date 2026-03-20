// 다음 Java 코드를 보고 빈칸(밑줄)에 공통으로 들어갈 키워드를 작성하세요.
// 인터페이스 구현(빈칸 문제)

interface Person {
    void sayHello();
}

class OliveStaff ________ Person {
    public void sayHello() {
        System.out.println("어서오세요 올리브영입니다~ 필요한 거 있으면 말씀해주세요~");
    }
}

class AbcMartStaff ________ Person {
    public void sayHello() {
        System.out.println("사이즈 찾아드립니다! 필요한 거 있으면 말씀해주세요!");
    }
}

class CoffeeShopStaff ________ Person {
    public void sayHello() {
        System.out.println("주문하신 아이스 아메리카노 나왔습니다~");
    }
}

class Main {
    public static void main(String[] args) {
        Person person = new OliveStaff();
        Person person2 = new AbcMartStaff();
        Person person3 = new CoffeeShopStaff();
        person.sayHello();
        person2.sayHello();
        person3.sayHello();
    }
}
