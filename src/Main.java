public class Main {
    public static void main(String[] args) {
        Student student = new Student();
        student.setId(1);
        student.setName("John");

        print(student);

        student.callNative(); // 调用底层方法，将姓名改为 "Krxk"
        print(student);
    }

    private static void print(Student student) {
        System.out.println(student.getId());
        System.out.println(student.getName());
    }


}