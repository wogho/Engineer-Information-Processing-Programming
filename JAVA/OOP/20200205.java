// 5. 다음은 자바 코드이다. 다음 밑줄에 들어갈 키워드를 쓰시오.
// 상속, 메소드 오버라이딩, 다형성(업캐스팅)

class parent
	public void show(){
    	system.out.println("Parent");
    }
}

class Child extends Parent{
	public void show(){
    	system.out.println("Child");
    }
}

public class good{
	public static void main(String[] args){
    	Parent pa = ____  Child();
        pa.show();
    }
}
