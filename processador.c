#include <stdio.h>
typedef unsigned char byte;
typedef struct{

    byte opcode;
    byte operand;

}inst;




int main(int argc , char **argv){
    int pc = 0;
    if (argc != 2){
        printf("%s <file name>\n",argv[0]);
        return 1;
    }
    inst programa[256];
    FILE * filein = fopen( argv[1],"rb");
    unsigned short buf;
    int i = 0;
    while (fread (&buf , 2 , 1 , filein) != 0){
        programa[i].opcode = buf & 0xFF;
        programa[i].operand = (buf >> 8) & 0xFF;
        i++;
    }
    fclose(filein);
    while (programa[pc].opcode != 0b00010011){

        switch (programa[pc].opcode){
            
            case 0b00000000:
                //load memória
                // acc = memoria[programa[i].operand];
                //acc = programa[pc].operand;
                pc++;
                break;

            case 0b00000001:
                //load valor
                acc = programa[pc].operand;
                pc++;
                break;

            case 0b00000010:
                //store
                //&programa[pc].operand = acc;
                pc++;
                break;

            case 0b00000011:
                //add
                acc += programa[pc].operand;
                pc++;
                break;

            case 0b00000100:
                //sub
                acc -= programa[pc].operand;
                pc++;
                break;

            case 0b00000101:
                //mul
                acc *= programa[pc].operand;
                pc++;
                break;

            case 0b00000110:
                //div
                if (*programa[pc].operand != 0) {
                    acc /= programa[pc].operand;
                } else {
                    stat = 1; // divisão por zero
                }
                pc++;
                break;

            case 0b00000111:
                //inc
                acc++;
                pc++;
                break;

            case 0b00001000:
                //dec
                acc--;
                pc++;
                break;

            case 0b00001001:
                //and
                int *ptr = programa[pc].operand;
                acc &= *ptr;
                pc++;
                break;

            case 0b00001010:
                //or
                /*
                int *ptr = programa[pc].operand;
                acc |= *ptr;
                */
                //acc |= *programa[pc].operand;
                pc++;
                break;
                
            case 0b00001011:
                //not
                acc = ~acc;
                pc++;
                break;

            case 0b00001100:
                //jump
                	//pc = programa[pc].operand;
                break;

            case 0b00001101:
                //jz
                if (acc == 0) {
                    //pc = programa[pc].operand;
                } else {
                    pc++;
                }
                break;

            case 0b00001110:
                //jnz
                if (acc != 0) {
                	//pc = programa[pc].operand;
                } else {
                pc++;
                }
                break;
            
            case 0b00001111:
                //jg
                if (acc > *programa[pc].operand) {
                    //pc = programa[pc].operand;
                } else {
                    pc++;
                }
            break;

            case 0b00010000:
                //jl
                if (acc < *programa[pc].operand) {
                    //pc = programa[pc].operand;
                } else {
                    pc++;
                }
                break;

            case 0b00010001:
                //jge
                if (acc >= *programa[pc].operand) {
                    //pc = programa[pc].operand;
                } else {
                    pc++;
                }
                break;

            case 0b00010010:
                //jle
                if (acc <= *programa[pc].operand) {
                    //pc = programa[pc].operand;
                } else {
                    pc++;
                }
            break;
            default:
                stat = 2; // opcode inválido
                pc++;
                break;
        }



    }
    return 0;
}

