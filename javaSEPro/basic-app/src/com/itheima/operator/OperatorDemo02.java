package com.itheima.operator;

public class OperatorDemo02 {
    public static void main(String[] args){
        //目标：验证&& ||运算的优先级    &&优先级大于||
        boolean a=10>2 && 10<2;
        boolean b=10>2 || 10<2 && 2>3;
        System.out.println(a);
        System.out.println(b);
    }
}
