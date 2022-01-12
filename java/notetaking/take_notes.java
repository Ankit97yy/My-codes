
// package notetaking;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class take_notes {
    public static void main(String[] args) {
        String s = " _________    _______       ________      _____ ______                      ________       ________      _________    _______      \n"
                + "|\\___   ___\\ |\\  ___ \\     |\\   __  \\    |\\   _ \\  _   \\                   |\\   ___  \\    |\\   __  \\    |\\___   ___\\ |\\  ___ \\     \n"
                + "\\|___ \\  \\_| \\ \\   __/|    \\ \\  \\|\\  \\   \\ \\  \\\\\\__\\ \\  \\    ____________  \\ \\  \\\\ \\  \\   \\ \\  \\|\\  \\   \\|___ \\  \\_| \\ \\   __/|    \n"
                + "     \\ \\  \\   \\ \\  \\_|/__   \\ \\   _  _\\   \\ \\  \\\\|__| \\  \\  |\\____________\\ \\ \\  \\\\ \\  \\   \\ \\  \\\\\\  \\       \\ \\  \\   \\ \\  \\_|/__  \n"
                + "      \\ \\  \\   \\ \\  \\_|\\ \\   \\ \\  \\\\  \\|   \\ \\  \\    \\ \\  \\ \\|____________|  \\ \\  \\\\ \\  \\   \\ \\  \\\\\\  \\       \\ \\  \\   \\ \\  \\_|\\ \\ \n"
                + "       \\ \\__\\   \\ \\_______\\   \\ \\__\\\\ _\\    \\ \\__\\    \\ \\__\\                  \\ \\__\\\\ \\__\\   \\ \\_______\\       \\ \\__\\   \\ \\_______\\\n"
                + "        \\|__|    \\|_______|    \\|__|\\|__|    \\|__|     \\|__|                   \\|__| \\|__|    \\|_______|        \\|__|    \\|_______|\n";
        for (int i = 0; i < s.length(); i++) {
            System.out.print(s.charAt(i));
            try {
                Thread.sleep(2);
            } catch (InterruptedException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
        }
        System.out.println("\n----------------------------------|");
        System.out.println(
                "Enter c to create note            |\nEnter r to read a note            |\nEnter a to append to a note       |\nEnter s to show list of notes     |\nEnter d to delete a note          |\nEnter q to quit                   |");
        System.out.println("----------------------------------|");
        String choice = "";
        Scanner sc = new Scanner(System.in);
        take_notes tk = new take_notes();
        while (!choice.equals("q")) {
            System.out.println("\n\n---------------------");
            System.out.print("enter your choice -> ");
            choice = sc.nextLine();
            tk.choice(choice);

        }
    }

    void choice(String s) {
        String n;
        int p;
        Scanner sc = new Scanner(System.in);
        switch (s) {
            case "r":
                if (new File("list.txt").length() == 0) {
                    System.out.println("\n**There Are No Files To Read**");
                    break;
                }
                read(0);
                System.out.print("\nEnter File Number to read -> ");
                p = sc.nextInt();
                read(p);
                break;
            case "c":
                System.out.print("\nEnter file name -> ");
                n = sc.nextLine();
                create(n);
                break;
            case "d":
                if (new File("list.txt").length() == 0) {
                    System.out.println("\n**There Are No Files**");
                    break;
                }
                read(0);
                delete();
                break;
            case "a":
                read(0);
                append();
                break;
            case "s":
                if (new File("list.txt").length() == 0) {
                    System.out.println("\n**There Are No Files**");
                    break;
                }
                read(0);
                break;
            case "q":
                break;
            default:
                System.out.println("\nEnter a valid choice");
                break;
        }
    }

    void create(String name) {
        File f = new File(name + ".txt");
        if (f.exists()) {
            System.out.println("File name already exist");
        } else
            try {
                f.createNewFile();
                write(f);
                System.out.println("\n---------------------------------------");
                System.out.println("**File Has Been Saved Successfuly**");
                list_files(f);
            } catch (IOException e) {
                e.printStackTrace();
            }
    }

    void write(File f) {
        String note;
        Scanner sc = new Scanner(System.in);
        System.out.println("\n***Write Your Note***\n\n");
        note = sc.nextLine();
        try {
            FileWriter fileWriter = new FileWriter(f.getName(), true);
            fileWriter.write(note + " ");
            fileWriter.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    void read(int s) {
        try {
            String temp;
            if (s == 0) {
                System.out.println("\nYour Files:-\n");
                temp = "list.txt";
            } else {
                temp = get_file_name(s);
                System.out.println("\nFile Name:- " + temp + ":--");
                System.out.println("===========================");
            }
            File f = new File(temp);
            // // if(f.length()==0){
            // // System.out.println("There Are No files to Read");
            // // return;
            // }
            Scanner sc = new Scanner(f);
            String file_content;
            if (!f.exists()) {
                System.out.println("File does not exist");
                return;
            }
            int i = 1;
            while (sc.hasNextLine()) {
                file_content = sc.nextLine();
                if (s == 0) {
                    System.out.println("----------------------------");
                    System.out.println(i + ". " + file_content);
                    System.out.println("----------------------------");
                    i++;
                } else
                    System.out.println(file_content);
            }
            sc.close();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
    }

    void delete() {
        int s;
        System.out.print("Enter file number to delete -> ");
        Scanner sc = new Scanner(System.in);
        s = sc.nextInt();
        File f = new File(get_file_name(s));
        if (f.delete()) {
            System.out.println("\n**You have deleted " + f.getName() + "**");
        } else {
            System.out.println("Some problem occured while deleteing");
            return;
        }
        delete_list_items(s);
    }

    void append() {
        String s;
        System.out.print("Enter file number:- ");
        Scanner sc = new Scanner(System.in);
        s = get_file_name(sc.nextInt());
        File f = new File(s);
        if (f.exists()) {
            write(f);
        }
    }

    void list_files(File f) {
        File list = new File("list.txt");
        try {
            list.createNewFile();
        } catch (IOException e1) {
            e1.printStackTrace();
        }
        try {
            FileWriter fileWriter = new FileWriter(list.getName(), true);
            fileWriter.write(f.getName() + "\n");
            fileWriter.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    void delete_list_items(int n) {
        int count = 1;
        File list = new File("list_temp.txt");
        try {
            list.createNewFile();
            FileWriter fileWriter = new FileWriter(list.getName(), true);
            Scanner sc = new Scanner(new File("list.txt"));
            while (sc.hasNextLine()) {
                if (n == count)
                    sc.nextLine();
                else
                    fileWriter.write(sc.nextLine() + "\n");
                count++;

            }
            fileWriter.close();
        } catch (IOException e) {
            e.printStackTrace();
        }

        File oldlist = new File("list.txt");
        oldlist.delete();
        list.renameTo(new File("list.txt"));
    }

    String get_file_name(int n) {
        Scanner sc;
        try {
            sc = new Scanner(new File("list.txt"));
            int count = 1;
            String file_name;
            while (sc.hasNextLine()) {
                file_name = sc.nextLine();
                if (count == n) {
                    return file_name;
                }
                count++;
            }
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
        return "";
    }

}
