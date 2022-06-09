package com.itheima.type;

public class TypeDemo1 {
    public static void main(String[] args) {
        //目标：熟悉数据类型的自动转换的原理
        byte a=10;
        byte b = 20;
        int c=a+b;
        byte a1 = 10;
        int  b2 = 20;
        int  c2 = a1+b2;
        System.out.printf("%d %d\n",c,c2);
        //目标：强制类型转换
        a1=(byte)b2;
        System.out.println(a1);
    }
}
