public class Student {
    static {
        System.loadLibrary("libnative-lib");
    }
    private int id;
    public String name;

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    /**
     * 下列方法调用 C++ 底层函数，就姓名 修改为  "Krxk"
     */
    public native void callNative();
}
