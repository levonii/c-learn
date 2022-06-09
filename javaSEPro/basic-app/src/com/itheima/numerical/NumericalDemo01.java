package com.itheima.numerical;

public class NumericalDemo01 {
    public static void main(String[] args){
        //需求：数值拆分
        int a=4321;
        int b=a%10;
        System.out.println(b);
        int c = a / 10 % 10;
        int d=c/10%10;
        int e=d/10%10;
        System.out.printf("个位是%d 十位是%d \n百位是%d 千位是%d",b,c,d,e);
    }
}
