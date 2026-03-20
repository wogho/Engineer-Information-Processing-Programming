// 19. 다음은 자바 소스 코드이다. 출력 결과를 쓰시오.
// 메소드 오버라이딩, 재귀함수 활용

class parent{
	public int compute(int num){
    	if(num <=1) return num;
        return compute(num-1) + compute(num-2);
    }
 }
 
 class Child extends parent {
 	public int compute(int num){
    	if(num<=1) return num;
        	return compute(num-1) + compute(num-3);
        }
   }
   
  class good{
  	public static void main (String[] args){
    parent obj = new Child();
    System.out.print(obj.compute(4));
   }
 }
 
  