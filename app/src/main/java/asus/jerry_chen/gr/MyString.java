package asus.jerry_chen.gr;

/**
 * Created by Jerry_Chen on 2016/9/3.
 */
public class MyString {

    static {
        System.loadLibrary("gr");
    }

    public native String getStringFromJni();

}
