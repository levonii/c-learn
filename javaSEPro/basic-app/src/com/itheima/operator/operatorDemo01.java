package com.itheima.operator;

public class operatorDemo01 {
    public static void main(String[] args) {
        //目标：熟悉三元操作符
        int learn=90;
        int learn1=30;
        String grade=learn>learn1? "不及格": "及格";
        System.out.println(grade);
        //目标：比较两个数的大小  得出小的那一个
        int a=20;
        int b=30;
        int c=a>b? b:a;
        System.out.println(c);

        System.out.println("---------------------");
        //目标：比较三个数的大小，得出较小的那一个
        int ming=100;
        int zhao=200;
        int chen=400;
        int last=ming>zhao? zhao:ming;
        last=last>chen? chen:last;
        System.out.println(last);

        //目标：实现三元操作符的嵌套 一行代码实现比较三位数的大小
        int min=ming>zhao? zhao>chen? chen:zhao :ming>chen? chen:ming;
        System.out.println(min);
    }
}
