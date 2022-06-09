package com.itheima.branch;
import java.util.Scanner;
public class IfDemo01 {
    public static void main(String[] args) {
        //目标：心跳在60~100之间算正常，否则输出异常
        Scanner heart = new Scanner(System.in);
        System.out.println("请输入你的心跳");
        int heartBeat = heart.nextInt();
        if (heartBeat < 60 || heartBeat > 100) {
            System.out.println("你需要做进一步的检查");
        } else {
            System.out.println("一切正常");
        }
    }
}
