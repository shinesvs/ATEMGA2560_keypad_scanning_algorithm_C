void setup() {
  // put your setup code here, to run once:
  volatile long j;
  volatile char *dirc,*dirf,*dirk,*dira,*outa,x;
  volatile char *outc,*outf,*ink;
  dirf=0x30; *dirf=0xFF;
  dirk=0x107; *dirk=0x00;
  dira=0x21; *dira=0xFF;
  dirc=0x27;outc=0x28;
  outf=0x31;ink=0x106;
  outa=0x22;
  while(1){
    for(int i=0;i<4;i++){
      *outf=1<<i;
      *outa=*ink;
      if(*ink != 0){
        *outc=1<<i;
      for(j=0;j<2000000;j++); 
      *outc=0;
    }
  }
}
}

void loop() {
// put your main code here, to run repeatedly:
}

