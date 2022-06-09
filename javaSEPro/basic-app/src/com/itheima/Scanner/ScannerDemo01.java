package com.itheima.Scanner;
import java.util.Scanner;
public class ScannerDemo01 {
    //目标：学会使用键盘录入
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int a=sc.nextInt();
        System.out.println("你的年龄是："+a);
    }
}
