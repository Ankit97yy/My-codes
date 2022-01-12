package assignment_part2;

import javax.xml.crypto.Data;

public class number7 {

}

class employee {
    int emp_code, phone_no;
    String name, address;
    double hra = 0.2, Da = 0.1;
}

class manager extends employee {
    int basic_pay = 30000;
    double Da = 0.12;

}

class typist extends employee {
    int basic_pay = 30000;
    double Da = 0.12;
}

class officer extends employee {
    int basic_pay = 30000;
    double Da = 0.12;
}