public class Dami extends Human{
    public String eating() {
        return "Dami loves to eat";
    }
    public String walking() {
        return "Dami's walking posture is quite poor";
    }
    public String seeing() {
        return "Dami has a sharp eyesight";
    }
    public static void main(String[] args) {
        Dami boy1 = new Dami();
        Human boy2 = new Human();
        System.out.println(boy1.eating());
        System.out.println(boy1.walking());
        System.out.println(boy1.seeing());
        System.out.println(boy2.eating());
    }
}