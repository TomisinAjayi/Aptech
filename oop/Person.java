public class Person{
    String name;
    int age;
    String address;

    public String displayName(){
        return this.name;
    }
    public int displayAge(){
        return this.age;
    }
    public String displayAddress(){
        return this.address;
    }
    public String displayName(int age, String address){
        this.age = age;
        this.address = address;
        return "Your name is " + this.name + " and your age is " + this.age + ". You live in " + this.address;
    }
    public static void main(String[] display){
        Person p1 = new Person();
        p1.name = "Tomisin";
        p1.age = 20;
        p1.address = "Magodo";
        System.out.println("My name is " + p1.displayName() + ". I am " + p1.displayAge() + " years old. I live at " + p1.displayAddress() + ".");
        System.out.println(p1.displayName(25, "Yaba"));
    }
}