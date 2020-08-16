#include "pr_test_libraries.h"

#include "Arduino.h"

pr_test::pr_test(){
    this->data=data;
    this->data1=data1;
}
void pr_test::pr_printdata(int data,String data1){
    Serial.println(data+""+data1);
}
