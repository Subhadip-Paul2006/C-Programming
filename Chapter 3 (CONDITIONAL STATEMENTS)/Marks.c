// student pass if total obtained 40% and individual subject 33 marks and if failed in any subjcts show in which is failed 
#include <stdio.h>

int main(){
    int maths , science , sst , bengali , english , total ;
    float percent;
    printf("Enter Mark Of Maths: ");
    scanf("%d",&maths);
    printf("Enter Mark Of Science: ");
    scanf("%d",&science);
    printf("Enter Mark Of SST: ");
    scanf("%d",&sst);
    printf("Enter Mark Of Bengali: ");
    scanf("%d",&bengali);
    printf("Enter Mark Of English: ");
    scanf("%d",&english);
    total = ( maths + science + sst + bengali + english );
    percent = ( total / 5) ;
    if ( percent >= 40.0){
        if (maths , science , sst , bengali , english >= 33 ){
            printf("\nPass and percntage obtained is %f and total marks is %d " , percent , total); 
        }
        else{
            printf("\nFail due to lss marks in individual subjct and percntage obtained is %f and total marks is %d " , percent , total);
        }
    }
    else{
        printf("You Failed ! your Prcentage is %f and total marks is %d", percent , total);
    }
    return 0;
}