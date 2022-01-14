public class Child extends Parent{
    public String meansOfTransport() {
        return "Our means is planes and vehicles.";
    }
    public static void main(String[] args) {
        Child dami = new Child();
        System.out.println(dami.meansOfTransport());
    }
}