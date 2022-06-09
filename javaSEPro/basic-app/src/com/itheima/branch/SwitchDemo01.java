package com.itheima.branch;
import java.util.Scanner;
public class SwitchDemo01 {
    public static void main(String[] args){
        //目标：备忘录日程显示
        Scanner day=new Scanner(System.in);
        System.out.println("想要查看周几的日程");
        String week=day.next();
        switch(week){
            case "一":
                System.out.println("埋头苦干，解决bug");
                break;
            case "二":
                System.out.println("请人帮忙");
                break;
            case "三":
                System.out.println("吃喝玩乐");
                break;
            default:
                System.out.println("数据有误！");
                break;
        }
    }

}
